#include<iostream>
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
int main()
{
	setlocale(LC_ALL, "Russian");
	laptop mylaptop;
	mylaptop.year = 2020;
	mylaptop.diagonal = 15.6;
	mylaptop.grafcard = true;
	mylaptop.OS = 'W';
	strcpy_s(mylaptop.name, 80, "Xiaomi Mi Notebook Pro");
	mylaptop.memory[0] = 512;
	cout << "Mylaptop:\n" << mylaptop.name << " | " << mylaptop.diagonal << " | " << mylaptop.year <<
		" | " << mylaptop.OS << " | " << mylaptop.grafcard << " | " << mylaptop.memory[0] << endl;
	laptop otherlaptop;
	cout << "������� ��������/������ ������ ��������: ";
	cin.getline(otherlaptop.name, 80);
	cout << "��� ������� ������ ��������: ";
	cin >> otherlaptop.year;
	cout << "������� ��������� �������� ������ ��������: ";
	cin >> otherlaptop.diagonal;
	cout << "���� �� � ��� ���������� ����������? (���� ���� - ������� 1, ����� - 0) ";
	cin >> otherlaptop.grafcard;
	cout << "������� ���� ������������ ������� (���� Mac - M, ���� windows - W, ���� Linux - L): ";
	cin >> otherlaptop.OS;
	int n;
	do
	{
		cout << "������� � ��� ������������� ����������� ��� �������� ������? (�� ������ 10) ";
		cin >> n;
	} while (n > 10);
	for (size_t i = 0; i < n; i++)
	{
		cout << "������� ���������� ������ � " << i + 1 << " �����: ";
		cin >> otherlaptop.memory[i];
	}
	cout << "Your laptop: \n" << otherlaptop.name << " | " << otherlaptop.diagonal << " | " << otherlaptop.year <<
		" | " << otherlaptop.OS << " | ";
	for (size_t i = 0; i < n; i++)
	{
		cout << otherlaptop.memory[i] << " | ";
	}
	cout << otherlaptop.grafcard << endl;
	laptop dlyaukazatelya;
	laptop* ukazatel = &dlyaukazatelya;
	ukazatel->year = 2020;
	ukazatel->diagonal = 15.6;
	(*ukazatel).grafcard = true;
	(*ukazatel).OS = 'W';
	strcpy_s((*ukazatel).name, 80, "Xiaomi Mi Notebook Pro");
	ukazatel->memory[0] = 512;
	cout << "Mylaptop:\n" << ukazatel->name << " | " << ukazatel->diagonal << " | " << ukazatel->year <<
		" | " << (*ukazatel).OS << " | " << (*ukazatel).grafcard << " | " << (*ukazatel).memory[0] << endl;
	laptop dlyassilki;
	laptop& ssilka = dlyassilki;
	(&ssilka)->year = 2020;
	(&ssilka)->diagonal = 15.6;
	(&ssilka)->grafcard = true;
	(&ssilka)->OS = 'W';
	strcpy_s((&ssilka)->name, 80, "Xiaomi Mi Notebook Pro");
	(&ssilka)->memory[0] = 512;
	cout << "Mylaptop:\n" << (&ssilka)->name << " | " << (&ssilka)->diagonal << " | " << (&ssilka)->year <<
		" | " << (&ssilka)->OS << " | " << (&ssilka)->grafcard << " | " << (&ssilka)->memory[0] << endl;
	system("pause");
	return 0;
}