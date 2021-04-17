#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double proizvedenie = 1;
	const int j = 20;
	double mas[j];
	for (int i = 0; i < j; i++)
	{
		cin >> mas[i];
	}
	for (int i = 0; i < j; i++)
	{
		cout << "massiv[" << i << "] = " << mas[i] << endl;
	}
	for (int i = 0; i < j; i++)
	{
		if (mas[i] > 0)
		{
			proizvedenie *= mas[i];
		}
	}
	cout << endl << "Произведение = " << proizvedenie << endl;
	system("pause");
	return 0;
}