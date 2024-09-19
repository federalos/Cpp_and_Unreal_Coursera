# Exercise 10
## Arrays

### Getting Started

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_4/1_Arrays/Source/Exercise10/Exercise10.sln) is source of Visual Studio project for this task (*.sln)
And [here](/Course_2_More_CPP_Programming_and_Unreal/Module_4/1_Arrays/Source/Help/index.html) is the documentation for this task.

### Problem 1 - Setting things up

Because you'll be using the classes in the consoleCards namespace from the dll I added to the project, add #includes for the Deck.h and Card.h header files in the appropriate place. Add using namespace consoleCards; in the appropriate place as well.

Inside the main method, declare a Deck variable. Note that doing this automatically calls the Deck constructor to put a new Deck object into the Deck variable. Tell the deck to shuffle itself.
Inside the main method, declare an array variable that will hold 2 cards.

### Problem 2 - Add card to the array, flip it over, and print it

Take a card from the top of the deck and add it to element 0 in the array.
Flip the card at element 0 of the array over.
Print the rank and suit of the card at element 0 of the array.

### Problem 3 - Add another card to the array, flip it over, and print both cards

Take a card from the top of the deck and add it to element 1 in the array.
Flip the card at element 1 of the array over.
Print the rank and suit of the cards at elements 0 and 1 of the array.

[Here](/Course_2_More_CPP_Programming_and_Unreal/Module_4/1_Arrays/Solution/Exercise10/Exercise10.sln) is solution of Visual Studio project for this task (*.sln)