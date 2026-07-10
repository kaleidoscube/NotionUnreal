# NotionUnreal
A Notion Integration for Unreal Engine. Allows you to create tasks or pages for bug tracking and feature requests in standalone development games or the Unreal Editor.

The integration can be seamlessly added to your existing Unreal project as a plugin.

It offers the following features:

- Creating tasks in Notion directly from the Editor
- Creating tasks in Notion from your game (development build) - perfect for early bug reporting
- Setting every task property, such as status, assignee, and tags, right inside the UI
- Option to hide certain task properties from the UI
- Option to set properties in advance via blueprints - perfect for game location tags, weapon tags, etc.

- Attaching the current game log to the task you are creating
- Attaching a screenshot to the task you are creating
- You can scribble inside of the screenshot you want to upload for additional context or instructions

> **💡 Logs and screenshots are uploaded directly to Notion via its [File Upload API](https://developers.notion.com/docs/uploading-small-files) — no third-party file hosting is required.**

![NotionOverlay](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/a9ba106b-2e6e-40c8-ba27-6d89898b0701)


### Video Demo
[![Youtube Video Demo](https://github.com/kaleidoscube/NotionUnreal/assets/100562356/4535da5d-34e5-462b-9fb5-9b0178c7717d)](http://www.youtube.com/watch?v=kd9rsYIT0A8 "Notion Integration for Unreal Engine - Free plugin"))


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
5. Go to `Secrets` and copy the secret key.
4. Open the Notion database where you want to store your Unreal Tasks and open the small menu on the top right. There, under Connections, connect the database with your newly created Integration.
![image](https://github.com/user-attachments/assets/79d3e110-305d-436f-b8ed-fadcc489dea5)


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
7. Paste the inner ID (in this case 3es5asdasda83ca3440fef5a7db313) from your database URL into the field called `Notion Database ID`.
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

Logs and screenshots are uploaded **directly to Notion** via the [File Upload API](https://developers.notion.com/docs/uploading-small-files) — no third-party file hoster or extra configuration is needed. The Notion API key you already configured is all that's required.

A few things to know:

- Notion caps single-part uploads at **20 MB per file**. Workspaces on the **free plan are limited to 5 MB per file**.
- Logs are uploaded **gzipped** (as `log_<time>.txt.gz`). This is required: the Cloudflare firewall in front of Notion's API rejects raw log text with a 403 block page, so the log is sent as opaque binary. Unpack with any archive tool (7-Zip, WinRAR, or `tar -xzf` in a terminal).
- The `Max Upload Size MB` setting (under `Notion Integration -> Settings`, default 5 MB) guards against oversized uploads: if the compressed log exceeds the limit it is tail-truncated (the most recent output is kept) and recompressed, and screenshots are recompressed at a lower JPEG quality until they fit. If your workspace is on a paid plan, you can raise this up to 20.

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
