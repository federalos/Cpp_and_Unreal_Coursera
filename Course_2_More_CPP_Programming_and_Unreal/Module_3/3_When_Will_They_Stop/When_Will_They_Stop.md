# Programming Assignment
## When Will They Stop?

### Assignment Description  

You want to develop a program that takes in as many integers as the user wants to enter and then tells them how many integers they entered and the mean (average) of those numbers. This will also give you more practice implementing while loops!

In this assignment, you'll get integer numbers until you get a -1, at which point you’ll print how many numbers you processed (not including the -1) and the mean of those numbers (not including the -1).

### Getting Started

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_3/3_When_Will_They_Stop/Source/ProgrammingAssignment2.sln) is source of Visual Studio project for this task (*.sln)

### Requirements

The code I’ve provided reads in a set of integers that ends with -1. Your code must call the GetNumber function and store the int the function returns in a variable, then process that number as appropriate. 

Your solution must do the following:
- Print the count of the numbers you processed (not including the -1)
- Print a space
- Print the mean of the numbers you processed (not including the -1) up to 2 decimal places
- Print a newline character

For example, if the set of numbers you process is 1 2 3 4 -1, your output should be the following on a single line (be sure to include a newline at the end):
```
4 2.50
```
We’d typically label our output to tell the user what the output means, but that will just confuse the automated grader. You must print ONLY the values described above in your output, with the values appearing on a single line with a single space between them.

**Note**: For the special case when -1 is the first number, your mean should be set to 0.

To print out your mean to up to 2 decimal places, you could use `std::cout << std::setprecision(2) << mean;` You'll have to `#include` the `<iomanip>` library as well to do this. If the mean has fewer than 2 decimal places (like 2.5 or -1), using setprecision will print 2.5 and -1, not 2.50 and -1.00. That's the required behavior.

Hint: I did some initialization at the start of my program, called the `GetNumber` function to populate my variable, then used a while loop to process that value and get the next number. Figuring out the Boolean expression to use for your while loop and what you should do in the body of the while loop is the "heavy lifting" part of this programming assignment.

### Running Your Code

Because of the code I included to work with the automated grader on Coursera, when you run your program the command prompt window will open and it will sit there doing nothing. To make your code run, type in a set of integers, ending with -1, with a space between each integer, and press the `<Enter>` key; your code should then run so you can check your output. For example, your input could be: 
```
1 2 3 4 -1
```
You can actually run your code again if you want to by typing in a set of integers, ending with -1, with a space between each integer, and pressing the `<Enter>` key again. When you’re ready to stop running your code, type q (for quit).

Here's what running the code multiple times with different inputs should look like (remember, you're including a newline at the end of each of your output lines). The first line is the integer input, the second line is your output line, and so on:
```
1 2 3 4 -1
4 2.5
-2 0 -1
2 -1
1 1 1 1 1 1 0 -1
7 0.86
q
```
**Important Note**: The Coursera formatting makes it look like there's a blank line between each of the lines above, but there's not. The above output should be exactly 7 lines of output.

Xcode Users: For some reason, Xcode doesn’t automatically open up the Console at the bottom when I Command-R to run my project (so I have no place to type anything). To display the Console after you Command-R, select View > Debug Area > Activate Console. You should now be able to click in the right-hand pane in the Console and type as described above to run your code.

### Test Case Inputs

The autograder uses the following set of test case inputs to test your code (1 test case per line):
```
1 2 3 4 -1
-1
-2 0 -1
1 1 1 1 1 -1
2 1 0 1 2 -1
-1
-2 -3 -4 -1
-2 0 2 -1
5 5 5 5 5 5 5 5 5 1 -1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 -1
```
You should figure out what the expected results are for each test case input and make sure your code is generating those expected results in the required format before submitting your code for grading.

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_3/3_When_Will_They_Stop/Solution/ProgrammingAssignment2.sln) is solution of Visual Studio project for this task (*.sln)