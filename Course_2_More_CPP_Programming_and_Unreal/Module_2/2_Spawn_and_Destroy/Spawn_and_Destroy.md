# Exercise 6
## Spawn and Destroy

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_2/2_Spawn_and_Destroy/Source/SpawnAndDestroy.uproject) you can find an source-project of task on UE4 (*.uproject).

### Problem 1 - Spawn teddy bear on left mouse button

Add an action mapping called `SpawnTeddyBear` and add the required code under the comment to bind the spawn teddy bear action in the `SetupPlayerInputComponent` function in the `TeddyBearManager` implementation file. Look at the provided code in the `SpawnTeddyBear` function and make sure you understand it.

Run the game to make sure it spawns a teddy bear each time you release the left mouse button.

### Problem 2 - Destroy teddy bear on right mouse button

`Select Edit > Project Settings` from the top menu and select `Gameplay Tags` on the left. Add a new gameplay tag named `TeddyBear`. Open the Blueprint Editor for BP_TeddyBear and type tag in the search box in the Details panel. Click the + to add a tag and type TeddyBear in the box to the right of the 0. Compile and save the blueprint and close the Blueprint Editor.

Add an action mapping called DestroyTeddyBear and add the required code under the comment to bind the destroy teddy bear action  in the `SetupPlayerInputComponent` function in the TeddyBearManager implementation file. Look at the code in the provided DestroyTeddyBear function to make sure you understand it.

Run the game to make sure it destroys a teddy bear (if there is one) each time you release the right mouse button.

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_2/2_Spawn_and_Destroy/Solution/SpawnAndDestroy.uproject) you can find an solution-project of task on UE4 (*.uproject).