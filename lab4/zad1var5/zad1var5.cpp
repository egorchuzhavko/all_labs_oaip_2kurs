#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int i, x;
	double f, e;
	cout << "������� x: ";
	cin >> x;
	cout << "������� i: ";
	cin >> i;
	int vibor;
	cout << "�������� ������� �������:\n1)f(x)=e(x)\n2)f(x)=x^2\n�����: ";
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		f = exp(x);
		break;
	case 2:
		f = pow(x, 2);
		break;
	default:
		cout << "�� ����� �� ���������� ��������" << endl;
		system("pause");
		return 0;
		break;
	}
	if ((i % 2 != 0) & (x > 0))
	{
		e = i * sqrt(f);
	}
	else
		if ((i % 2 == 0) & (x < 0))
		{
			e = i / 2 * sqrt(abs(f));
		}
		else
		{
			e = sqrt(abs(i*f));
		}
	cout << "x = " << x << "		" << "i = " << i << "		" << "f(x) = " << f << "		" << "e = " << e << endl;
	system("pause");
	return 0;
}