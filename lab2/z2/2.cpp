#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double w;
	double z, y, x;
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	cout << "������� z: ";
	cin >> z;
	w = abs((pow(x, y / x)) - pow(y / x, 1.0 / 3.0)) + (y - x) * ((cos(y) - (z / (y - x))) / (1.0 + pow(y - x, 2.0)));
	cout << "����� ���������� w: " << w << endl;
	system("pause");
	return 0;
}