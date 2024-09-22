# Exercise 1
## The User is Crazy

### Problem 1 – Get user input

Start up your IDE and create a new Console Application project named Exercise1. Save the project in a reasonable location on the computer.

Add code to the `main` function to prompt for and read in an integer score from the user; to demonstrate the exceptions we want to explore, store the use input in a `std::string` called `ScoreString`.

Add code to convert `ScoreString` into an int using `std::stoi` (you'll need to add `#include <string>` to your code) and store the resulting value in an int variable called `Score`. Print out the value of the `Score` variable.

Run your code with a normal input, non-integer input (Bob, say), and a number larger than the maximum integer (3,000,000,000 would work). See how the program throws exceptions for the second two inputs.

### Problem 2 – Add try and catch blocks

Set a breakpoint on the line that prints out the value of the `Score` variable, run your program in debug mode, enter Bob, and look at the type of the exception that gets thrown in this case.

Put the code that calls the `std::stoi` function and prints out the value of the `Score` variable inside a try block.

Add a catch block for the exception that gets thrown when a non-integer argument is passed into the `std::stoi` function, printing an appropriate error message inside the catch block. Run your code with non-integer input; you should see the error message.

### Problem 3 – Add another catch block

Set a breakpoint on the line that prints out the value of the `Score` variable, run your program in debug mode, enter 3,000,000,000, and look at the type of the exception that gets thrown in this case.

Add a catch block for the exception that gets thrown when an argument that's too large to be stored in an int is passed into the `std::stoi` function, printing an appropriate error message inside the catch block. Run your code with 3,000,000,000; you should see the error message.

Run your code with a normal input, non-integer input (Bob, say), and a number larger than the maximum integer (3,000,000,000 would work). The correct score should be displayed for the valid input and the error messages for the two invalid inputs should still be displayed properly.

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_1/1_Crazy_User/Solution/Exercise1.sln) is solution of Visual Studio project for this task (*.sln)