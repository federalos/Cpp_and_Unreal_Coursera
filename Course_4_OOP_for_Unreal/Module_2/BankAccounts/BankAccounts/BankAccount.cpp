// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "BankAccount.h"

/**
 * Constructor
 * @param InitialDeposit initial deposit
*/
BankAccount::BankAccount(float InitialDeposit)
{
	// deposit initial deposit into account
	MakeDeposit(InitialDeposit);
}

/**
 * Destructor
*/
BankAccount::~BankAccount()
{
}

/**
 * Gets the balance in the account
 * @return balance
*/
float BankAccount::GetBalance()
{
	return Balance;
}

/**
 * Gets the vector of deposits for the account
 * @return vector of deposits
*/
std::vector<float> BankAccount::GetDeposits()
{
	return Deposits;
}

/**
 * Gets the vector of withdrawals for the account
 * @return vector of withdrawals
*/
std::vector<float> BankAccount::GetWithdrawals()
{
	return Withdrawals;
}

/**
 * Adds the deposit to the account. Prints an error
 * message if the deposit is negative
 * @param Amount the amount to deposit
*/
void BankAccount::MakeDeposit(float Amount)
{
	// check for valid deposit
	if (Amount > 0)
	{
		// increase balance and add deposit to deposits
		Balance += Amount;
		Deposits.push_back(Amount);
	}
	else
	{
		// invalid deposit, print error message
		std::cout << "Deposits have to be larger than 0!\n";
	}
}

/**
 * Deducts the withdrawal from the account. Prints an error
 * message if the withdrawal is larger than the account
 * balance
 * @param Amount the amount to withdraw
*/
void BankAccount::MakeWithdrawal(float Amount)
{
	// check for valid withdrawal
	if (Amount <= Balance &&
		Amount > 0)
	{
		// deduct withdrawal and add withdrawal to withdrawals
		Balance -= Amount;
		Withdrawals.push_back(Amount);
	}
	else if (Amount > Balance)
	{
		// invalid withdrawal, print error message
		std::cout << "Not enough money for withdrawal amount!\n";
	}
	else
	{
		// invalid withdrawal, print error message
		std::cout << "Withdrawals have to be larger than 0!\n";
	}
}

/**
 * Prints account class and balance
*/
void BankAccount::Print()
{
	std::cout << "Bank Account: " << Balance << '\n';
}

/**
 * Sets the balance in the account
 * @param Amount balance amount
*/
void BankAccount::SetBalance(float Amount)
{
	// validate amount
	if (Amount >= 0)
	{
		Balance = Amount;
	}
	else
	{
		std::cout << "Balance amounts have to be larger than 0!\n";
	}
}