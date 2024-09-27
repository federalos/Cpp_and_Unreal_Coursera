// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include <vector>

bool LessThan(int FirstNumber, int SecondNumber);
bool GreaterThan(int FirstNumber, int SecondNumber);
int FindExtreme(std::vector<int>& Values, bool (*Compare)(int, int));

/**
 * Callback Functions lecture code
 * @return exit status
*/
int main()
{
    std::vector<int> Values{ 2, 7, 3, 42, 1, 7, 2 };

    // find and print minimum value
    int MinValue = FindExtreme(Values, &LessThan);
    std::cout << "Minimum Value: " << MinValue << '\n';

    // find and print maximum value
    int MaxValue = FindExtreme(Values, &GreaterThan);
    std::cout << "Maximum Value: " << MaxValue << '\n';

}

/**
 * Returns true if the first number is less than
 * the second number, false otherwise
 * @param FirstNumber first number
 * @param SecondNumber second number
 * @return comparison result
*/
bool LessThan(int FirstNumber, int SecondNumber)
{
    return FirstNumber < SecondNumber;
}

/**
 * Returns true if the first number is greater than
 * the second number, false otherwise
 * @param FirstNumber first number
 * @param SecondNumber second number
 * @return comparison result
*/
bool GreaterThan(int FirstNumber, int SecondNumber)
{
    return FirstNumber > SecondNumber;
}

/**
 * Finds an extreme value in the list of values based
 * on the Compare function
 * @param Values list of values
 * @param Compare function to use to compare two values
 * @return extreme value
*/
int FindExtreme(std::vector<int>& Values, bool (*Compare)(int, int))
{
    // assume at least one value is provided
    int ExtremeValue = Values[0];

    // look through rest of values for extreme value
    for (size_t i{ 1 }; i < Values.size(); i++)
    {
        if (Compare(Values[i], ExtremeValue))
        {
            ExtremeValue = Values[i];
        }
    }

    return ExtremeValue;
}
