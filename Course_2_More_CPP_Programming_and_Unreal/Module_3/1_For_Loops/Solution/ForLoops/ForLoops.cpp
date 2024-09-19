// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

/**
 * For Loops exercise solution
 * @return exit status
*/
int main()
{
	// Problem 1

	int MaxNumber;

	// prompt for and get max number
	std::cout << "Enter maximum integer: ";
	std::cin >> MaxNumber;

	// print even numbers up to max number
	std::cout << "\n";
	std::cout << "Even numbers from 0 to " << MaxNumber << "\n";
	for (int i = 0; i <= MaxNumber; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i << "\n";
		}
	}
	std::cout << "\n";

	// Problem 2

	int RowWidth;

	// prompt for and get row width
	std::cout << "Enter number of asterisks in a row: ";
	std::cin >> RowWidth;

	// print row
	std::cout << "\n";
	for (int i = 1; i <= RowWidth; i++)
	{
		std::cout << "*";
	}
	std::cout << "\n";
	std::cout << "\n";

	// Problem 3

	int NumRows;

	// prompt for and get row width and num rows
	std::cout << "Enter number of asterisks in a row: ";
	std::cin >> RowWidth;
	std::cout << "Enter how many rows to print: ";
	std::cin >> NumRows;

	// print rows
	std::cout << "\n";
	for (int i = 1; i <= NumRows; i++)
	{
		for (int j = 1; j <= RowWidth; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	// Problem 4

	int MaxRowWidth;

	// prompt for and get max row width
	std::cout << "Enter max number of asterisks in a row: ";
	std::cin >> MaxRowWidth;

	// print rows
	std::cout << "\n";
	for (int i = 1; i <= MaxRowWidth; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "\n";
}