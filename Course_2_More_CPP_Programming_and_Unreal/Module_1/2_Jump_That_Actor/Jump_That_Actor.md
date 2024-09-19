# Exercise 4
## Jump That Actor

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_1/2_Jump_That_Actor/Source/Jumper.cpp) you can find an source of C++ script and header (*.cpp and *.h).

Create a new Unreal project named JumpThatActor. Be sure to use that exact project name! Do the typical things to set up the project, including adding an orthographic camera and adjusting the light source. Import a model of your choosing into the project.

Create a new Jumper script from within the Unreal Editor. Open the script in your IDE and copy the contents of the Jumper.h and Jumper.cpp files from the materials zip file into the corresponding files in your IDE. This will NOT work if you didn't use the correct project name. Make sure the project builds without errors.

### Problem 1 - Add timer functionality

For this problem, you're adding the timer functionality to the Jumper script. Open the Jumper script in your IDE and open the Jumper implementation (cpp) file. Implement the body of the `StartJumpTimer` function to start a 1 second timer. The timer should call the `Jump` function when it finishes.

Add code to call the `StartJumpTimer` function in the `BeginPlay` function. Add code to call the `StartJumpTimer` function under the appropriate comment in the `Jump` function.

Add code to log a message of your choice at the the start of the `Jump` function. This code is temporary so we can test the timer functionality; you'll remove it in the next problem.

Run the game. You should see your message in the Output Log panel approximately every second.

### Problem 2 - Add jumping functionality

Add code to jump the Actor under the appropriate comments in the `Jump` function. Hint: The `SetActorLocation` function is really useful here.

Delete the temporary message logging code you added in the previous problem.

Run the game. You should see the Actor jump to a new location approximately every second.

### Problem 3 - Fix bad jumps

You may have noticed in the previous problem that your Actor sometimes jumps partially outside the scene. That's because the `MinY`, `MaxY`, `MinZ`, and `MaxZ` fields use values for the edges of the camera view without taking into account the width and height of your Actor.

Double click your static mesh to open the Mesh Editor panel. Near the upper left, Find the width and height to the right of the Approx Size label.

Modify the bounds fields to account for the width and the height of your Actor. Note that if the origin of your static mesh is in the center of the mesh (as it should be), your adjustments will be based on half the width and half the height of your mesh.

Run the game to make sure your Actor is always completely inside the screen when it jumps to a new location.

Change the duration of your timer to something very small to see some freaky, epilepsy-inducing behavior!