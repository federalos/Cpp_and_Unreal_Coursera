# Programming Assignment
## Number Characteristics

### Assignment Description  

You’ve decided that you really care about the different characteristics a number can have. For example, you might wonder if the number is even or odd, or is the number is negative, zero, or positive.

In this assignment, you'll evaluate an integer to tell whether a number is even or odd and classify the number as negative, zero, or positive.

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_1/3_Number_Characteristics/Source/ProgrammingAssignment1.sln) you can find a source VS C++ project (*.sln).

### Requirements

The code I’ve provided reads in the number and stores it in an `int` variable named `number`. Your evaluation must use the value in that variable.

Your solution must do the following:

·        Print `e` if the number is even and `o` if the number is odd

·        Print a space

·        Print `-1` if the number is negative, `0` if the number is `0`, and `1` if the number is positive

·        Print a newline character

For example, if the number is `-2`, your output should be the following on a single line (be sure to include a newline at the end):

```
e -1
```

We’d typically label our output to tell the user what the output means, but that will just confuse the automated grader. You must print ONLY the values described above in your output, with the values appearing on a single line with a single space between them.

### Running Your Code

Because of the code I included to work with the automated grader on Coursera, when you run your program the command prompt window will open and it will sit there doing nothing. To make your code run, type in an integer and press the `<Enter>` key; your code should then run so you can check your output. For example, your input could be: 

```
2
```

You can actually run your code again if you want to by typing in an integer and pressing the `<Enter>` key again. When you’re ready to stop running your code, type `q` (for quit).

Here's what running the code multiple times with different inputs should look like (remember, you're including a newline at the end of each of your output lines). The first line is the integer input, the second line is your output line, and so on:    
```
-2

e -1

1

o 1

q
```
### Important Note: 
The Coursera formatting makes it look like there's a blank line between each of the lines above, but there's not. The above output should be exactly 5 lines of output.

### Test Case Inputs

The autograder uses the following set of test case inputs to test your code (1 test case per line):
```
1

2

0

-1

-2
```
Each test case runs twice (for a total of 10 test cases), so if you're failing 2 test cases you're failing for one of the test case inputs above.

You should figure out what the expected results are for each test case input and make sure your code is generating those expected results in the required format before submitting your code for grading.



[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_1/3_Number_Characteristics/Solution/ProgrammingAssignment1.sln) you can find a solution VS C++ project (*.sln).