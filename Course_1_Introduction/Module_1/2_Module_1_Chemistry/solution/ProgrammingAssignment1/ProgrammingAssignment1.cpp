// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <vector>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 1
 * @return exit status
*/
int main()
{
	// loop while there's more input
	std::string Input;
	std::getline(std::cin, Input);

	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		std::vector<std::string> elements = { "H", "He",
			"Li", "Be", "B", "C", "N", "O", "F", "Ne" };

		for (int iter_element = 0; iter_element < elements.size(); iter_element++) {
			std::cout << elements[iter_element];
			if (iter_element < elements.size() - 1) {
				std::cout << std::endl;
			}
		}
		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
