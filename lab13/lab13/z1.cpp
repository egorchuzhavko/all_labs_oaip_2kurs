#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char stroka[100], podstroka[100];
	cout << "������� ������: ";
	gets_s(stroka);
	cout << "������� ��������� ��� ������ � � ������: ";
	gets_s(podstroka);
	char* nalichie = strstr(stroka, podstroka);
	if (nalichie == NULL)
	{
		cout << "���������� �� �������" << endl;
	}
	else
	{
		cout << "���������� �������" << endl;
	}
	system("pause");
	return 0;
}