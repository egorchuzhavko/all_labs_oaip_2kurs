#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int m = 3;
	const int n = 4;
	char mas[m][n];
	cout << "¬ведите символьные элементы матрицы: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " ; ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}