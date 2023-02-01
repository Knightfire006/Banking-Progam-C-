#pragma once
#include "Accounts.h"
#include <vector>
//adminastrative functions
class GeneralManagement
{
public:
	//constructor
	GeneralManagement();
	//main LOOP
	void mainMenu();
	//setters
	void setRun();
	void createAccount();


	//getters
	bool getRun();
	void displayInfor();
	void getAccByFName();
	void getAccByLName();

	//general functions
	void editInfo();

	//deconstructor
	~GeneralManagement();
private:
	bool _isRun;
	std::vector<Accounts> Acclist;
	std::vector<Accounts>::iterator it;
	int _accCount = 117;
};

