#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int a = 3;
	const int b = 6;
	double x, c, result;

	cout << "������� c: ";
	cin >> c;
	cout << "������� x: ";
	cin >> x;

	result = pow(x,2) - a * x + b - c;
	cout << "��������� �������: " << result << endl;

	system("pause");
	return 0;	

}