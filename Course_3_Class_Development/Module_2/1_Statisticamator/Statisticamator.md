# Exercise 6
## Height Statisticamator

### Exercise Description

In this exercise, you'll be implementing a variety of functions to decompose a large programming problem into smaller sub-problems. Here's the large problem: Get how many heights you need to process (1 to 100), then get that many heights (in inches, 1 to 96). Calculate the average height and find the minimum and maximum heights in the set of heights. Print out the average height, the minimum height, and the maximum height.  

### Functions

The function prototypes for the functions you're required to implement for this solution are provided below. Don't combine the functions or write more functions than I've provided; I want you to use exactly these functions.
```C++
int GetValidInteger(int LowerBound, int UpperBound);
```
The `GetValidInteger` function gets a valid integer between the lower bound and the upper bound. If it gets a number that’s not between lower bound and upper bound inclusive, it keeps getting another number until it gets a valid one. Don't worry about user prompts or error messages in the function
```C++
float AverageIntegerVector(const std::vector<int>& Values);
```
The `AverageIntegerVector` function averages the integers in the `Values` vector
```C++
int FindExtremeInIntegerVector(int MinOrMax, const std::vector<int>& Values);
```
The `FindExtremeInIntegerArray` function finds either the minimum or maximum value in the `Values` vector. The `MinOrMax` parameter tells whether the function should be looking for the minimum or the maximum

### Requirements

Your application must do the following:

- Get the number of heights to be processed (1 to 100). Make sure the number of heights you get is valid (between 1 and 100). You don't have to print prompts or error message
- Get each of the heights to be processed, making sure each height you get is valid (between 1 and 96). You don't have to print prompts or error message
- Calculate the average height and find the minimum and maximum heights in the heights to be processed
- Print the average height, the minimum height, and the maximum height, each on their own line

### Helpful Hint 1

You should define constants for Min and Max to pass in as arguments to the FindExtremeInIntegerVector function. This makes your code easier to read both when you call the function and in the body of the function.

### Helpful Hint 2

You have to call all the functions you implemented from the main function.


### Solution
[Here](/Course_3_Class_Development/Module_2/1_Statisticamator/Solution/HeightStatisticamator.sln) is solution of Visual Studio project for this task (*.sln)