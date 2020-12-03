
#include <iostream>
#include <math.h>
#include "AccountData.hpp"
#include "CheckBalance.hpp"
#include "Menu.hpp"
#include "WithdrawMoney.hpp"
#include "TransferMoney.hpp"
#include <string>



using namespace std;

int main()
{


	int OptionCounter = 10, PinCode = 0, CounterPinCode = 3, Switch,TakeMoney = 0 ,AccountNumber = 0;

	int UserCounter = 0;

	while (OptionCounter != 0)
	{

		cout << "Enter yout card" << endl;

		cout << "I'll pretend that the card is inserted" << endl;

		system("pause");


		string filename;
		int size = 0;



		AccountData* Data = new AccountData[size];

		AccountData Buisness;

		Buisness.accountDataReading(Data, size, "DataBase.txt");


	M:

		cout << "Enter the pin code" << endl;

		cin >> PinCode;

		if (Buisness.CheckPinCode(Data, PinCode) >= 0)
		{

			cout << "Correct pin code,Good job" << endl;

			UserCounter = Buisness.CheckPinCode(Data, PinCode);

		}
		else
		{
			CounterPinCode--;
			cout << "Incorrect pin code you have no more attempts : " << CounterPinCode << endl;

			if (CounterPinCode == -1)
			{
				cout << "Bye Bye your card :( " << endl;
				cout << "They pretended that the map went back" << endl;
				return 0;
			}
			goto M;
		}
		Menu ShowMenu;
		while (OptionCounter != 0) {
			ShowMenu.ShowMenu();
			cin >> OptionCounter;
			switch (OptionCounter)
			{
			case 0:
			{
				return 0;
				break;
			}

			case 1:
			{

				CheckBalance Balance;

				cout << "Your account balance : " << Balance.CheckCashBalance(Data, UserCounter) << " BY" <<endl;



				break;
			}
			case 2:
			{

				WithdrawMoney Balance;
				
				cout << "Enter the withdrawal amount" << endl;

				cin >> TakeMoney;

				Balance.WithdrawMoneyy(Data, TakeMoney, UserCounter);

				cout << "Choose,how you want to get money" << endl;

				Balance.GetMoneyMenu();

				cin >> AccountNumber;

				cout << "Chik Chik Chik" << endl;

				cout << "Let's pretend you got the money" << endl;

				system("pause");

				


				break;
			}
			case 3:
			{
				TransferMoney Transf;

				cout << "Enter your account number" << endl;

				cin >> AccountNumber;

				cout << "Enter amount cash" << endl;

				cin >> TakeMoney;

				Transf.Transfer(Data, TakeMoney, UserCounter);

			
				break;

			}



			}






		}
	}


	system("pause");
}
