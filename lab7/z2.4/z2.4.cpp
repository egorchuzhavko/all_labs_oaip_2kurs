#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int m = 19;
	const int n = 8;
	long int mas[m][n];
	long int chzap = 97;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = chzap;
			chzap -= 10;
		}
	}
	cout << "Print massiv" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Print new massiv" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << pow(mas[i][j],2) << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}