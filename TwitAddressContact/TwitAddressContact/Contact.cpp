// 연락처 관리 클래스 선언과 정의
#include "Contact.h"
using namespace std;

// 생성자
Contact::Contact() {
	numberOfContact = 0;
}

// 연락처 정보 입력
void Contact::inputContact(char* name, char* phoneNumber, char* email, char* address) {

	contactInfo[numberOfContact].inputContact(name, phoneNumber, email, address);
	numberOfContact++;
}

// 연락처 전체목록 조회
void Contact::printContactList() {

	int i;
	char name[30];
	for (i = 0; i < numberOfContact; i++) {
		contactInfo[i].getContact(name, NULL, NULL, NULL);
		cout << i << " : " << name << endl;
	}
}

// 연락처 상세조회 : index
void Contact::printContact(int index) {

	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

	contactInfo[index].getContact(name, phoneNumber, email, address);
	cout << index << "의 index를 가진 연락처 조회" << endl;
	cout << "연락처 이름 : " << name << endl;
	cout << "연락처 전화번호 : " << phoneNumber << endl;
	cout << "연락처 이메일 : " << email << endl;
	cout << "연락처 주소 : " << address << endl;
}

// 연락처 상세 조회 : 이름 (함수 오버로딩)
void Contact::printContact(char* inName) {
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

	int i;

	cout << inName << "의 이름을 가진 연락처 조회" << endl;

	for (i = 0; i < numberOfContact; i++) {
		contactInfo[i].getContact(name, phoneNumber, email, address);
		if (strcmp(inName, name) == 0) {
			cout << "연락처 이름 : " << name << endl;
			cout << "연락처 전화번호 : " << phoneNumber << endl;
			cout << "연락처 이메일 : " << email << endl;
			cout << "연락처 주소 : " << address << endl;
		}
	}
}


// 연락처 수정
void Contact::editContactByIndex(int index, char *name, char *phoneNumber, char *email, char *address){
	contactInfo[index].editContact(name, phoneNumber, email, address);
}

// 연락처 복사
void Contact::copyContact(int index) {
	contactInfo[numberOfContact] = PersonalContact(contactInfo[index]);
	numberOfContact++;
}

// 연락처 제거
void Contact::removeContactByIndex(int index) {
	if ((index >= numberOfContact) || (index < 0)) { // index값은 저장된 갯수보다 많을수도 없고 음수여선 안됨
		cout << index << "는 삭제가 불가능한 인덱스입니다. " << endl;
		return;
	}

	int i;
	for (i = index + 1; i < numberOfContact; i++) {
		contactInfo[i - 1] = contactInfo[i];
	}

	numberOfContact--;
}
