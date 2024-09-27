// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

void SayHi();
void SayBye();
int FindSmaller(int FirstNumber, int SecondNumber);
int FindLarger(int FirstNumber, int SecondNumber);

/**
 * Pointers to Functions lecture code
 * @return exit status
*/
int main()
{
	// declare pointers to functions
	void (*SayFunction)() { nullptr };
	int (*FindFunction)(int, int) { nullptr };

	// won't compile
	//SayFunction = FindSmaller;

	// assign variables and execute functions
	SayFunction = &SayHi;
	SayFunction();
	FindFunction = &FindSmaller;
	std::cout << "Smaller number is " <<
		FindFunction(1, 2) << '\n';

	// reassign variables and execute functions
	SayFunction = &SayBye;
	SayFunction();
	FindFunction = &FindLarger;
	std::cout << "Larger number is " <<
		FindFunction(1, 2) << '\n';

	// we can also omit the address of operator
	SayFunction = SayHi;
	SayFunction();
}

/**
 * Prints hi message
*/
void SayHi()
{
	std::cout << "Hi!\n";
}

/**
 * Prints bye message
*/
void SayBye()
{
	std::cout << "Bye.\n";
}

/**
 * Finds the smaller of the two numbers
 * @param FirstNumber first number
 * @param SecondNumber second number
 * @return smaller of the two number
*/
int FindSmaller(int FirstNumber, int SecondNumber)
{
	if (FirstNumber <= SecondNumber)
	{
		return FirstNumber;
	}
	else
	{
		return SecondNumber;
	}
}

/**
 * Finds the larger of the two numbers
 * @param FirstNumber first number
 * @param SecondNumber second number
 * @return larger of the two number
*/
int FindLarger(int FirstNumber, int SecondNumber)
{
	if (FirstNumber >= SecondNumber)
	{
		return FirstNumber;
	}
	else
	{
		return SecondNumber;
	}
}