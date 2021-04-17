#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double A1, A2, U1, U2, R1, R2;
	cout << "Введите Напряжение для первого тока: ";
	cin >> U1;
	cout << "Введите Сопротивление для первого тока: ";
	cin >> R1;
	A1 = U1 / R1;
	cout << "Введите Напряжение для второго тока: ";
	cin >> U2;
	cout << "Введите Сопротивление для второго тока:  ";
	cin >> R2;
	A2 = U2 / R2;
	if (A1>A2)
	{
		cout << "Участок цепи с наименьшим током - 2, его ток = " << A2 << endl;
	}
	else
	{
		if (A1 < A2)
		{
			cout << "Участок цепи с наименьшим током - 1, его ток = " << A1 << endl;
		}
		else 
		{
			cout << "Оба участка цепи равны A1=A2=" << A1 << endl;
		}
	}
	system("pause");
	return 0;
}