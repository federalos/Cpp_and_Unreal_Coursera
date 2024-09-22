# Exercise 10
## You the Converter

Implement a console application that prompts for and reads in an integer from the user, then converts the string the user entered into an integer using a separate `stoi` function (Xcode users will need to name their function mystoi) you write. In other words, you're
writing a function that does what the `std::stoi` function does (pretend C++ doesn't have a `std::stoi `function).

The function prototype for your function should be:
```C++
int stoi(std::string IntString);
```
In the body of the `stoi` function, use a for loop to walk the characters in the string, doing the appropriate math to convert the string into an `int`. Try figuring out how this should work with pencil and paper for the string 123 before writing your code.

Note: You can assume the user only enters a whole number; don't worry about alpha or special characters in the input
string.

### Solution
[Here](/Course_3_Class_Development/Module_3/2_Yer_Birthday/Solution/Exercise9.sln) is solution of Visual Studio project for this task (*.sln)