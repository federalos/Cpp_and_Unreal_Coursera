# Exercise 11
## Don't Destroy Me

### Problem 1 – Create project and add pawn and player controller

Create a new Unreal project named `DontDestroyMe`. Add a pawn and player controller. Modify the game mode to set your pawn and player controller. Use `Project Settings > Maps and Modes` to select your `custom game mode`.

### Problem 2 – Add menu button

Add a `DestroyWidget` to your project and create a menu button that will destroy the pawn. Configure the menu button to display an unhighlighted image for the Normal image and a highlighted image for the Hovered and Pressed images. Modify the build file to include UMG and Slate as shown in the `Menu Buttons` video. Add the appropriate to you game mode to add the destroy widget to the viewport; don't forget to populate your `UPROPERTY` for the game mode in the Blueprints editor.

Run your game to make sure that both the destroy button and the pawn appear in the map and that the destroy button highlights and unhighlights properly.

### Problem 3 – Add On Clicked event to destroy button

Add a `DestroyPawn` function that destroys your pawn to your player controller.

Add the `On Clicked` event to the destroy button. In the `Blueprints` event graph, set the player controller to only interact with the UI and show the mouse cursor. Cast the player controller to your Blueprint for the player controller and call your `DestroyPawn` function. Finally, remove the `DestroyWidget` (self) from parent.

When you run your game now, clicking on your destroy button should destroy your pawn.

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_3/4_Dont_Destroy_Me/Solution/DontDestroyMe.uproject) is solution on UE4 (*.uproject).