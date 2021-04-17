#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ch = 0;
	bool a = true;
	while (a == false)
	{
		cout << "Выберите пункт меню:\n1) задание 1\n2) задание 2\n3) задание 3\n4) задание 4\n5) задание 5\n6) выйти из программы\n" << endl;
		switch (ch)
		{
		case 1:
		{
			const int j = 11;
			int mas[j] = { 0,1,23,-34,0,1,24,7,-8,0,0 };
			for (int i = 0; i < j; i++)
			{
				cout << mas[i] << ',';
			}
			cout << endl;
			for (int i = 0; i < j; i++)
			{
				cout << mas[i / 2] << ',';
			}
			cout << endl;
			break;
		}
		case 2:
		{
			const int j = 20;
			int mas[j];
			for (int i = 0; i < j; i++)
			{
				cin >> mas[i];
			}
			cout << endl;
			for (int i = 0; i < j; i++)
			{
				cout << mas[i] << ' ';
			}
			for (int i = 0; i < j; i++)
			{
				if ((mas[i] % 5 != 0) & (i < 17))
				{
					cout << mas[i] << ' ';
				}
			}
			cout << endl;
			break;
		}
		case 3:
		{
			int j;
			do {
				cout << "Введите размерность массива: ";
				cin >> j;
			} while (j < 0);
			double* mas = new double[j];
			for (int i = 0; i < j; i++)
			{
				cin >> mas[i];
			}
			for (int i = 0; i < j; i++)
			{
				cout << "massiv[" << i << "] = " << mas[i] << endl;
			}
			cout << endl << endl;
			for (int i = 0; i < j; i++)
			{
				if ((2 < i < 9) & (i % 2 != 0))
				{
					cout << "massiv[" << i << "] = " << mas[i] << endl;
				}
			}
			break;
		}
		case 4:
		{
			const int j = 1092;
			int mas[j];
			for (int i = 0; i < j; i++)
			{
				mas[i] = -29 + rand() % 10;
			}
			for (int i = 0; i < j; i++)
			{
				cout << mas[i] << ' ';
			}
			cout << endl;
			for (int i = 0; i < j; i++)
			{
				if ((i % 8 == 0) & (i < 1000))
				{
					cout << mas[i] << ' ';
				}
			}
			break;
		}
		case 5:
		{
			int j;
			double proizvedenie = 1;
			do {
				cout << "Введите размерность массива: ";
				cin >> j;
			} while (j < 0);
			double* mas = new double[j];
			for (int i = 0; i < j; i++)
			{
				cin >> mas[i];
			}
			for (int i = 0; i < j; i++)
			{
				cout << "massiv[" << i << "] = " << mas[i] << endl;
			}
			for (int i = 0; i < j; i++)
			{
				if (mas[i] > 0)
				{
					proizvedenie *= mas[i];
				}
			}
			cout << endl << "Произведение = " << proizvedenie << endl;
			break;
		}
		case 6:
		{
			a = false;
			break;
		}
		default:
		{
			cout << "Вы ввели не то значение" << endl;
			break;
		}
		}
	}
	system("pause");
	return 0;
}