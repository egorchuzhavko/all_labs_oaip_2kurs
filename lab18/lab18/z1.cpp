#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
struct aeroflot
{
	char punktnaznach[80];
	int nomer;
	char type[80];
	int price;
};
void shellSort(aeroflot*, int);
void insertSort(aeroflot*, int);
bool search(aeroflot*, int, int);
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	do
	{
		cout << "Введите число рейсов(не менее 1): ";
		cin >> n;
	} while (n <= 0);
	aeroflot* polet = new aeroflot[2];
	if (polet == NULL)
	{
		cout << "Программа завершает работу ввиду проблем с памятью.." << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "\nРейс №" << i + 1 << endl;
		cout << "Введите номер рейса: ";
		cin >> polet[i].nomer;
		cout << "Введите место отправки рейса: ";
		cin.ignore();
		cin.getline(polet[i].punktnaznach, 80);
		cout << "Введите тип самолёта: ";
		cin.ignore();
		cin.getline(polet[i].type, 80);
		cout << "Введите цену билета: ";
		cin >> polet[i].price;
	}

	cout << "\nОтсортированные цены билета: " << endl;
	shellSort(polet, n);
	for (int i = 0; i < n ; i++)
	{
		cout << polet[i].price << ' ';
	}
	cout << "\nОтсортированные пункты назначения: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << polet[i].punktnaznach << ' ';
	}
	int reys;
	cout << "\nВведите номер рейса для его поиска: ";
	cin >> reys;
	bool result = search(polet, reys, n);
	if (result == true)
	{
		cout << "Такой рейс есть.." << endl;
	}
	else
	{
		cout << "Такого рейса нет.." << endl;
	}
	system("pause");
	return 0;
}
void shellSort(aeroflot* polet, int n)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				if (polet[k].price > polet[k + i].price)
				{
					aeroflot t = polet[k];
					polet[k] = polet[k + 1];
					polet[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
}
void insertSort(aeroflot* polet, int n)
{
	for (int i = 0; i < n; i++)
	{
		aeroflot t = polet[i];
		for (int j = i - 1; j > -1 && t.punktnaznach < polet[j].punktnaznach; j--)
		{
			polet[j + 1] = polet[j];
			polet[j] = t;
		}
	}
}
bool search(aeroflot* polet, int x, int n)
{
	int p;
	cout << "1) последовательный поиск\n2) бинарный поиск: ";
	cin >> p;
	switch (p)
	{
		case 1:
		{
			for (int i = 0; i < n; i++)
			{
				if (polet[i].nomer == x)
				{
					return true;
				}
			}
			return false;
		}
		case 2:
		{
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - 1 - i; j++)
				{
					if (polet[j].nomer > polet[j + 1].nomer)
					{
						aeroflot t = polet[j];
						polet[j] = polet[j + 1];
						polet[j + 1] = t;
					}
				}
			}
			int low = polet[0].nomer, high = polet[n - 1].nomer, middle = (low + high) / 2;
			while (high >= low)
			{

				if (middle == x)
				{
					return true;
				}
				else
				{
					if (x > middle)
					{
						low = middle + 1;
					}
					else
					{
						high = middle - 1;
					}
					middle = (low + high) / 2;
				}
			}
		}
		return false;
	}
}