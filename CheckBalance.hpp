#pragma once
#include "AccountData.hpp"

class CheckBalance : AccountData
{
public:

	int CheckCashBalance(AccountData* (&Date), int NumberUser) override;

	long int GetCashBalance() override;
	
};