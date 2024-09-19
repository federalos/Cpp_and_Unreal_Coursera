// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

/**
 * Programming Assignment 1 solution
 * @return exit status
*/

/**
 * Even-odd function
*/
bool IsEven(const int& number) {
	if (number % 2 == 0) {
		return true;
	}
	return false;
}

int main()
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	char input[10];
	std::cin >> input;
	while (input[0] != 'q')
	{
		int number = atoi(input);

		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		
		if (IsEven(number)) {
			std::cout << 'e' << ' ';
		}
		else {
			std::cout << 'o' << ' ';
		}

		if (number > 0) {
			std::cout << '1' << '\n';
		}
		else if (number < 0) {
			std::cout << "-1" << '\n';
		}
		else {
			std::cout << '0' << '\n';
		}
		

		// Don't add or modify any code below
		// this comment
		std::cin >> input;
	}


}
