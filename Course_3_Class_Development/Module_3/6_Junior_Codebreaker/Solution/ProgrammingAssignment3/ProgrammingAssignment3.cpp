// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <array>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
	std::string Input;

	// loop while there's more input
	std::getline(std::cin, Input);
	
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		std::string Alphabet{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
		int Alphabetic_count[26]{0};
		for (char& Symbol : Input) {
			Symbol = toupper(Symbol);
			if (isalpha(Symbol)) {
				for (int iter_alpha = 0; iter_alpha < Alphabet.size(); iter_alpha++) {
					if (Symbol == Alphabet[iter_alpha]) {
						Alphabetic_count[iter_alpha]++;
						break;
					}
				}
			}
		}

		for (int iter_alpha = 0; iter_alpha < Alphabet.size(); iter_alpha++) {
			if (Alphabetic_count[iter_alpha] != 0){
				std::cout << Alphabet[iter_alpha] << Alphabetic_count[iter_alpha] << ' ';
			}
		}
		std::cout << '\n';

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
