#include<iostream>
#include<Windows.h>
#include<fstream>
using namespace std;
struct laptop
{
	int year; //год выпуска модели ноутбука
	double diagonal; //диагональ монитора
	bool grafcard;//есть ли дискретная видеокарта
	char OS; //какая операционная система стоит на ноутбуке
	char name[80]; //массив для хранения названия ноутбука
};
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int p;
	do {
		cout << "Введите номер пункта меню:\n1) Запись текста в файл\n2) Вывод текста из файла в консоль\n3) Ввод массива\n4) Чтение массива из файла\n5) Запись структуры\n6) Чтение стректуры из файла\n7) Запись структуры в .bin\n8) Чтение структуры из .bin\n9) Дописывание текста\n10) Вывод текста\n11) Индивидуальное задание\n0) Выход из программы\nВвод пункта: ";
		cin >> p;
		switch (p) {
		case 1: {
			int n;
			do {
				cout << "Сколько абзацев хотите ввести?: ";
				cin >> n;
			} while (n < 1);
			char text[200];
			char file[] = "D:\\study\\labs ОАиП\\lab20\\lab20\\ЧужавкоЛаб20.txt";
			ofstream f(file, ios::out | ios::trunc);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			cin.ignore();
			for (int i = 0; i < n; i++) {
				cout << "Введите строку " << i + 1 << " до 200 символов\n";
				cin.getline(text, 200);
				f << text << endl;
			}
			f.close();
			cout << "Файл записан и закрыт..\n\n";
			break;
		}
		case 2: {
			char text[200];
			char file[] = "D:\\study\\labs ОАиП\\lab20\\lab20\\ЧужавкоЛаб20.txt";
			ifstream f(file, ios::in);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			f.getline(text, 200, '\n');
			while (!f.eof()) {
				cout << text << endl;
				f.getline(text, 200, '\n');
			}
			f.close();
			cout << "Файл прочитан и закрыт.." << endl << endl;
			break;
		}
		case 3: {
			ofstream f("ЧужавкоЛаб20_0.txt", ios::out | ios::trunc);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			int n;
			do {
				cout << "Введите размерность массива: ";
				cin >> n;
			} while (n <= 0);
			float* mas = new float[n];
			for (int i = 0; i < n; i++) {
				cout << "Введите элемент массива: ";
				cin >> mas[i];
				f << mas[i] << ' ';
			}
			f.close();
			cout << "Файл записан и закрыт..\n\n";
			break;
		}
		case 4: {
			ifstream f("ЧужавкоЛаб20_0.txt", ios::in);
			if (!f) {
				cout << "Ошибка..\n";
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
			cout << "Файл прочитан и закрыт..\n\n";
			break;
		}
		case 5: {
			ofstream f("ЧужавкоЛаб20_1.txt", ios::out | ios::app);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			laptop h;
			cout << "Введите название ноутбука: ";
			cin.get();
			cin.getline(h.name, 100);
			cout << "Введите год ноутбука: ";
			cin >> h.year;
			cout << "Введите диагональ ноутбука: ";
			cin >> h.diagonal;
			cout << "Введите 1, если есть видеокарта, иначе 0: ";
			cin >> h.grafcard;
			cout << "Введите первую букву ОС (W - windows, L - Linux, M - Mac OS): ";
			cin >> h.OS;
			f << h.year << ' ' << h.diagonal << ' ' << h.grafcard << ' ' << h.OS << endl;
			f.close();
			cout << "Структура была записана и сохранена в файл..\n\n";
			break;
		}
		case 6: {
			ifstream f("ЧужавкоЛаб20_1.txt", ios::in);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			laptop h1;
			f >> h1.name >> h1.year >> h1.diagonal >> h1.grafcard >> h1.OS;
			cout << h1.name << " | " << h1.year << " | " << h1.diagonal << " | ";
			if (h1.grafcard == 1) {
				cout << "есть видеокарта | " << h1.OS << endl << endl;
			}
			else {
				cout << "нет видеокарты | " << h1.OS << endl << endl;
			}
			f.close();
			cout << "Структура была прочитана..\n\n";
			break;
		}
		case 7: {
			fstream f("ЧужавкоЛаб20_2.bin", ios::binary | ios::app);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			laptop h;
			cout << "Введите название ноутбука: ";
			cin.get();
			cin.getline(h.name, 100);
			cout << "Введите год ноутбука: ";
			cin >> h.year;
			cout << "Введите диагональ ноутбука: ";
			cin >> h.diagonal;
			cout << "Введите 1, если есть видеокарта, иначе 0: ";
			cin >> h.grafcard;
			cout << "Введите первую букву ОС (W - windows, L - Linux, M - Mac OS): ";
			cin >> h.OS;
			f.write((char*)&h, sizeof(h));
			f.close();
			cout << "Структура была записана и сохранена в бинарный файл..\n\n";
			break;
		}
		case 8: {
			ifstream f("ЧужавкоЛаб20_2.bin", ios::in | ios::binary);
			if (!f) {
				cout << "Ошибка..\n";
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
			cout << "Файл прочитан и закрыт..\n\n";
			break;
		}
		case 9: {
			int n;
			do {
				cout << "Сколько абзацев хотите ввести?: ";
				cin >> n;
			} while (n < 1);
			char text[200];
			char file[] = "D:\\study\\labs ОАиП\\lab20\\lab20\\ЧужавкоЛаб20_3.txt";
			ofstream f(file, ios::out | ios::app);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			cin.ignore();
			for (int i = 0; i < n; i++) {
				cout << "Введите строку " << i + 1 << " до 200 символов\n";
				cin.getline(text, 200);
				f << text << endl;
			}
			f.close();
			cout << "Файл записан и закрыт..\n\n";
			break;
		}
		case 10: {
			char text[200];
			char file[] = "D:\\study\\labs ОАиП\\lab20\\lab20\\ЧужавкоЛаб20_3.txt";
			ifstream f(file, ios::in);
			if (!f) {
				cout << "Ошибка..\n";
				system("pause");
				return 0;
			}
			f.getline(text, 200, '\n');
			while (!f.eof()) {
				cout << text << endl;
				f.getline(text, 200, '\n');
			}
			f.close();
			cout << "Файл прочитан и закрыт.." << endl << endl;
			break;
		}
		case 11: {
			ofstream file("Chuzhavko_Ind.txt", ios::out | ios::trunc);
			if (!file) {
				cout << "Ошибка..";
				system("pause");
				return 0;
			}
			char text[] = "HELLO WORLD";
			file << text;
			file.close();
			cout << "Файл создан и закрыт..." << endl;
			ifstream file2("Chuzhavko_Ind.txt", ios::in);
			if (!file2) {
				cout << "Ошибка..";
				system("pause");
				return 0;
			}
			ofstream file3("Chuzhavko_Ind1.txt", ios::out | ios::trunc);
			if (!file3) {
				cout << "Ошибка..";
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
			cout << "Конец программы..\n\n";
			system("pause");
			return 0;
		}
		default: {
			cout << "Вы ввели неверный пункт..\n\n";
			break;
		}
		}
	} while (p != 0);
	system("pause");
	return 0;
}