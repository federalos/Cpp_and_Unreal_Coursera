# Exercise 14:

## The Loud Runaway

### Getting Started

[Here](/Course_3_Class_Development/Module_1/1_Gravity/Source/Gravity.uproject) you can find an source-project of task on UE4 (*.uproject).

### Problem 1 - Adding an audio file and sound cue

Add an Audio folder to the Content/TheRunaway folder and copy an audio file (I used a short wav file) into the Audio folder. Create a Sound Cue in the Audio folder; I named mine RunawayCue. 

Double-click your sound cue to open it in the Blueprint editor. Add a Wave Player by right clicking in the editing pane and selecting Wave Player. Select the Wave Player node and add your audio file as the Sound Wave in the Details pane. Click and drag from the Output circle on the Wave Player node and drop onto the circle on the Output node.

Click Play Cue near the top left to make sure you have everything set up properly.

### Problem 2 - Playing the sound

We're going to have the pawn play the sound cue every time he escapes from the screen. 

Add `#include "Sound/SoundCue.h"` above (not after) the other #includes near the top of the pawn's header file. Add a public field (marked as a `UPROPERTY` as shown in the Playing Sound Effects video) to hold the sound cue.

In the pawn's implementation file, use the `PlaySound2D` function to play the sound cue when the pawn goes off the screen.

Finally, go back to the Unreal editor and open BP_HunterPawn. In the Details pane, add your sound cue as the Audio Cue (or whatever you named you `UPROPERTY`) in the Sounds section. Compile and save the Blueprint.

When you run your game, you should hear your sound effect every time the pawn leaves the screen.

### Solution
[Here](/Course_3_Class_Development/Module_4/3_The_Loud_Runway/Solution/TheRunaway.uproject) you can find an solution-project of task on UE4 (*.uproject).