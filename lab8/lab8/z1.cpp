#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int m;
	do
	{
		cout << "������� ����������� �������� A � B: ";
		cin >> m;
	} while (m < 0);
	int* a = new int[m];
	int* b = new int[m];
	if (a == NULL || b==NULL)
	{
		cout << "������������ ������ ��� �������� �������" << endl;
		system("pause");
		return 0;
	}
	cout << "������ �� ������ ��������� ������ �" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
	cout << "������ �� ������ ��������� ������ B" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "B[" << i << "]=";
		cin >> b[i];
	}
	int kolvoa = 0, kolvob = 0;
	for (int i = 0; i < m; i++)
	{
		if (a[i] < 0)
		{
			kolvoa++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (b[i] < 0)
		{
			kolvob++;
		}
	}
	if (kolvoa < kolvob)
	{
		cout << "������ � ����� ������ ������������� ���������" << endl << "������ �:" << endl;
		for (int i = 0; i < m; i++)
		{
			cout << a[i]<<' ';
		}
		cout << endl << "������ B:" << endl;
		for (int i = 0; i < m; i++)
		{
			cout << b[i] << ' ';
		}
	}
	else
	{
		cout << "������ B ����� ������ ������������� ���������" << endl << "������ B:" << endl;
		for (int i = 0; i < m; i++)
		{
			cout << b[i] << ' ';
		}
		cout << endl << "������ �: " << endl;
		for (int i = 0; i < m; i++)
		{
			cout << a[i] << ' ';
		}
	}
	delete[] a;
	a = NULL;
	delete[] b;
	b = NULL;
	cout << endl;
	system("pause");
	return 0;
}