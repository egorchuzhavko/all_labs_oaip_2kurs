#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    do
    {
        cout << "Отрицательные значения недопустимы, введите количество строк: ";
        cin >> a;
        cout << "Отрицательные значения недопустимы, введите количество столбцов: ";
        cin >> b;
    } while ((a <= 0) || (b <= 0));
    double** arr = new double* [a];
    if (arr == NULL)
    {
        cout << "нет памяти.";
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        arr[i] = new double[b];
    }
    cout << "Print massiv:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = (rand() % 20) / 7.7;
            cout << arr[i][j] << "    |    ";
        }
        cout << endl;
    }
    cout << "New vision of array::\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i % 2 == 0 || j % 2 == 0)
            {
                cout << arr[i][j] << "   ";
            }
        }
    }
    cout << endl;
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
