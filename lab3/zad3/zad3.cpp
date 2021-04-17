#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	long double y, b, x, z;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите z: ";
	cin >> z;
	if (z < 0)
	{
		cout << "Используется ветвь при z<0" << endl;
		x = pow(z, b) + abs(b / 2);
		y = (1 / cos(x)) + log(abs(tan(x / 2)));
		cout << "y = " << y << endl;
	}
	else
		if (z > 0)
		{
			cout << "Используется ветвь при z>0" << endl;
			x = sqrt(z);
			y = (1 / cos(x)) + log(abs(tan(x / 2)));
			cout << "y = " << y << endl;
		}
		else
		{
			cout << "Вы ввели 0, ошибка!" << endl;
		}
	system("pause");
	return 0;
}