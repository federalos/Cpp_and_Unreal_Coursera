// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

/**
 * Exercise 11 solution
 * @return exit status
*/
int main()
{
    std::string Input;

    // prompt for and read in string
    std::cout << "Enter <pyramid slot>,<block letter>,<true or false for block lit>: ";
    std::cin >> Input;
    std::cout << '\n';

    // extract and print pyramid slot number
    std::size_t CommaLocation = Input.find(',');
    int SlotNumber = std::stoi(Input.substr(0, CommaLocation));
    std::cout << "Slot Number: " << SlotNumber << '\n';

    // extract and print block letter
    char BlockLetter = Input[CommaLocation + 1];
    std::cout << "Block Letter: " << BlockLetter << '\n';

    // extract and print whether or not the block should be lit
    Input = Input.substr(CommaLocation + 1);
    CommaLocation = Input.find(',');
    bool Lit = false;
    if (Input.substr(CommaLocation + 1) == "true")
    {
        Lit = true;
    }
    std::cout << "Block should be lit: " <<
        std::boolalpha << Lit << '\n';
}
