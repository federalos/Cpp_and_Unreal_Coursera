// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/**
 * Exercise 2 solution
 * @return exit status
*/
int main()
{
	// Problem 2
	std::ifstream Input{ "WaitingForTheEnd.txt" };

	// check if we failed to open the file
	if (!Input.is_open())
	{
		std::cout << "Failed to open file for reading\n";
		return 1;
	}

	// read and echo lines in file
	std::string InputString;
	std::vector<std::string> InputLines;
	while (!Input.eof())
	{
		std::getline(Input, InputString);
		std::cout << InputString << '\n';
		InputLines.push_back(InputString);
	}

	// close file
	Input.close();

	// Problem 3
	std::ofstream Output{ "EvenLines.txt" };

	// check if we failed to open the file
	if (!Output.is_open())
	{
		std::cout << "Failed to open file for writing\n";
		return 1;
	}

	// print even-numbered lines to file
	for (size_t i{ 0 }; i < InputLines.size(); i++)
	{
		if (i % 2 == 0)
		{
			Output << InputLines.at(i) << '\n';
		}
	}

	// close file
	Output.close();
}
