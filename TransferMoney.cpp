#include "TransferMoney.hpp"

void TransferMoney::Transfer(AccountData *(&Date), int TakeCash, int NumberUser)
{

	return Date[NumberUser].SetCashBalance(TakeCash);

}
