# Exercise 13
## Random Destruction

### Getting Started

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_4/4_Random_Destruction/Source/RandomDestruction.uproject) is source UE4 project for this task (*.uproject)

### Problem – Destroy a random teddy bear every 2 seconds

The big idea for this exercise is that the destroyer will keep a `TArray<ATeddyBear*>` of teddy bears that are in the game and randomly destroy one of theme every 2 seconds. That means the teddy bear spawner will have to tell the destroyer each time it spawns  a teddy bear so the destroyer can add it to the TArray.

I've embedded comments in the `TeddyBearSpawner.cpp`, `Destroyer.h`, and `Destroyer.cpp` files where you should add code to implement the required functionality.

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_4/4_Random_Destruction/Solution/RandomDestruction.uproject) is solution UE4 project for this task (*.uproject)