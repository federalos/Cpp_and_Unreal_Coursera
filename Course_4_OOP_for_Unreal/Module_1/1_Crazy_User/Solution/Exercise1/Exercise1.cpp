// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

/**
 * Exercise 1 solution
 * @return exit status
*/
int main()
{
    // Problem 1
    std::string ScoreString;
    std::cout << "Enter score (as a whole number): ";
    std::cin >> ScoreString;

    try
    {
        int Score = std::stoi(ScoreString);
        std::cout << "Score: " << Score << '\n';
    }
    catch (std::invalid_argument ia)
    {
        std::cout << "Non-integer input isn't allowed!\n";
    }
    catch (std::out_of_range oor)
    {
        std::cout << "Input can't be stored in an int!\n";
    }
}