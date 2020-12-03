#include "Menu.hpp"
#include <iostream>


void Menu::ShowMenu()
{
	std::cout << "Choose menu option : " << '\n';
	std::cout << "Check Balance - 1 " << '\n';
	std::cout << "Withdraw money - 2 " << '\n';
	std::cout << "Transfer money - 3 " << '\n';
	std::cout << "EXIT - 0" << '\n';

}

