#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int m = 5;
	const int n = 6;
	double mas[m][n];
	cout << "¬ведите вещественные элементы матрицы: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	cout << "Print array" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "	";
		}
		cout << endl;
	}
	cout << "New vision of array" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (((i + 1) % 2 == 0) & ((j + 1) % 2 == 0))
			{
				cout << mas[i][j] << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}