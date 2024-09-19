# Exercise 13
## More Unreal Practice

### Problem 1 - Create a project and add models

Launch the Unreal Editor, select Games as the New Project Category and click the Next button. Select the Blank Template and click the Next button. In the Project Settings, select a C++ Project on the upper left and select No Starter Content on the middle right. Select a Folder and enter Exercise13 as the Name for the project at the bottom. Click the Create Project button near the bottom right.

If the project creation process brought you to your IDE (Visual Studio or Xcode), return to the Unreal Editor. Right click in the Content Browser panel on the bottom and select New Folder near the top. Rename the new folder Exercise13. Double click the new folder to open it, then add a folder named Maps using the same process.

Click the Save Current button in the toolbar near the top middle of the editor (or use Ctrl+S) to save the current map. Navigate to the Maps folder in the popup, double click it, change the name at the bottom of the popup to Map0, then click the Save button near the bottom right of the popup.

Select Edit > Project Settings from the top menu bar. Click Maps & Modes in the pane on the left. In the Default Maps section on the right, set both the Editor Startup Map and the Game Default Map to Map0 by clicking the dropdown to the right of the map icon and selecting Map0. Click the x in the upper right corner of the Project Settings window to close it.

Navigate to the Exercise13 folder in the Content Browser panel. Create a new folder named Art. Navigate into that folder. Create 2 folders with appropriate names for 2 models you're going to import. Import your 2 models into the 2 folders (any of the models I provided in the Week 1 Models reading will work fine, but you can create or download other models if you prefer).

Follow the steps in the Chapter 6 reading to add an orthographic camera to the map, to modify the light source, and to remove the extraneous actors on the map.

### Problem 2 - Build blueprints and add to map

Create a C++ script for each of your static meshes. Navigate to the Exercise13 folder in the Content Browser panel and create a new folder named Blueprints. Create a blueprint from each of your scripts, adding the corresponding static mesh to the blueprint and making the appropriate changes so the static mesh simulates physics and doesn't have any linear damping.

Drag an instance of each of your blueprints into the map, change their locations so one is on the left and one is on the right in a horizontal line, and run the game. Both Actors should fall down.

### Problem 3 - Bounce teddy bears off each other

Change the appropriate Project Settings to keep the Actors in the YZPlane and to turn off gravity.

Navigate to the Exercise13 folder in the Content Browser panel and create a new folder named Physics. Create a physical material with maximum Restitution, save it in the Physics folder, and apply the physical material to the static meshes in both blueprints.

Edit the constructor and BeginPlay functions in the scripts for the blueprints to get the Actor on the left moving to the right and the Actor on the right moving to the left (we want the Actors to bump into each other). Feel free to use the solution to the previous exercise to figure out what code to add to the BeginPlay function to get your Actors moving in the correct directions. 

Build the project in your IDE, go to the Unreal Editor, and run the game. Your two Actors should move toward each other, bounce off each other, and leave the game on the left and right. If they stick to each other instead of bouncing, try adding more impulse force to get them moving faster; I had to do that!

### Exercise Solution

 Note: When you open the solution (or any Unreal projects you created), Unreal does NOT automatically open a level (map) for you; that's why we change the project settings above. If you don't see the map you expect to see when you open an Unreal project, type Ctrl+O (or go to the top menu bar and select File > Open Level …). Double-click on Map0 to open the level.

Mac Users: When you try to open the solution project below, you'll get a popup that says you're missing modules and asking if you'd like to rebuild them now. Click the Yes button. 