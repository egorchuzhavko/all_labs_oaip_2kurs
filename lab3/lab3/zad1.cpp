#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double r, x, y, f;
	int d;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню выбора вида функции f(x):\n1-рассчитать f=sh(x);\n2-рассчитать f=x^2;\n3-рассчитать f=e^x;\nВыберите пунк меню:\n";
	cin >> d;
	switch (d)
	{
	case 1:
	{
		f = sinh(x);
		cout << "Пункт меню: " << d << endl;
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		cout << "Пункт меню: " << endl;
		break;
	}
	case 3:
	{
		f = exp(x);
		cout << "Пункт меню: " << endl;
		break;
	}
	default:
	{
		cout << "Такого пункта нет!" << endl;
		system("pause");
		return 0;
		break;
	}
	}
	cout << "f(x)= " << f << endl;
	if (x > y)
	{
		r = ((pow((sqrt(f - y)), 1.0 / 3.0)) + tan(x));
	}
	else
	{
		if (y < x)
		{
			r = ((pow((y - f), 3) + cos(x)));
		}
		else
		{
			r = ((pow((f + y), 2) + (pow(x, 3))));
		}
	}
	cout << "Результат вычисления: " << r << endl;
	system("pause");
	return 0;
}