#include <iostream>
#include <Windows.h>
using namespace std;
double avg(double, double, double);
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double total, a, b, c;
    cout << "¬ведите a: ";
    cin >> a;
    cout << "¬ведите b: ";
    cin >> b;
    cout << "¬ведите c: ";
    cin >> c;
    total = avg(a, b, c);
    cout << "частное квадратов введЄных чисел = " << total << endl;
    system("pause");
    return 0;
}
double avg(double d, double e, double f)
{
    double product = (d * d + e * e + f * f) / 3.0;
    return product;
}