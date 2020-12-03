#include "AccountData.hpp"
#include <fstream>
#include <string>

void AccountData::accountDataReading(AccountData *(&Date), int& size, std::string filename)
{
	std::ifstream reading(filename);
	int n = 0;
	
	

	if (reading)
	{
		reading >> n;

		Date = new AccountData[n];

		for(int Counter = 0 ; Counter < n ; Counter++)
		{
			std::string Family, Name, Dadname;
			int CardNumber, MonthYear, CV, Cash, PinCode;

			reading >> Family >> Name >> Dadname;
			reading >> CardNumber >> MonthYear >> CV;
			reading >> Cash >> PinCode;

		
			Date[Counter].DataEntry(Family, Name, Dadname, PinCode, CardNumber, MonthYear, CV , Cash);
		
		
		}


	}



	

}

int AccountData::CheckPinCode(AccountData *(&Date),int PinCode)
{
	int Counter, TruePinCode;

	int size = 2;

	for (Counter = 0; Counter < size; Counter++) 
	{
		
		if(Date[Counter].getPinCode() == PinCode)
		{
			return Counter;
		}
		




	}
	return -1;
	   
}


void AccountData::DataEntry(std::string Family, std::string Name, std::string Dadname, int PinCode, int CardNumber, int MonthYear, int CV,int Cash)
{

	this->Family = Family;
	this->Name = Name;
	this->Dadname = Dadname;
	this->PinCode = PinCode;
	this->CardNumber = CardNumber;
	this->MonthYear = MonthYear;
	this->CV = CV;
	this->Cash = Cash;








}

int AccountData::CheckCashBalance(AccountData *(&Date), int PinCode)
{
	return Cash;
}

long int AccountData::GetCashBalance()
{
	return Cash;
}

void AccountData::SetCashBalance(int NewCash)
{

	this->Cash = Cash-NewCash;

}



long int AccountData::getPinCode()
{
	return PinCode;
}



