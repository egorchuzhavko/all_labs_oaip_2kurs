#include<iostream>
#include<Windows.h>
#include<fstream>
using namespace std;
struct laptop
{
	int year; //��� ������� ������ ��������
	double diagonal; //��������� ��������
	bool grafcard;//���� �� ���������� ����������
	char OS; //����� ������������ ������� ����� �� ��������
	char name[80]; //������ ��� �������� �������� ��������
};
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int p;
	do {
		cout << "������� ����� ������ ����:\n1) ������ ������ � ����\n2) ����� ������ �� ����� � �������\n3) ���� �������\n4) ������ ������� �� �����\n5) ������ ���������\n6) ������ ��������� �� �����\n7) ������ ��������� � .bin\n8) ������ ��������� �� .bin\n9) ����������� ������\n10) ����� ������\n11) �������������� �������\n0) ����� �� ���������\n���� ������: ";
		cin >> p;
		switch (p) {
		case 1: {
			int n;
			do {
				cout << "������� ������� ������ ������?: ";
				cin >> n;
			} while (n < 1);
			char text[200];
			char file[] = "D:\\study\\labs ����\\lab20\\lab20\\����������20.txt";
			ofstream f(file, ios::out | ios::trunc);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			cin.ignore();
			for (int i = 0; i < n; i++) {
				cout << "������� ������ " << i + 1 << " �� 200 ��������\n";
				cin.getline(text, 200);
				f << text << endl;
			}
			f.close();
			cout << "���� ������� � ������..\n\n";
			break;
		}
		case 2: {
			char text[200];
			char file[] = "D:\\study\\labs ����\\lab20\\lab20\\����������20.txt";
			ifstream f(file, ios::in);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			f.getline(text, 200, '\n');
			while (!f.eof()) {
				cout << text << endl;
				f.getline(text, 200, '\n');
			}
			f.close();
			cout << "���� �������� � ������.." << endl << endl;
			break;
		}
		case 3: {
			ofstream f("����������20_0.txt", ios::out | ios::trunc);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			int n;
			do {
				cout << "������� ����������� �������: ";
				cin >> n;
			} while (n <= 0);
			float* mas = new float[n];
			for (int i = 0; i < n; i++) {
				cout << "������� ������� �������: ";
				cin >> mas[i];
				f << mas[i] << ' ';
			}
			f.close();
			cout << "���� ������� � ������..\n\n";
			break;
		}
		case 4: {
			ifstream f("����������20_0.txt", ios::in);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			double y;
			f >> y;
			while (!f.eof()) {
				cout << y << endl;
				f >> y;
			}
			f.close();
			cout << "���� �������� � ������..\n\n";
			break;
		}
		case 5: {
			ofstream f("����������20_1.txt", ios::out | ios::app);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			laptop h;
			cout << "������� �������� ��������: ";
			cin.get();
			cin.getline(h.name, 100);
			cout << "������� ��� ��������: ";
			cin >> h.year;
			cout << "������� ��������� ��������: ";
			cin >> h.diagonal;
			cout << "������� 1, ���� ���� ����������, ����� 0: ";
			cin >> h.grafcard;
			cout << "������� ������ ����� �� (W - windows, L - Linux, M - Mac OS): ";
			cin >> h.OS;
			f << h.year << ' ' << h.diagonal << ' ' << h.grafcard << ' ' << h.OS << endl;
			f.close();
			cout << "��������� ���� �������� � ��������� � ����..\n\n";
			break;
		}
		case 6: {
			ifstream f("����������20_1.txt", ios::in);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			laptop h1;
			f >> h1.name >> h1.year >> h1.diagonal >> h1.grafcard >> h1.OS;
			cout << h1.name << " | " << h1.year << " | " << h1.diagonal << " | ";
			if (h1.grafcard == 1) {
				cout << "���� ���������� | " << h1.OS << endl << endl;
			}
			else {
				cout << "��� ���������� | " << h1.OS << endl << endl;
			}
			f.close();
			cout << "��������� ���� ���������..\n\n";
			break;
		}
		case 7: {
			fstream f("����������20_2.bin", ios::binary | ios::app);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			laptop h;
			cout << "������� �������� ��������: ";
			cin.get();
			cin.getline(h.name, 100);
			cout << "������� ��� ��������: ";
			cin >> h.year;
			cout << "������� ��������� ��������: ";
			cin >> h.diagonal;
			cout << "������� 1, ���� ���� ����������, ����� 0: ";
			cin >> h.grafcard;
			cout << "������� ������ ����� �� (W - windows, L - Linux, M - Mac OS): ";
			cin >> h.OS;
			f.write((char*)&h, sizeof(h));
			f.close();
			cout << "��������� ���� �������� � ��������� � �������� ����..\n\n";
			break;
		}
		case 8: {
			ifstream f("����������20_2.bin", ios::in | ios::binary);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			laptop hh;
			f.read((char*)&hh, sizeof(laptop));
			while (!f.eof()) {
				cout << hh.name << ';' << hh.year << ';' << hh.diagonal << ';' << hh.OS;
				f.read((char*)&hh, sizeof(laptop));
			}
			f.close();
			cout << "���� �������� � ������..\n\n";
			break;
		}
		case 9: {
			int n;
			do {
				cout << "������� ������� ������ ������?: ";
				cin >> n;
			} while (n < 1);
			char text[200];
			char file[] = "D:\\study\\labs ����\\lab20\\lab20\\����������20_3.txt";
			ofstream f(file, ios::out | ios::app);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			cin.ignore();
			for (int i = 0; i < n; i++) {
				cout << "������� ������ " << i + 1 << " �� 200 ��������\n";
				cin.getline(text, 200);
				f << text << endl;
			}
			f.close();
			cout << "���� ������� � ������..\n\n";
			break;
		}
		case 10: {
			char text[200];
			char file[] = "D:\\study\\labs ����\\lab20\\lab20\\����������20_3.txt";
			ifstream f(file, ios::in);
			if (!f) {
				cout << "������..\n";
				system("pause");
				return 0;
			}
			f.getline(text, 200, '\n');
			while (!f.eof()) {
				cout << text << endl;
				f.getline(text, 200, '\n');
			}
			f.close();
			cout << "���� �������� � ������.." << endl << endl;
			break;
		}
		case 11: {
			ofstream file("Chuzhavko_Ind.txt", ios::out | ios::trunc);
			if (!file) {
				cout << "������..";
				system("pause");
				return 0;
			}
			char text[] = "HELLO WORLD";
			file << text;
			file.close();
			cout << "���� ������ � ������..." << endl;
			ifstream file2("Chuzhavko_Ind.txt", ios::in);
			if (!file2) {
				cout << "������..";
				system("pause");
				return 0;
			}
			ofstream file3("Chuzhavko_Ind1.txt", ios::out | ios::trunc);
			if (!file3) {
				cout << "������..";
				system("pause");
				return 0;
			}
			char k;
			file2 >> k;
			while (!file2.eof()) {
				cout << (char)tolower(k);
				file3 << (char)tolower(k);
				file2 >> k;
			}
			cout << endl << endl;
			file2.close();
			file3.close();
			break;
		}
		case 0: {
			cout << "����� ���������..\n\n";
			system("pause");
			return 0;
		}
		default: {
			cout << "�� ����� �������� �����..\n\n";
			break;
		}
		}
	} while (p != 0);
	system("pause");
	return 0;
}