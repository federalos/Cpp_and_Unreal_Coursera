// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "CheckingAccount.h"

/**
 * Constructor
 * @param InitialDeposit initial deposit
*/
CheckingAccount::CheckingAccount(float InitialDeposit) :
	BankAccount{ InitialDeposit }
{
}

/**
 * Destructor
*/
CheckingAccount::~CheckingAccount()
{
}

/**
 * Gets the vector of checks for the account
 * @return vector of checks
*/
std::vector<float> CheckingAccount::GetChecks()
{
	return Checks;
}

/**
 * Cashes the check of the given amount. Prints an
 * error message if the check amount is larger than
 * the account balance
 * @param Amount check amount
*/
void CheckingAccount::CashCheck(float Amount)
{
	// check for valid check amount
	if (Amount <= GetBalance() &&
		Amount > 0)
	{
		// deduct check and add check to checks
		SetBalance(GetBalance() - Amount);
		Checks.push_back(Amount);
	}
	else if (Amount > GetBalance())
	{
		// invalid check, print error message
		std::cout << "Not enough money in account to cover check\n";
	}
	else
	{
		// invalid check, print error message
		std::cout << "Checks have to be larger than 0!\n";
	}
}

/**
 * Prints account class and balance
*/
void CheckingAccount::Print()
{
	std::cout << "Checking Account: " << GetBalance() << '\n';
}