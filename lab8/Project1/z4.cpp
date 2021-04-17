#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int n = 10;
	double* a = new double[n] { 3.24, -7.16, 2.18, -0.16, -3.22, 7.14, 2.88, -3.20, -0.99, -4.15 };
	if (a == NULL)
	{
		cout << "Недостаточно памяти для создания массива" << endl;
		system("pause");
		return 0;
	}
	double makselelment = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > makselelment)
		{
			makselelment = a[i];
		}
	}
	cout << "Максимальный элемент = " << makselelment;
	int nomerdoposlednegopolelementa = 0, summa = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			nomerdoposlednegopolelementa = i;
		}
	}
	for (int i = 0; i < nomerdoposlednegopolelementa; i++)
	{
		summa += a[i];
	}
	cout << endl << "Сумма элементов массива до последнего положительного элемента = " << summa << endl;
	int j = 0;
//		if (2.2 <= fabs(a[i]) <= 5.5)

	for (int i = 0; i < n; i++)
	{
		if (fabs(a[i])>=2.2 && fabs(a[i])<=5.5)
		{
			a[j] = a[i];
			j++;
		}
	}

	for (int i = j; i < n; i++)
	{
		a[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ' << endl;
	}
	delete[] a;
	a = NULL;
	system("pause");
	return 0;
}