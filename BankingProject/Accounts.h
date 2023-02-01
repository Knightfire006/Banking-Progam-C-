#pragma once
#include <string>
#include <iostream>
#include <string>

class Accounts
{
public:
	Accounts();

	//setters
	void setFirstName();
	void setLastName();
	void setAccountNumber(int);
	void setDOB();
	void setupChecking();
	void setChecking();
	
	//getters
	std::string getFirstName();
	std::string getLastName();
	void getInformation();
	int getChecking();
	int getAccountNumber();

	//functions to account
	void withdraw();
	void deposit();

	~Accounts();
private:
	std::string _firstName;
	std::string _lastName;
	int _accountNumber;
	std::string _DOB;
	float _checking;

	int index;
};

