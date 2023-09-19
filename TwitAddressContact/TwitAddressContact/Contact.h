#pragma once
#include <iostream>
#include "PersonalContact.h"

class Contact {
private:
	PersonalContact contactInfo[100]; // 100명의 연락처를 저장
	int numberOfContact; // 현재 저장된 연락처 개수

public:
	Contact(); // 생성자 : 멤버 초기화를 위해 생성
	void inputContact(char* name, char* phoneNumber = NULL, char* email = NULL, char* address = NULL);
	void printContactList(); // 연락처 전체 목록 조회
	void printContact(int index); // 연락처 상세 조회 : index
	void printContact(char* inName); // 연락처 상세 조회 : 이름(함수 오버로딩)
	void editContactByIndex(int index, char* name, char* phoneNumber = NULL, char* email = NULL, char* address = NULL);
	void copyContact(int index);
	void removeContactByIndex(int index);
};