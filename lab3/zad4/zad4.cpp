#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
double max1(double, double);
double max2(double, double);
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	double x=0, y=0, z=0, w, maxx1, maxx2;
	while (x==y)
	{
		cout << "Введите x: ";
		cin >> x;
		cout << "Введите y: ";
		cin >> y;
		if (x == y)
		{
			cout << "Вы ввели одинаковые числа!" << endl;
		}
	}
	maxx1 = max1(x, y);
	maxx2 = max2(maxx1, z);
	w = pow(maxx2,2);
	cout << "w = " << w << endl;
	system("pause");
	return 0;
}
double max1(double x, double y)
{
	double c;
	(x * y) > (x + y) ? c = (x * y) : c = (x + y);
	return c;
}
double max2(double maxx1, double z)
{
	double d;
	maxx1 > z ? d = maxx1 : d = z;
	return d;
}