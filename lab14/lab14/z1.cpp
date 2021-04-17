#include<iostream>
#include<cmath>
using namespace std;
long double rekursia (int, int);
int main()
{
	setlocale(LC_ALL, "ru");
	int n, chislo = 1;
	cout << "¬ведите число n: ";
	cin >> n;
	cout << "—умма выражени€ = " << rekursia(n, chislo) << endl;
	system("pause");
	return 0;
}
long double rekursia (int n, int chislo)
{
	if (n < 0)
	{
		n = -n;
		cout << "¬ведЄнное отрицательное значение стало положительным (n = -n)" << endl;
		return sqrt(pow(chislo, 3.0) + rekursia(n - 1, chislo + 1.0));
	}
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return sqrt(pow(chislo, 3.0) + rekursia(n - 1, chislo + 1.0));
	}
}