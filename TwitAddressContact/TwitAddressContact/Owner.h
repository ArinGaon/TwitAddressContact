#pragma once
#include <iostream>

class Owner {
private:
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	char twitterAccount[20];

public:
	void inputOwnerInfo(char* inName, char* inphoneNumber = NULL, char* inEmai = NULL, char* inAddress = NULL, char* inTwitterAccount = NULL);
	void printOwnerInfo();
	void editOwnerInfo(char* inName, char* inphoneNumber = NULL, char* inEmai = NULL, char* inAddress = NULL, char* inTwitterAccount = NULL);
};