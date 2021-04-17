#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double z1, z2; //их нужно найти
	double a, b; //их нужно вводить
	cout << "введите альфа: ";
	cin >> a;
	cout << "¬ведите бета: ";
	cin >> b;
	z1 = pow((cos(a) - cos(b)), 2) - pow((sin(a) - sin(b)), 2);
	z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
	cout << "результат z1 = " << z1 << endl;
	cout << "–езультат z2 = " << z2 << endl;
	system("pause");
	return 0;
}