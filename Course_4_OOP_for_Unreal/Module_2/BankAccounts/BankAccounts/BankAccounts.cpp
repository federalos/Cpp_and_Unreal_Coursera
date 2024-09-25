// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

/**
 * Money and Inheritance lecture code
 * @return exit status
*/
int main()
{
	// create accounts
	BankAccount BankAccount{ 200 };
	CheckingAccount CheckingAccount{ 100 };
	SavingsAccount SavingsAccount{ 50, 0.02f };

	// print each account
	BankAccount.Print();
	CheckingAccount.Print();
	SavingsAccount.Print();
	std::cout << '\n';

	// deposit $20 into each account
	BankAccount.MakeDeposit(20);
	CheckingAccount.MakeDeposit(20);
	SavingsAccount.MakeDeposit(20);

	// print each account
	BankAccount.Print();
	CheckingAccount.Print();
	SavingsAccount.Print();
	std::cout << '\n';

	// do class-specific operations
	CheckingAccount.CashCheck(20);
	SavingsAccount.AccrueInterest();

	// print each account
	BankAccount.Print();
	CheckingAccount.Print();
	SavingsAccount.Print();
}
