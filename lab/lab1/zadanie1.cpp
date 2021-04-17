#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    double x,y;
	double result;

	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;

	result = sqrt(x - y) / (3 * pow(x, 2));
	cout << "–езультат решени€: " << result << endl;

	system("pause");
	return 0;

}