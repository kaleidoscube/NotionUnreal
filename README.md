# NotionUnreal
A Notion Integration for Unreal Engine. Allows to create tasks or pages for bug tracking, feature requests in standalone games and the Unreal Editor.

The integration can be seamlessly added to your existing Unreal project as a plugin.

It offers the following features:

- Creating tasks in Notion directly from the Editor
- Creating tasks in Notion from your game (development build) - perfect for early bug reporting
- Setting every task property, such as status, assignee, and tags, right inside the UI
- Option to hide certain task properties from the UI
- Option to set properties in advance via blueprints - perfect for game location tags, weapon tags, etc.

> **💡 The following features are dependent on a third party (or your own) file hosting setup, as Notion does not allow files to be uploaded:**


- Attaching the current game log to the task you are creating
- Attaching a screenshot to the task you are creating
- You can scribble inside of the screenshot you want to upload for additional context or instructions

![Untitled](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/082b9f88-333b-4ce5-8921-86029815de6a)

# Setup

### A. Setup in Notion

You need to create an API access for your Notion database for the plugin to write to it.

Therefore, go to https://www.notion.so/my-integrations and follow these steps:

1. Click `+ New integration`.
2. Enter the integration name, for example "Unreal".
3. In the next step, choose `Capabilities` and activate the following:
    1. Read content
    2. Insert content
    3. Read user information without email addresses
4. Go to `Secrets` and copy the secret key.

### B. Setup in Unreal

Follow these steps to make the plugin work as intended:

