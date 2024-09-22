# Exercise 2
## Practice with Raw Text Files

### Problem 1 – Create a console project and a text file

Start up your IDE and create a new Console Application project named Exercise2. Save the project in a reasonable location on the computer. Build the project.

Use Notepad++, Notepad, or some other application to create a text file. Add four lines of text to the file – whatever you want! Save the file in the appropriate folder (see the Visual Studio and Xcode File Locations reading to figure out where that is for you).

### Problem 2 – Read in and echo the file

Read the lines in from the file and echo them to the console. Be sure to use a try/catch block as appropriate and to check for a failure to open the file before trying to read from it. Don’t hard-code how many lines are in the file, use a while loop to keep reading from the file until you reach the end of the file.

Note: Remember, you need to add `#include <fstream>` and `#include <string>` in the appropriate place in your code.

Hint: You'll need to use the `getline` function if the lines in your file contain any whitespace (like spaces).

### Problem 3 – Output a file with the even-numbered lines

Print the even-numbered (the second and fourth) lines from the input file to an output file. Be sure to use a try/catch block as appropriate and to check for a failure to open the file before trying to write to it. Don’t hard-code how many lines you’ll be outputting, use some other more reasonable approach.

Open up your output file in the appropriate folder of your project to make sure your solution worked correctly.

**Hint 1:** If you change your Problem 2 solution to save the lines from the input file in a `Vector<>` container as you read them in, you can use a for loop to output the even-numbered lines to the output file. You'll need to add `#include <vector>` in the appropriate place in your code to do that.

### Solution
[Here](/Course_4_OOP_for_Unreal/Module_1/2_Raw_Text_Files/Solution/Exercise2.sln) is solution of Visual Studio project for this task (*.sln)