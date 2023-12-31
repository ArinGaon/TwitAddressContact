// 소유자 관리 클래스와 정의
#include "Owner.h"

using namespace std;

// 소유자 정보 입력
void Owner::inputOwnerInfo(char* inName, char* inPhoneNumber, char* inEmail, char* inAddress, char* inTwitterAccount) { // 정보 변수

	if (inName != NULL) // 변수가 NULL값이 아니면 ( 정보가 입력되지 않았다면 )
		strcpy_s(name, 20, inName); // 정보 입력

	if (inPhoneNumber != NULL)
		strcpy_s(phoneNumber, 13, inPhoneNumber);

	if (inEmail != NULL)
		strcpy_s(email, 30, inEmail);

	if (inAddress != NULL)
		strcpy_s(address, 50, inAddress);

	if (inTwitterAccount != NULL)
		strcpy_s(twitterAccount, 20, inTwitterAccount);
}

// 소유자 정보 출력
void Owner::printOwnerInfo() {

	cout << "소유자 이름 : " << name << endl;
	cout << "소유자 전화번호 : " << phoneNumber << endl;
	cout << "소유자 이메일 : " << email << endl;
	cout << "소유자 주소 : " << address << endl;
	cout << "소유자 트위터 계정 : " << twitterAccount << endl;
}

// 소유자 정보 수정
void Owner::editOwnerInfo(char* inName, char* inPhoneNumber, char* inEmail, char* inAddress, char* inTwitterAccount) {
	if (inName != NULL)
		strcpy_s(name, 20, inName);

	if (inPhoneNumber != NULL)
		strcpy_s(phoneNumber, 13, inPhoneNumber);

	if (inAddress != NULL)
		strcpy_s(address, 50, inAddress);

	if (inEmail != NULL)
		strcpy_s(email, 30, inEmail);

	if (inTwitterAccount != NULL)
		strcpy_s(twitterAccount, 20, inTwitterAccount);
}