#include "GeneralManagement.h"

GeneralManagement::GeneralManagement()
{
	printf("Welcome to the PCS Online Banking Terminal \n\n");
	_isRun = true;
}

void GeneralManagement::mainMenu()
{
	printf("MAIN MENU \nType the number for your selection: \n1. ADD NEW Account \n2. Search for Account \n3. Review all Accounts\n4. Edit Account\n5. End program\n");
	int option;
	std::cin >> option;

	switch (option)
	{
		case 1:
		{
			std::cout << std::string(28, '\n');
			this->createAccount();
			break;
		}
		case 2:
		{
			std::cout << std::string(80,'\n');
			printf("Search by:\n1. First Name\n2. Last Name: \n");
			std::cin >> option;
			switch (option)
			{
				case 1:
				{
					std::cout << std::string(80, '\n');
					this->getAccByFName();
					break;
				}
				case 2:
				{
					std::cout << std::string(80, '\n');
					this->getAccByLName();
					break;
				}
			}
			break;
		}

		case 3:
		{
			std::cout << std::string(80, '\n');
			this->displayInfor();
			break;
		}
		case 4:
		{
			std::cout << std::string(80, '\n');
			this->editInfo();
			break;
		}
		case 5:
		{
			std::cout << std::string(80, '\n');
			this-> _isRun = false;
			break;
		}

	}
	std::cout << std::string(80, '\n');
}

//setters
void GeneralManagement::setRun()
{
	this-> _isRun = false;
}

void GeneralManagement::createAccount()
{
	Accounts* a1;
	a1 = new Accounts;
	a1->setAccountNumber(_accCount);
	this->_accCount += 1;
	a1->setFirstName();
	printf("\n");
	a1->setLastName();
	printf("\n");
	a1->setDOB();
	printf("\n");
	a1->setupChecking();
	printf("\n");
	Acclist.push_back(*a1);
	//clears buffer
	std::cin.get();
}



//getters
bool GeneralManagement::getRun()
{
	return this->_isRun;
}
void GeneralManagement::displayInfor()
{
	for (it = Acclist.begin(); it != Acclist.end(); ++it)
	{
		it->getInformation();
	}
}

void GeneralManagement::getAccByFName()
{
	std::string fName;
	printf("Please enter the First Name: ");
	std::cin >> fName;
	printf("\n");
	for (it = Acclist.begin(); it != Acclist.end(); ++it)
	{
		if (it->getFirstName() == fName)
		{
			printf("Account Number: %d\n", it->getAccountNumber());
			printf("First Name: %s\n", it->getFirstName().c_str());
			printf("Last Name: %s\n\n", it->getLastName().c_str());
		}
	}
}
void GeneralManagement::getAccByLName()
{
	std::string lName;
	printf("Please enter the Last Name: ");
	std::cin >> lName;
	printf("\n");
	for (it = Acclist.begin(); it != Acclist.end(); ++it)
	{
		if (it->getLastName() == lName)
		{
			printf("Account Number: %d\n", it->getAccountNumber());
			printf("First Name: %s\n", it->getFirstName().c_str());
			printf("Last Name: %s\n\n", it->getLastName().c_str());	
		}
	}

}

//general Functions
void GeneralManagement::editInfo()
{
	printf("Enter the Account Number\n");
	int num;
	std::cin >> num;
	for (it = Acclist.begin(); it != Acclist.end(); ++it)
	{
		if (it->getAccountNumber() == num) 
		{
			printf("What would you like to edit?\n1. First Name\n2. Last Name\n3. Checking Balance\n");
			int option;
			std::cin >> option;
			switch (option)
			{
				case 1:
				{
					it->setFirstName();
					break;
				}
				case 2:
				{
					it->setLastName();
					break;
				}
				case 3:
				{
					it->setChecking();
					break;
				}
			}
			break;
		}
	}
}

GeneralManagement::~GeneralManagement()
{
	printf("Goodbye!");
}