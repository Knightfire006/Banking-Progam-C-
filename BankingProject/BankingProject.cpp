// BankingProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
needs exceptions to handle invalid inputs

delete accounts.

display balance.

*/
#include "GeneralManagement.h"

int main()
{
	GeneralManagement Run;
	do {
		Run.mainMenu();
	} while (Run.getRun());
}


