# Exercise 5
## The Kids Are Alright

### Problem 1 – Create a console project and a parent class

Start up your IDE and create a new Console Application project named Exercise5. Save the project in a reasonable location on the computer. Build the project.

Add a class called `Kid` to your solution by following the IDE-specific instructions below.

Visual Studio: Right click the project name (it’s in bold, near the top) in the Solution pane and select Add > New Item… Now select Class in the middle pane of the dialog, change the Name of the class to `Kid`, then click the Add button. You can see in the Solution pane that the .h and .cpp files for the new class has been added to your project.

Xcode: Right click on the project folder near the top of the pane on the left and select New File... Select C++ File and click the blue Next button near the bottom right. Type in the Name of your class and make sure the Also create a header file checkbox is NOT checked. Click the blue Next button near the bottom right. Select the Exercise5 folder (if necessary) and click the blue Create button near the bottom right. Follow the same process to add your header file, making sure you give it a .h (not .hpp) extension. Finally, add a `#include` for your header file to your .cpp file.

Add a `PrintMessage` function to your `Kid` class; be sure to mark the function virtual. In the body of the function, print some message.

Note: You'll need a `#include <iostream>` in your `Kid.h` or `Kid.cpp` file to send output to `std::cout`.

In the your main function (in the `Exercise5.cpp` file in Visual Studio or the `main.cpp` file in Xcode), create a Kid object and tell it to print its message. You'll need a `#include "Kid.h"` in this file for this to work.

### Problem 2 – Add child class

Add a child class for a specialized kid: disobedient, artistic, friendly, whatever you want. Override the `PrintMessage` function to print a different message.

In the your main function, create an instance of the new child class and tell it to print its message. You'll need to `#include` the header file for your new child class for this to work.

### Problem 3 – Add another child class

Add another child class for a different specialized kid. Override the `PrintMessage` function to print a different message.

In the your `main` function, create an instance of the new child class and tell it to print its message. You'll need to `#include` the header file for your new child class for this to work.

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_2/1_Kids_Alright/Solution/Exercise5.sln) is solution of Visual Studio project for this task (*.sln)