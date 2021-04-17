#include<iostream>
#include<Windows.h>
using namespace std;
struct laptop
{
	int year; //��� ������� ������ ��������
	double diagonal; //��������� ��������
	bool grafcard;//���� �� ���������� ����������
	char OS; //����� ������������ ������� ����� �� ��������
	char name[80]; //������ ��� �������� �������� ��������
	int memory[10]; //������ ��� �������� ���������� ������ � ������������� �����������
};
struct note
{
	char name[80], surname[80];
	int phonenumber;
	int birthday[3];
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n, m, x, kolvo = 0;
	do
	{
		cout << "������� � ��� ���������? ";
		cin >> n;
	} while (n <= 0);
	laptop* notebook = new laptop[n];
	laptop** ukazatel = &notebook;
	if (notebook == NULL)
	{
		cout << "������ �� ���� ��������� �� �� ������� � �������\n";
		system("pause");
		return 0;
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << "������� ��������/������ ������ ��������: ";
		cin.ignore();
		cin.getline(ukazatel[i]->name, 80);
		cout << "��� ������� ������ ��������: ";
		cin >> ukazatel[i]->year;
		cout << "������� ��������� �������� ������ ��������: ";
		cin >> ukazatel[i]->diagonal;
		cout << "���� �� � ��� ���������� ����������? (���� ���� - ������� 1, ����� - 0) ";
		cin >> ukazatel[i]->grafcard;
		cout << "������� ���� ������������ ������� (���� Mac - M, ���� windows - W, ���� Linux - L): ";
		cin >> ukazatel[i]->OS;
		int n;
		do
		{
			cout << "������� � ��� ������������� ����������� ��� �������� ������? (�� ������ 10) ";
			cin >> m;
		} while (m > 10);
		for (size_t j = 0; j < m; j++)
		{
			cout << "������� ���������� ������ � " << j + 1 << " �����: ";
			cin >> ukazatel[i]->memory[j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << "\n\n������� " << i + 1 << " :" << endl;
		cout << ukazatel[i]->name << endl << "��� �������: " << ukazatel[i]->year << endl <<
			"��������� ��������: " << ukazatel[i]->diagonal << endl;
		if (ukazatel[i]->grafcard == 1)
		{
			cout << "���� ���������� ����������" << endl;
		}
		else
		{
			cout << "��� ���������� ����������" << endl;
		}
		if (ukazatel[i]->OS == 'W')
		{
			cout << "������������ �������: Windows" << endl;
		}
		if (ukazatel[i]->OS == 'M')
		{
			cout << "������������ �������: Mac OS" << endl;
		}
		if (ukazatel[i]->OS == 'L')
		{
			cout << "������������ �������: Linux" << endl;
		}
		else
		{
			cout << "������������ �������: ����������" << endl;
		}
		cout << "����� " << m << " ����������� ������: " << endl;
		for (size_t j = 0; j < m; j++)
		{
			cout << "������� �����������" << j + 1 << " �����: ";
			cout << ukazatel[i]->memory[j] << endl;
		}
	}
	cout << "������ ���� ������� �� �����?\n";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (ukazatel[i]->year == x)
		{
			kolvo++;
		}
	}
	if (kolvo > 0)
	{
		cout << "���������� �������. �� -" << x << endl;
	}
	else
	{
		cout << "���������� �� �������" << endl;
	}
	cout << endl;
	note* bloknot = new note[10];
	note** bb = &bloknot;
	note temp;
	int x1, nomer, netsovpadeniy = 0;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "������� ��� ��������: ";
		cin.ignore();
		cin.getline(bb[i]->name, 80);
		cout << "������� ������� ��������: ";
		cin.ignore();
		cin.getline(bb[i]->surname, 80);
		cout << "������� ����� ��������: +";
		cin >> bb[i]->phonenumber;
		cout << "������� ���� �������� (������ ����� ���): ";
		cin >> bb[i]->birthday[0];
		cout << "������� ����� �������� (����� ������): ";
		cin >> bb[i]->birthday[1];
		cout << "������� ��� ��������: ";
		cin >> bb[i]->birthday[2];
	}
	for (size_t i = 0; i < 9; i++)
	{
		x = bb[i]->birthday[2] * 512 + bb[i]->birthday[1] * 32 + bb[i]->birthday[0];
		x1 = bb[i + 1]->birthday[2] * 512 + bb[i + 1]->birthday[1] * 32 + bb[i + 1]->birthday[0];
		if (x > x1)
		{
			temp = bloknot[i];
			bloknot[i] = bloknot[i + 1];
			bloknot[i + 1] = temp;
		}
	}
	cout << "������� ����� �������� ��� ������: +";
	cin >> nomer;
	for (size_t i = 0; i < 10; i++)
	{
		if (nomer == bloknot->phonenumber)
		{
			cout << "������� � ���: " << bb[i]->surname << ' ' << bb[i]->name << endl << "���� ��������: " << bb[i]->birthday[0] << '.' <<
				bb[i]->birthday[1] << '.' << bb[i]->birthday[2] << endl << "�����: +" << bb[i]->phonenumber << endl;
		}
		else
		{
			netsovpadeniy++;
		}
	}
	if (netsovpadeniy != 0)
	{
		cout << "���������� �� �������.." << endl;
	}
	system("pause");
	return 0;
}