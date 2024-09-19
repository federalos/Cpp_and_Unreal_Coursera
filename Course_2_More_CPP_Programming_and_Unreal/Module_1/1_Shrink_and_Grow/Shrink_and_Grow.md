# Exercise 3
## Shrink and Grow

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_1/1_Shrink_and_Grow/Source/Resizer.cpp) you can find an source of C++ script and header (*.cpp and *.h).

Create a new Unreal project named ShrinkAndGrow. Be sure to use that exact project name! Do the typical things to set up the project, including adding an orthographic camera and adjusting the light source. Import a model of your choosing into the project.

Create a new Resizer script (with Actor as the parent) from within the Unreal Editor. Open the script in your IDE and copy the contents of the Resizer.h and Resizer.cpp files from the materials zip file into the corresponding files in your IDE. This will NOT work if you didn't use the correct project name. Make sure the project builds without errors.

### Problem 1 - Grow out of control!

Create a blueprint out of the Resizer script, add your static mesh to the blueprint, and compile and save your blueprint. Add an instance of the blueprint to the map.

In our Resizer script, we need fields to support both our manual timer and the resizing process. Look at the Resizer header file to see that I've already provided those to you. The `TotalResizeSeconds` and `ElapsedResizeSeconds` fields are used the same way I used them in the Manual Timers video. The `ScaleChangePerSecond` constant is used to control how much the Actor shrinks and grows every second. With the value of 1 I set this constant to, your Actor will be double its original size after 1 second, triple its original size after 2 seconds, and so on. The `ScaleChangeSignMultiplier` field has historically been the most confusing for learners. We use that field to control whether we're currently growing (if its value is 1) or shrinking (if its value is -1).

Add code to resize the Actor in the Resizer Tick function under the comment that says `// resize the Actor`. To do this, you should call the `GetActorScale3D` function and store the result in a variable of the appropriate data type. You should then add `DeltaTime * ScaleChangePerSecond` to the `Y` and `Z` components of your variable. Finally, you should call the `SetActorScale3D` function with you variable as the argument.

Run the game and watch your Actor grow (out of control!) until you stop the game. Play around with the value of the  `ScaleChangePerSecond` constant to make the game object grow faster or slower.

### Problem 2 - Shrink and grow

Add code to the `Tick` function as indicated by the provided comment to update the timer and check if it's finished. Review the Manual Timers video if you need help with this.

Move the comment that says `// reset timer and start resizing the game object
in the opposite direction` into the body of the if statement you wrote in the previous paragraph and add code to reset the timer and change the sign of the `ScaleChangeSignMultiplier` field. In other words, if it's 1 make it -1 and if it's -1 make it one. Do this with a multiplication, don't write an if statement to do it!

Change the code that changes the `Y` and `Z` components of the scale to use `ScaleChangeSignMultiplier` in the equation that calculates how much to change the scale.

Run the game and watch the weirdness.