#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double r, x, y, f;
	int d;
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	cout << "���� ������ ���� ������� f(x):\n1-���������� f=sh(x);\n2-���������� f=x^2;\n3-���������� f=e^x;\n�������� ���� ����:\n";
	cin >> d;
	switch (d)
	{
	case 1:
	{
		f = sinh(x);
		cout << "����� ����: " << d << endl;
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		cout << "����� ����: " << endl;
		break;
	}
	case 3:
	{
		f = exp(x);
		cout << "����� ����: " << endl;
		break;
	}
	default:
	{
		cout << "������ ������ ���!" << endl;
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
	cout << "��������� ����������: " << r << endl;
	system("pause");
	return 0;
}