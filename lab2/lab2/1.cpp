#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double z1, z2; //�� ����� �����
	double a, b; //�� ����� �������
	cout << "������� �����: ";
	cin >> a;
	cout << "������� ����: ";
	cin >> b;
	z1 = pow((cos(a) - cos(b)), 2) - pow((sin(a) - sin(b)), 2);
	z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
	cout << "��������� z1 = " << z1 << endl;
	cout << "��������� z2 = " << z2 << endl;
	system("pause");
	return 0;
}