// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <vector>

#include "BankAccount.h"

/**
 * A checking account that lets us cash checks and access the 
 * vector of checks that have been cashed
*/
class CheckingAccount : public BankAccount
{
private:
	std::vector<float> Checks{};

public:
	/**
	 * Constructor
	 * @param InitialDeposit initial deposit
	*/
	CheckingAccount(float InitialDeposit);

	/**
	 * Destructor
	*/
	virtual ~CheckingAccount();

	/**
	 * Gets the vector of checks for the account
	 * @return vector of checks
	*/
	std::vector<float> GetChecks();

	/**
	 * Cashes the check of the given amount. Prints an
	 * error message if the check amount is larger than 
	 * the account balance
	 * @param Amount check amount
	*/
	void CashCheck(float Amount);

	/**
	 * Prints account class and balance
	*/
	virtual void Print() override;
};

