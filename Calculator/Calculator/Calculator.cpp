//#include stdafx.h;
#include <iostream>

using namespace std;
const int MENU_ITEM_INDEX = 6;

int menu()
{
	cout << "������ ��������� (� �): ";
	int sum = 0;
	int a, b;
	cin >> a >> b;
	int choice = 0;
	cout << "---------" << endl;
	cout << "   ����  " << endl;
	cout << "---------" << endl;
	cout << "1. ��������" << endl;
	cout << "2. ���������" << endl;
	cout << "3. ���������" << endl;
	cout << "4. �������" << endl;
	cout << "5. ��������� �� ���� ���������" << endl;
	cout << "6. �����" << endl;
	do {
		cout << "������ �����: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			sum = a + b;
			cout << "������ �� ������� �: " << sum << endl;
			
			break;
		case 2:
			cout << "��������� �� ������� �: " << a - b << endl;
			break;
		case 3:
			cout << "�������������� �� ������� �: " << a * b << endl;
			break;
		case 4:
			cout << "�������� �� ������� �: " << (double)a / b << endl;
			break;
		case 5:
			cout << "������ ��������� (� �): ";
			cin >> a >> b;
			break;
		case MENU_ITEM_INDEX:
			cout << "������� ���������!" << endl;
			break;
		default:
			cout << "������ �����! ���� ������ ����� ����� ������." << endl;
			break;
		}
		cout << " " << endl;
	} while (choice != MENU_ITEM_INDEX);
	return choice;
}


int main()
{
	system("chcp 1251");
	system("cls");
	menu();
	return 0;
}