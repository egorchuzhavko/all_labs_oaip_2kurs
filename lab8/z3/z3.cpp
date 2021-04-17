#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[20];
    int n;
    cout << "¬ведите размерность массива: ";
    cin >> n;
    int i;
    for (i = 0; i < n; ++i)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    int i2;
    for (i = 0; i < n; ++i)
    {
        if (i + 1 < n)
        {
            if (a[i + 1] != a[i])
            {
                ++n;
                for (i2 = n - 1; i2 > i; --i2) a[i2] = a[i2 - 1];
                ++i;
            }
        }
    }
    ++n;
    a[n - 1] = a[n - 2];
    for (i = 0; i < n; ++i)
    {
        cout << ' ' << i << ": " << a[i] << endl;
    }
    system("pause");
    return 0;
}