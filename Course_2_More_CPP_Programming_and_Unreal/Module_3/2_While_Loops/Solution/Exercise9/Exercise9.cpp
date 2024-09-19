// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

/**
 * Exercise 9 solution
 * @return exit status
*/
int main()
{
	int Input = 0;
	int MaxInput = std::numeric_limits<int>::min();
	bool InputProvided = false;

	// loop while user keeps entering data
	while (Input != -1)
	{
		// prompt for and get input
		std::cout << "Enter an integer (-1 to quit): ";
		std::cin >> Input;

		// set flag
		if (Input != -1)
		{
			InputProvided = true;
		}

		// check for new max input
		if (Input != -1 &&
			Input > MaxInput)
		{
			MaxInput = Input;
		}
	}

	// print max input or no data message
	std::cout << "\n";
	if (InputProvided)
	{
		std::cout << "Max number provided: " << MaxInput << "\n";
	}
	else
	{
		std::cout << "No inputs other than -1 provided.\n";
	}

	std::cout << "\n";
}

