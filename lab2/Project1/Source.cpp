#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, z2, pi = 3.14;

	cin >> a;

	z2 = cos(5 / 4 * pi + 3 / 2 * a) / sin(5 / 4 * pi + 3 / 2 * a);
	cout << z2;
	
	system("pause");
	return 0;
}