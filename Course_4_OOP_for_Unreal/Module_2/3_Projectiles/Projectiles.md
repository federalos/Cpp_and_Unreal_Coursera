# Exercise 7
## Launchers and Projectiles

### Getting Started

[Here](/Course_4_OOP_for_Unreal/Module_2/3_Projectiles/Source/Launchers.uproject) you can find an source-project of task on UE4 (*.uproject).

Open the project in Unity. You can do this by navigating to the `Exercise6\Assets\scenes` folder and double clicking `scene0`.

Look at the `ALauncherActor` and `AProjectileActor` classes; those are the roots of the launcher and projectile class hierarchies. Look at the `AChainsawLauncherActor` and `AChainsawProjectileActor` classes to see how those child classes implement the initial functionality. Note that I created a blueprint for the chainsaw projectile, added the chainsaw projectile static mesh, checked the `Simulate Physics` box, and scaled the `y` and `z` components of the static mesh by `0.5`. I then created a blueprint for the chainsaw launcher, added the chainsaw launcher static mesh, populated the property in the chainsaw launcher blueprint with the chainsaw projectile blueprint, and added a Launcher tag. Finally, I added the chainsaw launcher blueprint to the map.

### Problem 1 – Add pirate launcher and projectile

Create pirate launcher and pirate projectile classes and blueprints, making the  launcher firing rate twice as fast (cooldown seconds half as long) as the chainsaw launcher and the impulse force for the projectile twice as strong as for the chainsaw projectile.

Remove the chainsaw launcher blueprint from the map, add the pirate launcher blueprint to the map, and make sure everything works correctly.

### Problem 2 – Add zombie launcher and projectile

Create zombie launcher and zombie projectile classes and blueprints, making the  launcher firing rate twice as fast (cooldown seconds half as long) as the pirate launcher and the impulse force for the projectile twice as strong as for the pirate projectile (brains go really fast `<grin>`).

Remove the pirate launcher blueprint from the map, add the zombie launcher blueprint to the map, and make sure everything works correctly.

### Problem 3 – Add a launcher spawner

Delete all the launcher game objects from the map. Create a new launcher spawner class that destroys all actors with the Launcher tag and randomly spawns a new chainsaw launcher, pirate launcher, or zombie launcher at the origin every 5 seconds.

When you run your code, be patient; it will be 5 seconds before the first launcher is spawned.

Also remember that because of the way random numbers work, you may get the same launcher spawned multiple times in a row. Although we could save some "spawn history" to avoid that when we spawn a new launcher, you should just let it happen and watch the game until you see al three launchers get spawned.

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_2/3_Projectiles/Solution/Launchers.uproject) is solution on UE4 (*.uproject).
