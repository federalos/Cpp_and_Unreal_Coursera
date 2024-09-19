# Exercise 7
## Finally, a Driving Game

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_2/3_Driving_game/Source/FinallyADrivingGame.uproject) you can find an source-project of task on UE4 (*.uproject).

### Problem 1 - Import model and set up Blueprints

Import a model of your choosing into the provided Art folder. Create a Blueprint from the provided `MyPawn` script and add your static mesh to the Blueprint. Create a Blueprint from the provided `MyPlayerController` script.

### Problem 2 - Set up Game Mode

Add the required code to the `FinallyADrivingGameGameModeBase` implementation file to set the default pawn class and player controller class. Change the game mode used by the game to your custom game mode.

### Problem 3 - Drive horizontally

Add an Axis Mapping called Horizontal and bind keyboard keys of your choosing for positive and negative inputs in the mapping. 

Implement the required code in the `MoveHorizontally` and Tick functions in the MyPawn implementation file to use movement inputs to move the pawn horizontally.

Implement the required code in the `MoveHorizontally` and `SetupInputComponent` functions in the `MyPlayerController` implementation file to use movement inputs to move the pawn horizontally.

Run the game and confirm that you can move the pawn left and right using the keyboard.

### Problem 4 - Drive vertically

Add and test the ability to move the pawn up and down using the keyboard.

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_2/3_Driving_game/Solution/FinallyADrivingGame.uproject) you can find an solution-project of task on UE4 (*.uproject).