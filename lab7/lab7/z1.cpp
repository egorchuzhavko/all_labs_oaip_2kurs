#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 4;
	int mas[n][n];
	cout << "������� �������� �������: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	int kolichestvo = 0;
	for (int j = 0; j < n; j++)
	{
		if (mas[1][j] < 0)
		{
			kolichestvo++;
		}
	}
	cout << "���������� ������������� ��������� � �������: " << kolichestvo << endl;
	system("pause");
	return 0;
}