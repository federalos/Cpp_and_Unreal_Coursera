// Copyright A.T. Chamillard. All Rights Reserved.

#include "Digitizer.h"

#include <cctype>

/**
 * Constructor
*/
Digitizer::Digitizer()
{
	// populate your map here
	Text_to_Number = {
	   {"zero",  0},
	   {"one",   1},
	   {"two",   2},
	   {"three", 3},
	   {"four",  4},
	   {"five",  5},
	   {"six",   6},
	   {"seven", 7},
	   {"eight", 8},
	   {"nine",  9} };
}

/**
 * Converts the given word to the corresponding digit.
 * If the word isn't a valid digit name, returns -1
 * @param Word word to convert
 * @return corresponding digit or -1
*/
int Digitizer::ConvertWordToDigit(std::string Word)
{
	// convert to lower case 
	// DO NOT use std::transform, which works fine in Visual
	// Studio and in Xcode, but doesn't work in g++ in the autograder
	// Instead, use a for loop to convert each character to
	// lower or upper case (depending on the case you used
	// in your map
	for (char& Char : Word) {
		Char = std::tolower(Char);
	}
	if (Text_to_Number.find(Word) != Text_to_Number.end()) {
		return Text_to_Number[Word];
	}
	// do the conversion
	// replace the code below with your code
	return -1;
}