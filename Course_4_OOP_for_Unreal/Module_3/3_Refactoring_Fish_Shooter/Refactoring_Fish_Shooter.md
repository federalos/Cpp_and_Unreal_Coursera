# Exercise 10
## Refactoring Fish Shooter

### Getting Started

[Here](/Course_4_OOP_for_Unreal/Module_3/3_Refactoring_Fish_Shooter/Source/FishShooter.uproject) you can find an source-project of task on UE4 (*.uproject).

### Requirements

Refactor the Fish Shooter game to use an event manager. That means that the teddy bear actor won't call the AddKill function in the game HUD any more. Instead, the teddy bear actor will add itself as an invoker of a new FKillAddedEvent delegate and will broadcast when a kill should be added. The game HUD will add itself as a listener for that event and will update the kills count when the event is broadcast.

### Helpful Hint

I used the final code from the Adding an Event Manager video as a guide as I developed the solution to this exercise. You should consider doing that also!

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_3/3_Refactoring_Fish_Shooter/Solution/FishShooter.uproject) is solution on UE4 (*.uproject).