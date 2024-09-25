// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <vector>

/**
 * A bank account that accepts deposits and withdrawals.
 * We can also access the current balance and vectors of
 * deposits and withdrawals for the account
*/
class BankAccount
{
private:
	float Balance{ 0 };
	std::vector<float> Deposits{};
	std::vector<float> Withdrawals{};

public:
	/**
	 * Constructor
	 * @param InitialDeposit initial deposit
	*/
	BankAccount(float InitialDeposit);

	/**
	 * Destructor
	*/
	virtual ~BankAccount();

	/**
	 * Gets the balance in the account
	 * @return balance
	*/
	float GetBalance();

	/**
	 * Gets the vector of deposits for the account
	 * @return vector of deposits
	*/
	std::vector<float> GetDeposits();

	/**
	 * Gets the vector of withdrawals for the account
	 * @return vector of withdrawals
	*/
	std::vector<float> GetWithdrawals();

	/**
	 * Adds the deposit to the account. Prints an error
	 * message if the deposit is negative
	 * @param Amount the amount to deposit
	*/
	void MakeDeposit(float Amount);

	/**
	 * Deducts the withdrawal from the account. Prints an error
	 * message if the withdrawal is larger than the account
	 * balance
	 * @param Amount the amount to withdraw
	*/
	void MakeWithdrawal(float Amount);

	/**
	 * Prints account class and balance
	*/
	virtual void Print();

protected:
	/**
	 * Sets the balance in the account
	 * @param Amount balance amount
	*/
	void SetBalance(float Amount);
};

