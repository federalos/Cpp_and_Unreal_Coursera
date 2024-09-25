// Copyright A.T. Chamillard. All Rights Reserved.

#include "MutualFund.h"

#include <string>

/**
  * Constructor
  * @param Deposit initial deposit
 */

// provide constructor implementation here

MutualFund::MutualFund(float Deposit) : InvestmentAccount::InvestmentAccount{ Deposit }
{
}

/**
 * Adds money to the account, deducting a
 * service charge
 * @param Amount amount to add
*/
void MutualFund::AddMoney(float Amount)
{
	// delete code below and replace with your code
	// throw 404;
	InvestmentAccount::AddMoney(Amount *(1.0f - ServiceChargePercent));
}

/**
 * Updates the balance by adding 6%
*/
void MutualFund::UpdateBalance()
{
	// delete code below and replace with your code
	// throw 404;
	
	this->InvestmentAccount::SetBalance((1 + 0.06) * InvestmentAccount::GetBalance());
}

/**
 * Provides balance with account type caption
 * @return balance with caption
*/
std::string MutualFund::GetString()
{
	return std::string{ "Mutual Fund Balance: " } +
		std::to_string(GetBalance());
}

