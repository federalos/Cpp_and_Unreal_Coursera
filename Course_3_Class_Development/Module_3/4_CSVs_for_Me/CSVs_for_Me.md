# Exercise 11
## CSVs for Me

These problems are based on something Peak Game Studios (my company with my two sons) implemented in Second Life to place blocks into slots in a pyramid.

Note: All the variables you use in this program should be the appropriate data types for the data you're storing in them. 

### Problem 1 – Extracting the Pyramid Slot Number

Create a new console application named Exercise11.

Read in a string from the user in the following format:
```
<pyramid slot number>,<block letter>,<whether or not the block should be lit>
```
Example:
```
15,M,true
```
Use the `string` functions you can read about in the documentation at [link](https://www.cplusplus.com/reference/string/string/) to extract the pyramid slot number from the string and store it in a variable.

Print the pyramid slot number. This is a number, so you should NOT be saving it as a `string`!

Hint: You should `#include <string>`

### Problem 2 – Extracting the Block Letter

Extract the block letter from the string and store it in a variable.

Print the block letter. This is a single character, so you should NOT be saving it as a `string`!

### Problem 3 – Extracting Whether Or Not the Block Should Be Lit

Extract whether or not the block should be lit from the string and store it in a variable. This is a Boolean value, so you should NOT be saving it as a `string`!

You are NOT allowed to use the `rfind` function to do this. (Hint: Use the `substr` function to shorten the original input string)

Print whether or not the block should be lit.

### Solution
[Here](/Course_3_Class_Development/Module_3/4_CSVs_for_Me/Solution/Exercise11.sln) is solution of Visual Studio project for this task (*.sln)