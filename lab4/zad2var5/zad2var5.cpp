#include<iostream>;
#include<cmath>;
#include<windows.h>;
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a;
    cout << "Введите число a: ";
    cin >> a;
    if ((a < 0)&(a % 13 == 0))
    {
        cout << "Число " << a << " относится к группе A" << endl;
    }
    else
    {
        if ((a>10)|((a>0)&(a<3)))
        {
            cout << "Число " << a << " относится к группе B" << endl;
        }
        else
        {
            if ((a==0)|(a>-120))
            {
                cout << "Число " << a << " относится к группе C" << endl;
            }
            else
            {
                cout << "Число " << a << " относится к группе D" << endl;
            }
        }
    }
 
    system("pause");
    return 0;
}