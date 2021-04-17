#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int m = 4;
	const int n = 3;
	int mas[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = 79 + rand() % 8;
		}
	}
	cout << "Show massiv" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " | ";
		}
		cout << endl;
	}
	cout << "Show reverse massiv" << endl;
	for (int i = m-1; i >= 0; i--)
	{
		for (int j = n-1; j >= 0; j--)
		{
			cout << mas[i][j] << " | ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}