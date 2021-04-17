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
		cout << "Введите размерность массивов A и B: ";
		cin >> m;
	} while (m < 0);
	int* a = new int[m];
	int* b = new int[m];
	if (a == NULL || b==NULL)
	{
		cout << "Недостаточно памяти для создания массива" << endl;
		system("pause");
		return 0;
	}
	cout << "Сейчас вы будете заполнять массив А" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
	cout << "Сейчас вы будете заполнять массив B" << endl;
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
		cout << "Массив А имеет меньше отрицательных элементов" << endl << "Массив А:" << endl;
		for (int i = 0; i < m; i++)
		{
			cout << a[i]<<' ';
		}
		cout << endl << "Массив B:" << endl;
		for (int i = 0; i < m; i++)
		{
			cout << b[i] << ' ';
		}
	}
	else
	{
		cout << "Массив B имеет меньше отрицательных элементов" << endl << "Массив B:" << endl;
		for (int i = 0; i < m; i++)
		{
			cout << b[i] << ' ';
		}
		cout << endl << "Массив А: " << endl;
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