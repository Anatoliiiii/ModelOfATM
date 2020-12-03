#include "CheckBalance.hpp"





int CheckBalance::CheckCashBalance(AccountData *(&Date), int NumberUser)
{
	return Date[NumberUser].GetCashBalance();
}

long int CheckBalance::GetCashBalance()
{
	return Cash;
}
