#include "Accounts.h"


Accounts::Accounts()
{
	printf("CREATING A NEW ACCOUNT\n");
}

//setters
void Accounts::setFirstName()
{
	printf("Please enter a First Name: ");
	std::cin >> _firstName;
}
void Accounts::setLastName()
{

	printf("Please enter a Last Name: ");
	std::cin >> _lastName;
}
void Accounts::setAccountNumber(int count)
{
	_accountNumber = count;
	
}
void Accounts::setDOB()
{
	printf("Please enter a DOB (MM/DD/YYYY): ");
	std::cin >> _DOB;
}
void Accounts::setupChecking()
{
	printf("Please enter a deposit of a min. $10.00: ");
	std::cin >> _checking;
}
void Accounts::setChecking()
{
	printf("1. Deposit money\n2. Withdraw money\n");
	int option;
	std::cin >> option;
	switch (option)
	{
		case 1:
		{
			this->deposit();
			break;
		}
		case 2:
		{
			this->withdraw();
			break;
		}
	}
}

//getters
std::string Accounts::getFirstName()
{
	return this->_firstName;
}

std::string Accounts::getLastName()
{
	return this->_lastName;
}

int Accounts::getAccountNumber()
{
	return this->_accountNumber;
}

void Accounts::getInformation()
{
	printf("\n\n");
	printf("ACCOUNT # %d\nFirst Name: %s \nLast Name: %s \nDOB: %s\nAccount Balance: $%.2f\n", _accountNumber, _firstName.c_str(), _lastName.c_str(), _DOB.c_str(), _checking);
	printf("\n\n");
}

int Accounts::getChecking()
{
	return this->_checking;
}

//functions to account
void Accounts::withdraw()
{
	float startAmount;
	startAmount = this->getChecking();

	printf("How much would you like to Withdraw?\n");
	float withdrawAmount;
	std::cin >> withdrawAmount;

	_checking -= withdrawAmount;
}
void Accounts::deposit()
{
	float startAmount;
	startAmount = this->getChecking();

	printf("How much would you like to Deposit?\n");
	float depositAmount;
	std::cin >> depositAmount;

	_checking += depositAmount;
}

//deconstructor
Accounts::~Accounts()
{

}