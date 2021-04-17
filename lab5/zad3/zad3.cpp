#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b, h, n, x;
    cout << "¬ведите a: ";
    cin >> a;
    cout << "¬ведите b : ";
    cin >> b;
    cout << "¬ведите h: ";
    cin >> h;
    cout << "¬ведите n : ";
    cin >> n;
    long double s0 = 0, y = 0;
    long double s = 0;
    const double pi = 3.14;
    cout << "x |\t\t S(x) | \tY(x)" << endl;
    for (x = a; x <= b; x = x + h)
    {
        for (int i = 0; i < n + 1; i += 2)
        {
            for (double k = 1; k < n; k++)
            {
                s0 = (pow(-1,k+1.0))*((cos(k*x))/(pow(k,2.0)));
            }
            s = s + s0;
        }
        y = ((1.0+pow(x,2.0))/(2.0))*(pi/2+atan(x))-(x/2);
        cout << x << " |\t\t" << s << " |\t" << y << endl;
    }

    system("pause");
    return 0;
}
