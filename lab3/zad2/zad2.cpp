#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double A1, A2, U1, U2, R1, R2;
	cout << "������� ���������� ��� ������� ����: ";
	cin >> U1;
	cout << "������� ������������� ��� ������� ����: ";
	cin >> R1;
	A1 = U1 / R1;
	cout << "������� ���������� ��� ������� ����: ";
	cin >> U2;
	cout << "������� ������������� ��� ������� ����:  ";
	cin >> R2;
	A2 = U2 / R2;
	if (A1>A2)
	{
		cout << "������� ���� � ���������� ����� - 2, ��� ��� = " << A2 << endl;
	}
	else
	{
		if (A1 < A2)
		{
			cout << "������� ���� � ���������� ����� - 1, ��� ��� = " << A1 << endl;
		}
		else 
		{
			cout << "��� ������� ���� ����� A1=A2=" << A1 << endl;
		}
	}
	system("pause");
	return 0;
}