// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include <map>

/**
 * Exercise 9 solution
 * @return exit status
*/
int main()
{
    // Problem 2
    std::map<std::string, std::string> PhoneBook;
    PhoneBook["Ghostbusters"] = "800-555-2368";
    PhoneBook["Jenny"] = "401-867-5309";
    PhoneBook["JoeBob"] = "000-000-0000";

    // Problem 3

    // prompt for and get name
    std::string Name;
    std::cout << "Enter name: ";
    std::cin >> Name;

    // print phone number or error message
    std::cout << '\n';
    if (PhoneBook.count(Name) == 1)
    {
        std::cout << "Phone Number: " <<
            PhoneBook[Name] << '\n';
    }
    else
    {
        std::cout << "Phone number not found\n";
    }
}