1. Copy the "NotionUnreal" folder into your project's "Plugins" directory.
2. Open your project. If necessary, recompile your project first.
3. Under `Edit -> Plugins`, check if "NotionUnreal" is enabled. If not, enable it and restart the editor.
4. Under `Edit -> Project Settings`, you will find a new settings entry called `Notion Integration` in the `Engine` category.
5. Paste your secret key from step A4 into the field called `Notion APIKey`.
6. Go to your [notion.so](http://notion.so/) and open the database where you store your project's tasks. We need the ID of your database so that Unreal knows where to create new entries.
The URL should look something like this:
`notion.so/YOURWORKSPACE/3es5asdasda83ca3440fef5a7db313?v=3ef6a086`
7. Paste the yellow ID from your database URL into the field called `Notion Database ID`.
8. Restart your editor!
![Untitled (1)](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/67601682-1764-4c04-ad67-1c22e556b441)

> **💡 If you want to check if your connection was successful, reopen the Notion Integration settings. The entries “Database Properties” and “Users” should be filled with data from your notion workspace.**

# Basic Usage

The usage of the plugin is super easy.

### During play mode or in standalone

1. Start your game, then press the keyboard shortcut `CTRL + T`. You can change this shortcut inside the Notion Integration settings. Alternatively, open up the console and type in `Notion.OpenTaskUI`.
2. The task creation window should open up. The plugin pulls your Notion Database properties with every start of the editor, so every property you see in Notion should also be visible here.
3. In order to create a new task, you need to fill in a new title. Hit enter or "Submit" to create a new task. The newly created task should show up inside of your Notion database instantly.

### Inside the editor

1. Press `CTRL + T` inside the editor to open up a new editor window with the Notion UI. Please note that you need to close this window on your own after creating a new task.
2. The editor UI is limited to a certain degree; you will not be able to upload the log or a screenshot from here.

# Adding Logs and Screenshots

**Unfortunately, the Notion API does not allow files to be uploaded directly to Notion.** Therefore, if you want full functionality, **you need another third-party file hoster** with REST API access to upload logs and screenshots.

*We use [bunny.net](https://bunny.net/?ref=b7r15bu3if) for this, as we found the pricing to be quite good. At the time of writing this documentation, you would probably only pay the minimum of $1 per month for file hoster usage.*

*However, this should work with any other file hoster with REST API access. The plugin is written in a way that allows you to connect to other servers as well. Knowledge of cURL is recommended - you can configure the request headers with your own AccessKeys, etc. inside the Notion Integration settings.*

### Setting up file hosting with [bunny.net](https://bunny.net/?ref=b7r15bu3if)

Sign up for an account at [bunny.net](https://bunny.net/?ref=b7r15bu3if) and create a new storage zone:

1. Select `Storage` in the menu and click `+ Add Storage Zone`.
2. Give your storage space a name, such as "UnrealNotionStorage". You can configure the storage as you like. We choose the Standard Tier with just one storage region.
3. After you create your storage zone, you will find your API access data once you open the storage and click on `FTP & API Access`. We will need this information later.
4. Next, you need to create a so-called Pull Zone so that the content you upload is publicly available and we can embed these files inside your Notion tasks.
5. Select `CDN` in the menu and click `+ Add Pull Zone`.
6. Give your pull zone a name, such as "UnrealNotionPublic". Under "Origin Type," choose "Storage Zone" and select your recently created storage. You can configure the rest as you like. We choose the Standard Tier with just one pricing region.
7. After you create your pull zone, open it and see your linked hostnames. This URL is needed in the next step.

### Setting up access inside Unreal

Now we need to tell the Unreal Notion plugin where it can upload files to.

1. Open the `Notion Integration` settings in your `Project Settings`.
2. Under `File Hosting CUrl Auth` you will see multiple entries that we need to fill. 
    1. `File Host Upload Url` would be a combination of your Hostname and your Username that you can find within the bunny storage API access settings. 
        
        `https://storage.bunnycdn.com/username`
        
    2. `AccessKey` is the password that you find in the bunny storage API settings. Please note: Don’t use the read-only password, as we want to upload files to this storage! 
    3. `File Public Parent Url` is the URL that you see inside of your pullzone.

![Untitled (2)](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/c8c7b780-40c6-489e-88dc-2e2bf58ac02e)
This is what the config looks like at our company using bunny as a file hoster.

### Sending Logs and Screenshots

Now you should be good to go! Inside the game, open the Notion window and create a new task.
At the bottom of the window, you’ll see two checkboxes for “Log” and “Screenshot” that you can enable. The files should now be displayed inside the tasks you create!

### Paint Overlay

Sometimes, it's great if you can scribble over a screenshot to show your coworker exactly what change you want or to explain a bug in detail. That's why we integrated a tiny paint overlay within the integration.

The paint mode opens up as soon as the "Send screenshot" checkbox is enabled. At the top of the screen, you will see a small color selection menu. Simply click anywhere inside the screen to paint. When you start painting, the Notion Task Window will disappear until you are done. If it is in the way nonetheless, you can move this window around via the small top bar.
![Untitled (3)](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/e3d34b6c-28ed-4a7e-ae80-24386f22632f)

You can change colors or add new ones inside of the plugins settings. If you don’t want to use this feature, you can disable the paint mode here as well.

# Other Settings

There are minor other things that you can tweak inside of the plugin settings:

- You can hide properties from the UI. You don’t want everyone to be able to set due dates, assignees or the like? Inside of the “Database Properties” array (you can find this in the settings), you can uncheck `IsVisibleInUI` and the property will no longer be shown in Unreal.
- You can set a default value for each property. For selection properties such as tags or the status, please use the actual value name, not the ID.
![Untitled (4)](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/08b9fd35-bc84-4d1c-84cc-d06767e38823)
With this property config, the property is visible and will always have the “Animation” tag set initially.

- You can do the same with users inside the “Database Users” array.
- You can choose the default position of the ingame Task Creation UI
- You can make “Send Log” a default

### Shortcuts

The Shortcut for the ingame UI can be changed within the plugin settings. Please restart the editor after you change this, as the shortcut needs to be registered during editor startup.

The Shortcut for the editor UI can be changed inside of the `Editor Preferences` (not the Project Settings!). Simply search for “Notion”, and you can alter this command as well.

# Blueprint Features

There are a few Blueprint functions that you can implement that we find very useful. 

#### Set Notion Task Property

This will set the initial value of a property - when you open up the task creatio UI, this value is already set. For tags, this will also create new tags if they are not existing yet. 
![Untitled (5)](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/5dc8ece1-be18-4504-a4f7-4ec0230069bd)
We use this in our (linear) game in order to set a location tag at each savepoint. So every task is associated with the right level and game region. A different idea for this would be to set the tag of the current weapon equipped. 

#### Clear Notion Task Property

This will remove a previously set value again.

#### Clear Notion Task Properties

This will remove all values set at all properties.

#### Save Notion Properties accross sessions

This will save the initial value that you set via the “Set Notion Task Property” function. Even after restarting the game, the value will still be set initially. 


If you have any further questions, please reach out to us :) 

Special thanks to Damian Nowakowski for the Editor UI Shortcut Template that we used in this plugin: https://github.com/zompi2/UE4EditorPluginTemplate
