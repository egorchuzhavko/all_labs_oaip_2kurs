#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int j = 20;
	int mas[j];
	cout << "¬ведите элемент массива: " << endl;
	for (int i = 0; i < j; i++)
	{
		cin >> mas[i];
	}
	cout << endl;
	for (int i = 0; i < j; i++)
	{
		cout << mas[i] << ' ';
	}
	for (int i = 0; i < 17; i++)
	{
		if ((mas[i] % 5 != 0))
		{
			cout << mas[i] << ' ';
		}
	}
	cout << endl;
	system("pause");
	return 0;
}