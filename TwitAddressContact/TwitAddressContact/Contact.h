#pragma once
#include <iostream>
#include "PersonalContact.h"

class Contact {
private:
	PersonalContact contactInfo[100]; // 100���� ����ó�� ����
	int numberOfContact; // ���� ����� ����ó ����

public:
	Contact(); // ������ : ��� �ʱ�ȭ�� ���� ����
	void inputContact(char* name, char* phoneNumber = NULL, char* email = NULL, char* address = NULL);
	void printContactList(); // ����ó ��ü ��� ��ȸ
	void printContact(int index); // ����ó �� ��ȸ : index
	void printContact(char* inName); // ����ó �� ��ȸ : �̸�(�Լ� �����ε�)
	void editContactByIndex(int index, char* name, char* phoneNumber = NULL, char* email = NULL, char* address = NULL);
	void copyContact(int index);
	void removeContactByIndex(int index);
};