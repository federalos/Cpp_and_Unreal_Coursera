// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

int stoi(std::string IntString);

/**
 * Exercise 10 solution
 * @return exit status
*/
int main()
{
	// prompt for and get int from user
	std::string InputString;
	std::cout << "Enter a whole number: ";
	std::cin >> InputString;

	// convert and output int
	int InputInt = stoi(InputString);
	std::cout << "Int input: " << InputInt << '\n';
}

/**
 * Converts the given string into an int
 * @param IntString string
 * @return corresponding int
*/
int stoi(std::string IntString)
{
	int Value = 0;

	// left to right approach
	/*
	for (int i{ 0 }; i < IntString.size(); i++)
	{
		Value += IntString[i] - '0';
		//if (IntString[i] == '1')
		//{
		//    Value += 1;
		//}
		//else if (IntString[i] == '2')
		//{
		//    Value += 2;
		//}
		//else if (IntString[i] == '3')
		//{
		//    Value += 3;
		//}
		//else if (IntString[i] == '4')
		//{
		//    Value += 4;
		//}
		//else if (IntString[i] == '5')
		//{
		//    Value += 5;
		//}
		//else if (IntString[i] == '6')
		//{
		//    Value += 6;
		//}
		//else if (IntString[i] == '7')
		//{
		//    Value += 7;
		//}
		//else if (IntString[i] == '8')
		//{
		//    Value += 8;
		//}
		//else if (IntString[i] == '9')
		//{
		//    Value += 9;
		//}

		// shift left
		if (i < IntString.size() - 1)
		{
			Value *= 10;
		}
	}
	*/

	// right to left approach
	for (int i{ (int)IntString.size() - 1 }; i >= 0; i--)
	{
		int Power = (IntString.size() - 1) - i;
		int Multiplier = IntString[i] - '0';
		Value += Multiplier * std::pow(10, Power);
		/*if (IntString[i] == '1')
		{
			Value += std::pow(10, Power);
		}
		else if (IntString[i] == '2')
		{
			Value += 2 * std::pow(10, Power);
		}
		else if (IntString[i] == '3')
		{
			Value += 3 * std::pow(10, Power);
		}
		else if (IntString[i] == '4')
		{
			Value += 4 * std::pow(10, Power);
		}
		else if (IntString[i] == '5')
		{
			Value += 5 * std::pow(10, Power);
		}
		else if (IntString[i] == '6')
		{
			Value += 6 * std::pow(10, Power);
		}
		else if (IntString[i] == '7')
		{
			Value += 7 * std::pow(10, Power);
		}
		else if (IntString[i] == '8')
		{
			Value += 8 * std::pow(10, Power);
		}
		else if (IntString[i] == '9')
		{
			Value += 9 * std::pow(10, Power);
		}*/
	}

	return Value;
}