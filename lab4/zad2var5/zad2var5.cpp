#include<iostream>;
#include<cmath>;
#include<windows.h>;
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a;
    cout << "������� ����� a: ";
    cin >> a;
    if ((a < 0)&(a % 13 == 0))
    {
        cout << "����� " << a << " ��������� � ������ A" << endl;
    }
    else
    {
        if ((a>10)|((a>0)&(a<3)))
        {
            cout << "����� " << a << " ��������� � ������ B" << endl;
        }
        else
        {
            if ((a==0)|(a>-120))
            {
                cout << "����� " << a << " ��������� � ������ C" << endl;
            }
            else
            {
                cout << "����� " << a << " ��������� � ������ D" << endl;
            }
        }
    }
 
    system("pause");
    return 0;
}