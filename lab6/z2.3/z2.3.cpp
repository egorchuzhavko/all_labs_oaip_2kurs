#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
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
	cout << endl << endl;
	for (int i = 3; i < 9; i++)
	{
		if (i % 2 != 0)
		{
			cout << "massiv[" << i << "] = " << mas[i] << endl;
		}
	}
	system("pause");
	return 0;
}