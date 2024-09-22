# Programming Assignment
## Junior Codebreaker

### Assignment Description

In this assignment, you'll be developing an application that takes a string and counts how many times each of the alphabetic characters appears. Case doesn't matter for the counts, so the string aAa should yield a count of 3 for the letter A. Finally, the program should print, for each character that appears at least once in the phrase, the character and the count for that character.  

### Motivation

The letters of the alphabet appear in English prose with specific frequency; for example, the letter A appears far more often than the letter Q. One technique we can use to crack simple substitution encryption techniques (like the Caesar Cipher) is to count the frequency of letter occurrences in the encrypted message, then use information about their frequency in general use to try reasonable character substitutions based on those frequencies to try to crack the encrypted message. This approach works better on longer messages, and it's definitely a brute force cracking technique, but it's better than random guessing!

### Getting Started

[Here](/Course_3_Class_Development/Module_3/6_Junior_Codebreaker/Source/ProgrammingAssignment3.sln) is source of Visual Studio project for this task (*.sln)

### Requirements

The code I’ve provided reads in a string. You need to count how many occurrences of each letter are in the string and print that result.

Your solution must do the following:
- Count how many times each alphabetic character appears in the phrase, ignoring case (so A and a both add to the count of As)
- For each character that appears at least once in the string, print the character and the count for that character. You should have one space between each character count output, with all the character counts on a single line

For example, for the string aAaBbZ, your output should be the following on a single line (be sure to include a newline at the end):
```
A3 B2 Z1 
```
Note: The last character count in your output (Z1 for the example above) must be followed by a single space before you output the newline character. Trust me, it’s easier that way, so the automated grader assumes you do that!

We’d typically label our output to tell the user what the output means, but that will just confuse the automated grader. You must print ONLY the values described above in your output, with the values appearing on a single line with a single space between them.

**Helpful Hint 1**

The `isalpha` and `toupper` functions are particularly useful for checking whether or not a character is alphabetic and converting a character to upper case.

**Helpful Hint 2**

I used an `array<int>` of 26 elements to store the counts for each of the characters, with element 0 holding the count of As, element 1 holding the count of Bs, and so on. Be sure to initialize all the elements to 0 before starting to count characters in the user phrase.

We can treat characters as integers when we choose to do so. Subtracting 'A' from the current character you're processing in the user phrase yields 0 if the current character is 'A', for example. This is exactly the index of the element in your counts array that should hold the running total of As in the user phrase.

When it's time to print out the character that corresponds to a particular index `i` in the `array<int>`, you can use the following code to do that:
```c++
std::cout << (char)(i + 'A');
```
**Helpful Hint 3**

Just ignore non-alphabetic characters as you count the alpha characters in the phrase. They're not errors, they just don't contribute to the character counts.

### Running Your Code

Because of the code I included to work with the automated grader on Coursera, when you run your program the command prompt window will open and it will sit there doing nothing. To make your code run, type in a string and press the `<Enter>` key; your code should then run so you can check your output. For example, your input could be: 
```
aAaBbZ
```
You can actually run your code again if you want to by typing in a string and pressing the `<Enter>` key again. When you’re ready to stop running your code, type q (for quit).

Note: Don’t start your string with a q; that will make the code think you’re trying to quit.

Here's what running the code multiple times with different inputs should look like (remember, you're including a newline at the end of each of your output lines). The first line is the integer input, the second line is your output line, and so on:
```
aAaBbZ
A3 B2 Z1 
aAaAaA
A6 
q
```
Important Note: The Coursera formatting makes it look like there's a blank line between each of the lines above, but there's not. The above output should be exactly 5 lines of output.

### Test Case Inputs

The autograder uses the following set of test case inputs to test your code (1 test case per line):
```
aAaBbZ
aAaAaA
abcdefghijklmnopqrstuvwxyz
AbCdEfGhIjKlMnOpQrStUvWxYz
a1234567890b
```
Each test case runs twice (for a total of 10 test cases), so if you're failing 2 test cases you're failing for one of the test case inputs above.

You should figure out what the expected results are for each test case input and make sure your code is generating those expected results in the required format before submitting your code for grading.

### Solution
[Here](/Course_3_Class_Development/Module_3/6_Junior_Codebreaker/Solution/ProgrammingAssignment3.sln) is solution of Visual Studio project for this task (*.sln)