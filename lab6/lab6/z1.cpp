#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mas[15];
	int summa = 0;
	for (int i = 0; i < 15; i++)
	{
		cout << "¬ведите элемент массива: ";
		cin >> mas[i];
		if (mas[i] > 0)
		{
			summa += mas[i];
		}
	}
	int newmas[15];
	for (int i = 0; i < 15; i++)
	{
		newmas[i] = mas[i] - summa;
	}
	for (int i = 0; i < 15; i++)
	{
		cout << newmas[i] << ' ';
	}
	system("pause");
	return 0;
}