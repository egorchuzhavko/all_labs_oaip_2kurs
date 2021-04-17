#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int p = -1;
	while (p != 0) {
		cout << "Выберите пункт меню:\n1) Ввод текста\n2) Вывод текста\n3) Создание массива\n4) Вывод элементов массива\n5) Ввод данных в структуру\n6) Вывод структуры\n7) Ввод структуры в бинарный файл\n8) Вывод структуры из бинарного файла\n0) Выход\nВвод: ";
		cin >> p;
		switch (p) {
		case 1: {
			FILE* f = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko.txt", "wt");
			if (f == NULL) {
				cout << "Ошибка открытия файла для записи." << endl;
				system("pause");
				return 0;
			}
			cout << "Введите текст: ";
			char s[150];
			cin.ignore();
			cin.getline(s, 150);
			int i = 0;
			while (s[i] != NULL) {
				fputc(s[i++], f);
			}
			cout << "Текст записан в файл..\n" << endl;
			fclose(f);
			break;
		}
		case 2: {
			FILE* f1 = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko.txt", "rt");
			if (f1 == NULL) {
				cout << "Ошибка открытия файла для чтения." << endl;
				system("pause");
				return 0;
			}
			char c = fgetc(f1);
			while (!feof(f1)) {
				cout << c;
				c = fgetc(f1);
			}
			cout << endl << endl;
			fclose(f1);
			break;
		}
		case 3: {
			int n = -1;
			cout << endl;
			while (n <= 0) {
				cout << "Введите размер массива (>0): ";
				cin >> n;
			}
			double* mas = new double[n];
			if (mas == NULL)
			{
				cout << "Не была выделена память для массива.." << endl;
				system("pause");
				return 0;
			}
			for (int i = 0; i < n; i++) {
				cout << "Введите элемент массива[" << i + 1 << "]: ";
				cin >> mas[i];
			}
			FILE* ff = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko0.txt", "wt");
			if (ff == NULL) {
				cout << "Ошибка открытия файла для записи." << endl;
				system("pause");
				return 0;
			}
			for (int i = 0; i < n; i++) {
				fprintf_s(ff, "%lf}", mas[i]);
			}
			cout << "Запись завершена..\n";
			fclose(ff);
			break;
		}
		case 4: {
			FILE* ff1 = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko0.txt", "rt");
			if (ff1 == NULL) {
				cout << "Ошибка открытия файла для записи." << endl;
				system("pause");
				return 0;
			}
			double x;
			while (!feof(ff1)) {
				fscanf_s(ff1, "%lf}", &x);
				cout << x << ' ';
			}
			cout << endl << endl;
			fclose(ff1);
			break;
		}
		case 5: {
			FILE* ff2 = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko1.txt", "at");
			if (ff2 == NULL) {
				cout << "Ошибка открытия файла для записи." << endl;
				system("pause");
				return 0;
			}
			laptop yourlaptop;
			cout << "Введите название ноутбука: ";
			cin.ignore();
			cin.getline(yourlaptop.name, 80);
			fprintf_s(ff2, "%s\n", yourlaptop.name);
			cout << "Введите год ноутбука: ";
			cin >> yourlaptop.year;
			fprintf_s(ff2, "%d\n", yourlaptop.year);
			cout << "Введите диагональ ноутбука: ";
			cin >> yourlaptop.diagonal;
			fprintf_s(ff2, "%lf\n", yourlaptop.diagonal);
			cout << "Введите 1, если есть видеокарта, иначе 0: ";
			cin >> yourlaptop.grafcard;
			fprintf_s(ff2, "%d\n", yourlaptop.grafcard);
			cout << "Введите первую букву ОС (W - windows, L - Linux, M - Mac OS): ";
			cin >> yourlaptop.OS;
			fprintf_s(ff2, "%c\n", yourlaptop.OS);
			fclose(ff2);
			break;
		}
		case 6: {
			FILE* ff3 = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko1.txt", "rt");
			if (ff3 == NULL) {
				cout << "Ошибка открытия файла для записи." << endl;
				system("pause");
				return 0;
			}
			char c = fgetc(ff3);
			while (!feof(ff3)) {
				cout << c;
				c = fgetc(ff3);
			}
			cout << endl;
			fclose(ff3);
			break;
		}
		case 7: {
			laptop h;
			FILE* f3;
			if (!(f3 = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko2.bin", "ab")))
			{
				cout << "Ошибка открытия файла для записи.";
				system("pause");
				return 0;
			}
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
			fwrite(&h, sizeof(h), 1, f3);
			fclose(f3);
			break;
		}
		case 8: {
			FILE* f4;
			 laptop h0;
			if (!(f4 = fopen("D:\\study\\labs ОАиП\\lab19\\EgorChuzhavko2.bin", "rb")))
			{
				cout << "Ошибка открытия файла для записи.";
				system("pause");
				return 0;
			}
			fread(&h0, sizeof(h0), 1, f4);
			while (!feof(f4))
			{
				cout << h0.name << " ; " << h0.year << " ; " << h0.diagonal << " ; " << h0.OS << " ; ";
				fread(&h0, sizeof(h0), 1, f4);
			}
			cout << endl;
			fclose(f4);
			break;
		}
		}
	}
	system("pause");
	return 0;
}