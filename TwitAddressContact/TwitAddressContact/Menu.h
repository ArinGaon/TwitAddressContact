#pragma once
#include <iostream>

class Menu {
private:
	char topMenu[3][32]; // �ֻ��� �޴�����
	char ownerMenu[4][32]; // ������ �޴�����
	char contactMenu[7][32]; // ����ó �޴�����
	int menuType; // 0. top menu, 1. owner menu, 2. contact menu

public:
	Menu(); // ������
	void showMenu(); // ���� �޴� ���� ���¸� ���� �޴� ��� ���
	void setMenuSelection(int selection); // ù ��° �ܰ� �޴� ����
	int execution(); // ������ �޴� ����
};