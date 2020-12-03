#include "WithdrawMoney.hpp"

void WithdrawMoney::WithdrawMoneyy(AccountData *(&Date), int TakeCash,int NumberUser)
{


	return Date[NumberUser].SetCashBalance(TakeCash);

}

void WithdrawMoney::SetCashBalance(int NewCash)
{

	this->Cash = Cash-NewCash;

	
}

void WithdrawMoney::GetMoneyMenu()
{
	std::cout << "5 BY" << "(1)" << '\n';
	std::cout << "10 BY" << "(2)" << '\n';
	std::cout << "20 BY" << "(3)" << '\n';
	std::cout << "50 BY" << "(4) " << '\n';
}



