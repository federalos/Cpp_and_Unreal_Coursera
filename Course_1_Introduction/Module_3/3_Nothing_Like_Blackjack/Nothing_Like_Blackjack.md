# Nothing Like Blackjack

## Assignment Description

Imagine you've decided to write a program to play a game that's nothing like Blackjack. You hope to get rich by selling your game to the casinos in Las Vegas, so you want to do a great job!

In this assignment, you'll deal two cards to four players (including the dealer), then give one more card to a couple of the players. Finally, you'll flip over and print the cards for each player. You might as well start shopping for your new McLaren now


[Here](/Course_1_Introduction/Module_3/2_Look_at_the_Card/Source/Exercise9/Exercise9.sln) you can find an source-project in Visual Studio Project (*.sln) of this task and [documentation](/Course_1_Introduction/Module_3/2_Look_at_the_Card/Solution/Help/index.html) for object, provided by Author. He make this documentation by Doxygen.


### Important: You MUST only add code as indicated by the comments in that file. If you don't, you're virtually guaranteed to fail all the test cases in the automated grader.

Double-click the index file in the Help folder and click the ConsoleCards link in the pane on the left; this is the documentation for the classes I included as a dll in the ProgrammingAssignment3 solution. Those are the classes you'll use to you implement your solution.

## Implementation Steps

Implement your solution by providing the required code under each comment in the `main` function.

## Helpful Hint

One of the things your code has to do is deal a card to a player. It helps most people to think about how this actually happens if you have a physical deck of cards: in that case, you take the top card from the deck and you place it in a location in front of the player. Since the `Deck` class exposes a `TakeTopCard` function and you can have as many `Card` variables (named memory locations) as you want, you should be able to see how to implement that functionality in your solution.

## Running Your Code

Because of the code I included to work with the automated grader on Coursera, when you run your program the command prompt window will open and it will sit there doing nothing. To make your code run, type 1 and press the `<Enter>` key; your code should then run so you can check your output.

You can actually run your code again if you want to by typing 1 and pressing the `<Enter>` key again. When you’re ready to stop running your code, type `q` (for quit).

## Required Output Format

Each line of your output is the information for a specific card. The comments at the end of the `main` function have you print all the cards for player 1, then all the cards for player 2, and so on. The required format for printing out a card is the card rank, followed
by a single space, followed by the word of, followed by a single space, followed by the card suit. For example, the King of Spades would be printed as:

```
King of Spades
```

Test Case Inputs

The autograder just runs your code once, providing 1 then q as the inputs to your code.

You should figure out what the expected results are for correct behavior and make sure your code is generating those expected results in the required format before submitting your code for grading.

Taking Small Bites

The best way to approach this is to provide the required code under the first comment in the `main` function, then test (and debug as necessary) that code to make sure it works. Next provide the required code under the second comment and test and debug it. Continue with this process until you're done.

Doing it this way lets you focus on small pieces of the code at a time and also makes debugging a lot easier if something goes wrong.



[Here](/Course_1_Introduction/Module_3/2_Look_at_the_Card/Solution/Exercise9/Exercise9.sln) you can find solution for this task in Visual studio Project format (*.sln).