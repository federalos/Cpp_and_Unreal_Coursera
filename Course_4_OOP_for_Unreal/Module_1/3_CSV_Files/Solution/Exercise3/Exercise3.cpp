// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <fstream>
#include <vector>

#include "Name.h"

Name GetNameFromString(std::string& CsvString);

/**
 * Exercise 3 solution
 * @return exit status
*/
int main()
{
    // Problem 2
    std::ifstream Input{ "names.csv" };

    // check for open failure
    if (!Input.is_open())
    {
        std::cout << "File failed to open for reading\n";
        return 1;
    }

    // fill vector with names
    std::vector<Name> Names{};
    std::string InputString;
    while (!Input.eof())
    {
        Input >> InputString;
        Names.push_back( GetNameFromString(InputString) );
    }

    // Problem 3
    for (size_t i{ 0 }; i < Names.size(); i++)
    {
        Name CurrentName = Names.at(i);
        std::cout << "Name " << (i + 1) << ": ";
        std::cout << CurrentName.GetFirstName() << ' ';
        std::cout << CurrentName.GetMiddleName() << ' ';
        std::cout << CurrentName.GetLastName() << '\n';
    }
}

/**
 * Creates a Name object based on the given string
 * @param CsvString csv string
 * @return corresponding Name object
*/
Name GetNameFromString(std::string& CsvString)
{
    // extract first name
    size_t CommaLocation = CsvString.find(',');
    std::string FirstName = CsvString.substr(0, CommaLocation);

    // extract middle name
    CsvString = CsvString.substr(CommaLocation + 1);
    CommaLocation = CsvString.find(',');
    std::string MiddleName = CsvString.substr(0, CommaLocation);

    // extract last name
    std::string LastName = CsvString.substr(CommaLocation + 1);

    return Name{ FirstName, MiddleName, LastName };
}