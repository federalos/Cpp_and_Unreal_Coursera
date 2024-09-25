#include "SavingsAccount.h"

/**
 * Constructor
 * @param InitialDeposit initial deposit
 * @param InterestRate interest rate
*/
SavingsAccount::SavingsAccount(float InitialDeposit,
	float InterestRate) : BankAccount{ InitialDeposit }
{
	// check for valid interest rate
	if (InterestRate > 0)
	{
		this->InterestRate = InterestRate;
	}
	else
	{
		// invalid interest rate, print error message
		std::cout << "Interest rates have to be larger than 0!\n";
	}
}

/**
 * Destructor
*/
SavingsAccount::~SavingsAccount()
{
}

/**
 * Adds accrued interest to the account balance
*/
void SavingsAccount::AccrueInterest()
{
	// calculate interest and add to balance
	float CurrentBalance = GetBalance();
	SetBalance(CurrentBalance + 
		CurrentBalance * InterestRate);
}

/**
 * Prints account class and balance
*/
void SavingsAccount::Print()
{
	std::cout << "Savings Account: " << GetBalance() << '\n';
}
