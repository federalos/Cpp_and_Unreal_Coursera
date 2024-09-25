# Exercise 6
## I Like To Move It Move It

### Getting Started

[Here](/Course_4_OOP_for_Unreal/Module_2/2_Move_it_Move_It/Source/MoveIt.uproject) you can find an source-project of task on UE4 (*.uproject).

### Problem 1 – Add green ball child class and blueprint

Right click the `BallActor` class in the Unreal Editor and select Create C++ class derived from `BallActor`. Change the Name of the new class to `GreenBallActor` and click the green Create Class button near the bottom right. Open the `GreenBallActor` class in your IDE.

We're going to make the green ball move up instead of left and print a different message.

Add a documentation comment at the top of the header file.  Also in the header file, add a constructor and an override for the `PrintMessage` function inherited from the `ABallActor` class.

In the implementation file, add a constructor implementation that calls the `ABallActor` constructor. In the body of the constructor, call the `ABallActor` `SetImpulseVector` function with an appropriate impulse vector to move the green ball up instead of left. Note that we need to do this in the constructor to make sure we've changed the impulse vector before the `ABallActor` BeginPlay function is executed.

Implement the body of the `PrintMessage` function to print a different message from the message the `ABallActor` `PrintMessage` function prints.

Create a blueprint from the `GreenBallActor` class, adding the provided green ball static mesh to the blueprint. Be sure to check the `Simulate Physics` check for for the static mesh in the blueprint, then compile and save the blueprint.

Add the green ball blueprint to the map and confirm that it works properly.

The calls to the `PrintMessage` function behave in class-specific ways -- polymorphism in action!

### Problem 2 – Add red ball child class and blueprint

Implement a red ball that moves to the left (just like the white ball does) but prints a different message.

Hint: You don't need to provide a constructor for the red ball because you don't need to change the impulse force.

 Add the red ball blueprint to the map and confirm that it works properly.

### Problem 3 – Add a ball spawner

Delete all the ball actor from the map and add a ball spawner that periodically (every 1-2 seconds) randomly spawns one of the 3 balls. Feel free to use the teddy bear spawner code from Lesson 2 from the More C++ Programming for Unreal Game Development course if you'd like.

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_2/2_Move_it_Move_It/Solution/MoveIt.uproject) is solution on UE4 (*.uproject).



The calls to the `Start` method and the `PrintMessage` method behave in class-specific ways - polymorphism in action!