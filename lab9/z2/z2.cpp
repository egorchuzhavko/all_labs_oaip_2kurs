#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    do
    {
        cout << "������������� �������� �����������, ������� ���������� �����: ";
        cin >> a;
        cout << "������������� �������� �����������, ������� ���������� ��������: ";
        cin >> b;
    } while ((a <= 0) || (b <= 0));
    double** arr = new double* [a];
    if (arr == NULL)
    {
        cout << "������������ ������.";
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        arr[i] = new double[b];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "������� arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "Print array:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "    |    ";
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