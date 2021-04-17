#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	long double m1, m2, t2;
	cout << "Введите m1 ";
	cin >> m1;
	cout << "Введите m2 ";
	cin >> m2;
	if ((0.1 < abs(m1 - 2 * m2))&(abs(m1 - 2 * m2) <= 1))
	{
		cout << "Используется ветвь при 0.1<|m1-2m2|<=1" << endl;
		t2 = (m1 - 2 * m2) / (pow(m1, 2) + 2 * pow(m2, 2));
		cout << "t2 = " << t2 << endl;
	}
	else
		if (abs(m1 - 2 * m2) > 1)
		{
			cout << "Используется ветвь при |m1-2m2|>1" << endl;
			t2 = 2 * (m1 - m2) * exp((m1 / m2) - 1);
			cout << "t2 = " << t2 << endl;
		}
		else
		{
			cout << "Такого решения нет" << endl;
		}
	system("pause");
	return 0;
}