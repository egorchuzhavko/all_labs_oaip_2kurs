#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char* s = new char[50];
	cout << "������� ���� ������� ��� ��������: ";
	cin.getline(s, 50);
	int age;
	double height;
	cout << "������� ��� ������� (������ ���): ";
	cin >> age;
	cout << "������� ��� ���� (� ������): ";
	cin >> height;

	cout << "\n\thello, " << s << "!\n\t������������ ��� � MS VS2019. \n��� ������� " << age << " ���.\t��� ���� " << height << "������.\n\t����!" << endl;
	
	system("pause");
	return 0;
}