#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int m = 4;
	const int n = 3;
	double mas[m][n];
	cout << "¬ведите вещественные элементы матрицы: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "mas[" << i << "][" << j << "] = ";
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
	system("pause");
	return 0;
}