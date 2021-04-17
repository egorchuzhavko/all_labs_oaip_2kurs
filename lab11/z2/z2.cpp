#include<iostream>
using namespace std;
int sum(int*, const int);
int proizvedenie(int*, const int);
int kolvo(int*, const int, int);
int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int x;
	cout << "Введите х: ";
	cin >> x;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i + 1 << "]=";
		cin >> mas[i];
	}
	cout << "Произведение=" << proizvedenie(mas, n) << ' ' << "Cумма=" << sum(mas, n) << ' ' << "Колво элементов > x по индексу=" << kolvo(mas, n, x) << endl;
	system("pause");
	return 0;
}
int sum(int* mas, const int n)
{
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (mas[i] >= 0)
		{
			sum += mas[i];
		}
	}
	return sum;
}
int proizvedenie(int* mas, const int n)
{
	int proizvedenie = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (mas[i] >= 0)
		{
			proizvedenie *= mas[i];
		}
	}
	return proizvedenie;
}
int kolvo(int* mas, const int n, int x)
{
	int kolvo = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (i > x)
		{
			kolvo++;
		}
	}
	return kolvo;
}