# Exercise 1
## Gravity, It's Just a Theory

### Getting Started

[Here](/Course_3_Class_Development/Module_1/1_Gravity/Source/Gravity.uproject) you can find an source-project of task on UE4 (*.uproject).

### Problem 1 - Determine abstraction for the apple

In this "game", the apple is supposed to provide health to the player (Newton) when the player collides with the apple. Decide what details are important for the apple for this problem.

### Problem 2 - "Implement" the apple abstraction

Open the Apple script to see the field and getter I implemented for the apple abstraction for this problem.

Create a Blueprint based on the Apple script and add the Apple static mesh to the Blueprint. Set the static mesh in the Blueprint to simulate physics with 0 linear damping. Confirm that the Generate Overlaps checkbox in the Collision section is checked, change the Collision Presets to Custom..., set the ObjectType to PhysicsBody, and check the Overlap checkbox for the WorldDynamic ObjectResponse.

Add an Apple gameplay tag and add that tag to the Apple Blueprint.

Place your Apple Blueprint near the top of the world, run the game, and watch the apple fall down off the screen.

### Problem 3 - Add Newton to the game

Create a Blueprint based on the Newton script and add the Newton static mesh to the Blueprint. Confirm that the Generate Overlaps checkbox in the Collision section is checked, change the Collision Presets to Custom..., and set the ObjectType to WorldDynamic.

Add code to the Newton BeginPlay and OnOverlapBegin functions as indicated in the implementation file.

Place your Newton Blueprint near the bottom of the world (but still visible on the screen) directly below the apple. Run the game and watch the Apple disappear and the Newton health increase when the Apple hits the Newton.

### Solution
[Here](/Course_3_Class_Development/Module_1/1_Gravity/Solution/Gravity.uproject) you can find an solution-project of task on UE4 (*.uproject).