// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include <vector>

bool Shorter(std::string FirstString, std::string SecondString);
bool Longer(std::string FirstString, std::string SecondString);
std::string FindExtreme(std::vector<std::string>& Values, bool (*Compare)(std::string, std::string));

/**
 * Exercise 8 solution
 * @return exit status
*/
int main()
{
    std::vector<std::string> Values{ "hi", "burrito", "hey", "really long string", "a", "churros", "yo"};

    // find and print shortest string
    std::string ShortestString = FindExtreme(Values, &Shorter);
    std::cout << "Shortest String: " << ShortestString << '\n';

    // find and print longest string
    std::string LongestString = FindExtreme(Values, &Longer);
    std::cout << "Longest String : " << LongestString << '\n';
}

/**
 * Returns true if the first string is shorter than
 * the second string, false otherwise
 * @param FirstString first string
 * @param SecondString second string
 * @return comparison result
*/
bool Shorter(std::string FirstString, std::string SecondString) 
{
    return FirstString.length() < SecondString.length();
}

/**
 * Returns true if the first string is longer than
 * the second string, false otherwise
 * @param FirstString first string
 * @param SecondString second string
 * @return comparison result
*/
bool Longer(std::string FirstString, std::string SecondString) 
{
    return FirstString.length() > SecondString.length();
}

/**
 * Finds an extreme value in the list of values based
 * on the Compare function
 * @param Values list of values
 * @param Compare function to use to compare two values
 * @return extreme value
*/
std::string FindExtreme(std::vector<std::string>& Values, bool (*Compare)(std::string, std::string))
{
    // assume at least one value is provided
    std::string ExtremeValue = Values[0];

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
