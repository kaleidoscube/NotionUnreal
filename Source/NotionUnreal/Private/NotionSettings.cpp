// Copyright (c) 2023 kaleidoscube GmbH, Germany. All rights reserved.
#include "NotionSettings.h"
#include "Serialization/JsonSerializer.h"


UNotionSettings::UNotionSettings(const FObjectInitializer& ObjectInitializer) {

}

void UNotionSettings::RetrieveDatabase()
{
    const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();

    FHttpModule& httpModule = FHttpModule::Get();

    // Create an asynchronous http request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> httpRequest = httpModule.CreateRequest();

    httpRequest->SetVerb(TEXT("GET"));

    httpRequest->SetURL("https://api.notion.com/v1/databases/" + NotionSettings->notionDatabaseID);

    httpRequest->AppendToHeader(TEXT("Authorization"), TEXT("Bearer " + NotionSettings->notionAPIKey));

    httpRequest->AppendToHeader(TEXT("Notion-Version"), TEXT("2022-06-28"));

    UE_LOG(LogTemp, Warning, TEXT("Retrieving Notion Database..."));

    //UE_LOG(LogTemp, Warning, TEXT("Retrieving Notion Database... with API Key %s"), *NotionSettings->notionAPIKey);

    // Callback will execute when the HTTP call is complete
    httpRequest->OnProcessRequestComplete().BindUObject(this, &UNotionSettings::OnDatabaseRetrieved);

    httpRequest->SetTimeout(20);
    httpRequest->ProcessRequest();
}

void UNotionSettings::OnDatabaseRetrieved(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    TSharedPtr<FJsonObject> JsonObject;

    // Create a reader pointer to read the json data
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

    // Deserialize the json data given Reader and the actual object to deserialize
    if (FJsonSerializer::Deserialize(Reader, JsonObject)) {

        UE_LOG(LogTemp, Warning, TEXT("Retrieving Notion Database... with content content %s"), *Response->GetContentAsString());

        if (JsonObject->GetArrayField("title").Num() > 0) {
            DatabaseName = JsonObject->GetArrayField("title")[0]->AsObject()->GetStringField("plain_text");
        }

        TMap<FString, TSharedPtr<FJsonValue>> PropObject;
        PropObject = JsonObject->GetObjectField("properties")->Values;

        TArray<FString> KeyArray;
        PropObject.GenerateKeyArray(KeyArray);

        TSet<FString> DeletionCheck;

        if (KeyArray.Num() == 0) {
            UE_LOG(LogTemp, Warning, TEXT("Notion Properties received where 0, therefore not updating properties map..."));
        }
        else {

            for (int i = 0; i < KeyArray.Num(); i++) {
                
                TSharedPtr<FJsonObject> PropData;
                PropData = PropObject.Find(KeyArray[i])->Get()->AsObject();

                FString id = PropData->GetStringField("id");

                FNotionProperty newProp = PropDataToEnumObject(PropData);

                if (newProp.ID != "") {
                    if (DatabaseProperties.Contains(id)) {
                        
                        FNotionProperty existingProp = *DatabaseProperties.Find(id);

                        existingProp.Name = newProp.Name;
                        existingProp.PropertyType = newProp.PropertyType;
                        existingProp.Options = newProp.Options;

                        DatabaseProperties.Emplace(id, existingProp);
                    }
                    else {
                        DatabaseProperties.Add(id, newProp);
                    }
                }

                if (PropData->GetStringField("type") == "title") {
                    TaskNameProperty = KeyArray[i];
                }

                DeletionCheck.Add(id);
            }

            //DELETE UNUSED Properties from array. Not deleting when iterating over Map itself, but instead on a different list so it's not interfering with the loop
            TSet<FString> DeletionList;
            for (auto& Elem : DatabaseProperties)
            {
                if (!DeletionCheck.Contains(*Elem.Value.ID)) {
                    DeletionList.Add(Elem.Value.ID);
                }
            }
            for (auto& Elem : DeletionList)
            {
                DatabaseProperties.Remove(Elem);
            }

            SaveConfig(CPF_Config, *GetDefaultConfigFilename());


        }
    }
}

