#include<iostream>
#include<Windows.h>
using namespace std;

class Song {
private:
	int year;//��� ������ �����
	double length;//������������ �����
	char country;//������ �����������
	bool inchart;//��������� � ������ ��� ���
	string name;
public:
	Song() {
		cout << "������ ��� ������." << endl;
	}

	int SetYear(int a) {
		year = a;
		return year;
	}
	int GetYear() {
		return year;
	}
	double SetLength(double a) {
		length = a;
		return length;
	}
	double GetLength() {
		return length;
	}
	char SetCountry(char a) {
		country = a;
		return country;
	}
	char GetCountry() {
		return country;
	}
	bool SetInchart(bool a) {
		inchart = a;
		return inchart;
	}
	bool GetInchart() {
		return inchart;
	}
	string SetName(string a) {
		name = a;
		return name;
	}
	string GetName() {
		return name;
	}
	Song(int a, double b, char c, bool d, string s) {
		year = a;
		length = b;
		country = c;
		inchart = d;
		name = s;
	}
	void print() {
		cout << "\n�������� �����: " << GetName() << "\n����� �����: " << GetLength() << "\n��� ������: " << GetYear() << "\n������ ����� ������ �����������: " << GetCountry() << "\n��������� � ������? (1 - ��, 0 - ���): " << GetInchart() << endl;
	}
	string Status(int kf, int ke) {
		if (kf < 0 || ke < 0) {
			return("������ ��������...");
		}
		if (100000 <= (kf + ke) && (kf + ke) < 500000) {
			return ("�����������");
		}
		else {
			if (500000 <= (kf + ke) && (kf + ke) < 1000000) {
				return("�������");
			}
			else {

				if (1000000 <= (kf + ke) && (kf + ke) < 10000000) {
					return("����������");
				}
				else {
					if (10000000 <= (kf + ke)) {
						return("�������������");
					}
					else {
						return("��� �������");	
					}
				}
			}
		}
	}
	~Song() {
		cout << "������ ��� �����." << endl;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Song first;
	first.SetName("$uicideboy$ - low key");
	first.SetLength(2.02);
	first.SetCountry('A');
	first.SetInchart(false);
	first.SetYear(2015);
	first.print();
	cout << "������ �����: " << first.Status(144000, 554563) << endl << endl;
	string name;
	double length;
	char country;
	bool inchart;
	int year, proddisk, prodelek;
	cout << "������� �������� ����� � ��������� ����������� (��������: $uicedeboy$ - Low key): ";
	cin >> name;
	cout << "������� ����� ����� ����� ����� (��������: 2.02): ";
	cin >> length;
	cout << "������� ������ ����� ������ �����������: ";
	cin >> country;
	cout << "������� ��� ������ �����: ";
	cin >> year;
	cout << "��������� �� ���� � ������? (1 - ��, 0 - ���): ";
	cin >> inchart;
	cout << "������� ����� ������ �����: ";
	cin >> proddisk;
	cout << "������� ����� ������ ������������ ��������: ";
	cin >> prodelek;
	int prdd1 = proddisk, prde1 = prodelek;
	Song second(year, length, country, inchart, name);
	cout << "������ �����: " << second.Status(proddisk, prodelek) << endl << endl;
	Song* third = new Song;
	if (third == NULL) {
		cout << "������..\n\n";
		system("pause");
		return 0;
	}
	cout << "������� �������� ����� � ��������� ����������� (��������: $uicedeboy$ - Low key): ";
	cin >> name;
	third->SetName(name);
	cout << "������� ����� ����� ����� ����� (��������: 2.02): ";
	cin >> length;
	third->SetLength(length);
	cout << "������� ������ ����� ������ �����������: ";
	cin >> country;
	third->SetCountry(country);
	cout << "������� ��� ������ �����: ";
	cin >> year;
	third->SetYear(year);
	cout << "��������� �� ���� � ������? (1 - ��, 0 - ���): ";
	cin >> inchart;
	third->SetInchart(inchart);
	cout << "������� ����� ������ �����: ";
	cin >> proddisk;
	cout << "������� ����� ������ ������������ ��������: ";
	cin >> prodelek;
	third->print();
	cout << "������ �����: " << third->Status(proddisk, prodelek) << endl << endl;
	cout << "������� �������� ����� � ��������� ����������� (��������: $uicedeboy$ - Low key): ";
	cin >> name;
	cout << "������� ����� ����� ����� ����� (��������: 2.02): ";
	cin >> length;
	cout << "������� ������ ����� ������ �����������: ";
	cin >> country;
	cout << "������� ��� ������ �����: ";
	cin >> year;
	cout << "��������� �� ���� � ������? (1 - ��, 0 - ���): ";
	cin >> inchart;
	cout << "������� ����� ������ �����: ";
	cin >> proddisk;
	cout << "������� ����� ������ ������������ ��������: ";
	cin >> prodelek;
	int prdd2 = proddisk, prde2 = prodelek;
	Song* fourth = new Song(year, length, country, inchart, name);
	fourth->print();
	cout << "������ �����: " << fourth->Status(proddisk, prodelek) << endl << endl;
	Song* s1 = &first;
	(s1)->print();
	Song** s4 = &fourth;
	(*s4)->print();
	Song& ss1 = first;
	(&ss1)->Status(prdd1, prde1);
	Song& ss4 = *fourth;
	(&ss4)->Status(prdd2, prde2);
	first.~Song();
	second.~Song();
	third->~Song();
	fourth->~Song();
	system("pause");
	return 0;
}