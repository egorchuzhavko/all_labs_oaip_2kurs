#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0;
    do
    {
        cout << "������������� �������� �����������, ������� ���������� �����: ";
        cin >> a;
        cout << "������������� �������� �����������, ������� ���������� ��������: ";
        cin >> b;
    } while ((a <= 0) || (b <= 0));
    char** arr = new char* [a];
    if (arr == NULL)
    {
        cout << "������������ ������.";
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        arr[i] = new char[b];
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "������� arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < a; i++)
    {
        delete[] arr[i];
        arr[i] = NULL;
    }
    delete[] arr;
    arr = NULL;
    system("pause");
    return 0;
}