#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char stroka[100], podstroka[100];
	cout << "Введите строку: ";
	gets_s(stroka);
	cout << "Введите подстроку для поиска её в строке: ";
	gets_s(podstroka);
	char* nalichie = strstr(stroka, podstroka);
	if (nalichie == NULL)
	{
		cout << "Совпадений не найдено" << endl;
	}
	else
	{
		cout << "Совпадения имеются" << endl;
	}
	system("pause");
	return 0;
}