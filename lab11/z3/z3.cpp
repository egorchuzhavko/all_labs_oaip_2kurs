#include<iostream>
using namespace std;
unsigned long long int factorial(int, int);
double summa(double, int, unsigned long long int, double);
int main()
{
	setlocale(LC_ALL, "Russian");
	double sum = 0.0, xn = 0.5, xk = 2, h = 0.15;
	int k = 1;
	cout << "Ñóììà:" << endl;
	for (double x = xn; x <= xk; x += h, k++)
	{
		unsigned long long int f = factorial(1, k);
		sum += summa(x, k, f, sum);
		cout << sum << endl;
	}
	system("pause");
	return 0;
}
unsigned long long int factorial(int f, int k)
{
	for (int i = 1; i <= (2 * k); i++)
	{
		f = f * i;
	}
	return f;
}
double summa(double x, int k, unsigned long long int f, double sum)
{
	sum = (pow(-1.5, k) * pow(x, k)) / f;
	return sum;
}