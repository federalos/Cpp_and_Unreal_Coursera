// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <iostream>

#include "BankAccount.h"

/**
 * A savings account that pays interest
*/
class SavingsAccount : public BankAccount
{
private:
	float InterestRate;

public:
	/**
	 * Constructor
	 * @param InitialDeposit initial deposit
	 * @param InterestRate interest rate
	*/
	SavingsAccount(float InitialDeposit, float InterestRate);

	/**
	 * Destructor
	*/
	virtual ~SavingsAccount();

	/**
	 * Adds accrued interest to the account balance
	*/
	void AccrueInterest();

	/**
	 * Prints account class and balance
	*/
	virtual void Print() override;
};