FNotionProperty UNotionSettings::PropDataToEnumObject(TSharedPtr<FJsonObject> PropData) {

    FNotionProperty newProp = FNotionProperty();
    newProp.Name = PropData->GetStringField("name");
    newProp.ID = PropData->GetStringField("id");

    if (PropData->GetStringField("type") == "select") {
        
        TArray<FNotionSelection> options;

        TArray<TSharedPtr<FJsonValue>> JsonOptions = PropData->GetObjectField("select")->GetArrayField("options");
        for (int o = 0; o < JsonOptions.Num(); o++) {
            FNotionSelection newSelection = FNotionSelection();
            newSelection.Name = JsonOptions[o]->AsObject()->GetStringField("name");
            newSelection.Color = NameToNotionColor(JsonOptions[o]->AsObject()->GetStringField("color"));

            options.Add(newSelection);
        }

        newProp.PropertyType = ENotionPropertyType::Select;
        newProp.Options = options;

    }
    else if (PropData->GetStringField("type") == "multi_select") {
        
        TArray<FNotionSelection> options;

        TArray<TSharedPtr<FJsonValue>> JsonOptions = PropData->GetObjectField("multi_select")->GetArrayField("options");
        for (int o = 0; o < JsonOptions.Num(); o++) {
            FNotionSelection newSelection = FNotionSelection();
            newSelection.Name = JsonOptions[o]->AsObject()->GetStringField("name");
            newSelection.Color = NameToNotionColor(JsonOptions[o]->AsObject()->GetStringField("color"));

            options.Add(newSelection);
        }

        newProp.PropertyType = ENotionPropertyType::Multi_Select;
        newProp.Options = options;
    }
    else if (PropData->GetStringField("type") == "status") {
       
        TArray<FNotionSelection> options;

        TArray<TSharedPtr<FJsonValue>> JsonOptions = PropData->GetObjectField("status")->GetArrayField("options");
        for (int o = 0; o < JsonOptions.Num(); o++) {
            FNotionSelection newSelection = FNotionSelection();
            newSelection.Name = JsonOptions[o]->AsObject()->GetStringField("name");
            newSelection.Color = NameToNotionColor(JsonOptions[o]->AsObject()->GetStringField("color"));

            options.Add(newSelection);
        }

        newProp.PropertyType = ENotionPropertyType::Status;
        newProp.Options = options;
    }
    else if (PropData->GetStringField("type") == "title" ||
        PropData->GetStringField("type") == "relation" ||
        PropData->GetStringField("type") == "formula" ||
        PropData->GetStringField("type") == "rollup" ||
        PropData->GetStringField("type") == "created_by" ||
        PropData->GetStringField("type") == "created_time" ||
        PropData->GetStringField("type") == "last_edited_by" ||
        PropData->GetStringField("type") == "last_edited_time" ||
        PropData->GetStringField("type") == "unique_id") {

        newProp.ID = "";
    }
    else if (PropData->GetStringField("type") == "checkbox"){
        newProp.PropertyType = ENotionPropertyType::Checkbox;
    }
    else if (PropData->GetStringField("type") == "email") {
        newProp.PropertyType = ENotionPropertyType::Email;
    }
    else if (PropData->GetStringField("type") == "number") {
        newProp.PropertyType = ENotionPropertyType::Number;
    }
    else if (PropData->GetStringField("type") == "people") {
        newProp.PropertyType = ENotionPropertyType::People;
    }
    else if (PropData->GetStringField("type") == "phone_number") {
        newProp.PropertyType = ENotionPropertyType::Phone_Number;
    }
    else if (PropData->GetStringField("type") == "rich_text") {
        newProp.PropertyType = ENotionPropertyType::Rich_Text;
    }
    else if (PropData->GetStringField("type") == "url") {
        newProp.PropertyType = ENotionPropertyType::Url;
    }
    else if (PropData->GetStringField("type") == "date") {
        newProp.PropertyType = ENotionPropertyType::Date;
    }

    return newProp;
}


