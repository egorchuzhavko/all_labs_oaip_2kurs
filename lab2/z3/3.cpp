#include <iostream>
#include <Windows.h>
using namespace std;
double avg(double, double, double);
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double total, a, b, c;
    cout << "������� a: ";
    cin >> a;
    cout << "������� b: ";
    cin >> b;
    cout << "������� c: ";
    cin >> c;
    total = avg(a, b, c);
    cout << "������� ��������� ������� ����� = " << total << endl;
    system("pause");
    return 0;
}
double avg(double d, double e, double f)
{
    double product = (d * d + e * e + f * f) / 3.0;
    return product;
}