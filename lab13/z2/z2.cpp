#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char stroka[100], razdelitel[100];
	cout << "������� ������: ";
	gets_s(stroka);
	cout << "������� �����������: ";
	gets_s(razdelitel);
	char* razdelenie = strtok(stroka, razdelitel);
	while (razdelenie != NULL)
	{
		cout << razdelenie << endl;
		razdelenie = strtok(NULL, razdelitel);
	}
	system("pause");
	return 0;
}