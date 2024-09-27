# Exercise 8
## Practice with Callback Functions

### Problem 1 – Create a console project

Start up your IDE and create a new Console Application project named Exercise8. Save the project in a reasonable location on the computer. 

### Problem 2 - Implement callback and higher-order functions

Add the following function prototypes above the `main` function:
```C++
bool Shorter(std::string FirstString, std::string SecondString);
bool Longer(std::string FirstString, std::string SecondString);
std::string FindExtreme(std::vector<std::string>& Values, bool (*Compare)(std::string, std::string));
```
Implement those functions below the `main` function. The `Shorter` function returns true if `FirstString` is shorter than `SecondString` and false otherwise. The `Longer` function returns true if `FirstString` is longer than `SecondString` and false otherwise. The `FindExtreme` function finds and returns an extreme value in the vector of values based on the `Compare` function.

### Problem 3 - Add code to main function

Add code to your `main` function to find and print the shortest string and the longest string in a vector of strings you create.

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_3/1_Callback_Func/Solution/Exercise8.sln) is solution of Visual Studio project for this task (*.sln)