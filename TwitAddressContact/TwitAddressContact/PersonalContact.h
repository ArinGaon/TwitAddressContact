#pragma once
#include <iostream>

class PersonalContact {
private:
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

public:
	PersonalContact() {} // 기본 생성자
	PersonalContact(PersonalContact &personal); // 복사 생성자
	void inputContact(char* inName, char* inPhoneNumber = NULL, char* inEmail = NULL, char* inAddress = NULL);
	void getContact(char* outName, char* outPhoneNumber, char* outEmail, char* outAddress);
	void editContact(char* inName, char* inPhoneNumber = NULL, char* inEmail = NULL, char* inAddress = NULL);
};