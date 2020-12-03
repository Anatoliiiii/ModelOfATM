#pragma once
#include "AccountData.hpp"

class WithdrawMoney : AccountData
{
protected :

	int Cash;


public:


	virtual void WithdrawMoneyy(AccountData* (&Date), int TakeCash,int NumberUser);
	
	void  SetCashBalance(int NewCash) override;

	void GetMoneyMenu();


};