void UNotionSettings::RetrieveUsers()
{
    const UNotionSettings* NotionSettings = GetDefault<UNotionSettings>();

    FHttpModule& httpModule = FHttpModule::Get();

    // Create an asynchronous http request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> httpRequest = httpModule.CreateRequest();

    httpRequest->SetVerb(TEXT("GET"));

    httpRequest->SetURL("https://api.notion.com/v1/users?page_size=100");

    httpRequest->AppendToHeader(TEXT("Authorization"), TEXT("Bearer " + NotionSettings->notionAPIKey));

    httpRequest->AppendToHeader(TEXT("Notion-Version"), TEXT("2022-06-28"));

    // Callback will execute when the HTTP call is complete
    httpRequest->OnProcessRequestComplete().BindUObject(this, &UNotionSettings::OnUsersRetrieved);

    httpRequest->SetTimeout(20);
    httpRequest->ProcessRequest();
}

void UNotionSettings::OnUsersRetrieved(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    TSharedPtr<FJsonObject> JsonObject;

    // Create a reader pointer to read the json data
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

    // Deserialize the json data given Reader and the actual object to deserialize
    if (FJsonSerializer::Deserialize(Reader, JsonObject)) {
        
        TArray<TSharedPtr<FJsonValue>> UserList;
        UserList = JsonObject->GetArrayField("results");

        TSet<FString> DeletionCheck;

        if (UserList.Num() == 0) {
            UE_LOG(LogTemp, Warning, TEXT("Notion Users received where 0, therefore not updating users map..."));
        }
        else {

            for (int i = 0; i < UserList.Num(); i++) {
                FString id = UserList[i]->AsObject()->GetStringField("id");

                if (DatabaseUsers.Contains(id)) {
                    FNotionUser existingUser = *DatabaseUsers.Find(id);
                    existingUser.Name = UserList[i]->AsObject()->GetStringField("name");

                    DatabaseUsers.Emplace(id, existingUser);
                }
                else {
                    if (UserList[i]->AsObject()->GetStringField("type") == "person") {
                        FNotionUser newUser = FNotionUser();
                        newUser.Name = UserList[i]->AsObject()->GetStringField("name");
                        newUser.ID = UserList[i]->AsObject()->GetStringField("id");
                        DatabaseUsers.Add(newUser.ID, newUser);
                    }
                }

                DeletionCheck.Add(id);
            }

            //DELETE UNUSED Properties from array. Not deleting when iterating over Map itself, but instead on a different list so it's not interfering with the loop
            TSet<FString> DeletionList;
            for (auto& Elem : DatabaseUsers)
            {
                if (!DeletionCheck.Contains(*Elem.Value.ID)) {
                    DeletionList.Add(Elem.Value.ID);
                }
            }
            for (auto& Elem : DeletionList)
            {
                DatabaseUsers.Remove(Elem);
            }

            SaveConfig(CPF_Config, *GetDefaultConfigFilename());
        }
    }
}

FColor UNotionSettings::NameToNotionColor(FString name) {
    if (name == "default") {
        return FColor(241, 240, 239);
    }
    if (name == "gray") {
        return FColor(227, 226, 224);
    }
    if (name == "brown") {
        return FColor(238, 224, 218);
    }
    if (name == "orange") {
        return FColor(250, 222, 201);
    }
    if (name == "yellow") {
        return FColor(253, 236, 200);
    }
    if (name == "green") {
        return FColor(219, 237, 219);
    }
    if (name == "blue") {
        return FColor(211, 229, 239);
    }
    if (name == "purple") {
        return FColor(232, 222, 238);
    }
    if (name == "pink") {
        return FColor(245, 224, 233);
    }
    if (name == "red") {
        return FColor(255, 226, 221);
    }
    return FColor();
}

