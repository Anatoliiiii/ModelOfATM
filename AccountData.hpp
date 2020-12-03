#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>



class AccountData
{
protected:


	int TruePin;
	std::string Family;
	std::string Name;
	std::string Dadname;
	int PinCode;
	long int CardNumber;
	long int MonthYear;
	int CV;
	int Cash;

public:


	void accountDataReading(AccountData* (&Date), int&  size,std::string filename);

	int CheckPinCode(AccountData* (&Date), int PinCode);

	void DataEntry(std::string Family, std::string Name, std::string Dadname, int PinCode, int CardNumber, int MonthYear, int CV,int Cash);
	
	virtual	int CheckCashBalance(AccountData* (&Date), int PinCode);

	virtual long int GetCashBalance();

	virtual void SetCashBalance(int NewCash);

	long int  getPinCode();





};