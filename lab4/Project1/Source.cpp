#include <iostream>//������!!!!!!!!!!!!!!!!!!!!!!!
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int f, i;
	double a, x, f1, e;
	cout << "������� x:";
	cin >> x;
	cout << endl << "������� i:";
	cin >> i;
	cout << "�������� ��� ����� �������� � ��� F" << endl << "1.F=e^x ��� �������� 2.F=x^2" << endl << "�������� ����� 1 ��� 2:";
	cin >> f;
	switch (f)
	{
	case 1:
	{
		f1 = exp(x);
		cout << "�� ������� 2.F=e^x" << endl;
		break;
	}
	case 2:
	{
		f1 = pow(x, 2);
		cout << "�� ������� 2.F=x^2" << endl;
		break;
	default:
		cout << "������!!!������� ������������ �����" << endl;
	}
	}
	if ((i % 2 != 0) & (x > 0))
		e = (i * sqrt(f1));
	else if ((i % 2 == 0) & (x < 0))
		e = i / (2 * sqrt(abs(f1)));
	else
		e = sqrt(abs(i * (f1)));
	cout << "e=" << e;
	return (0);
	system("pause");
}

