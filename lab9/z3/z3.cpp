#include<iostream>
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
    int** arr = new int* [a];
    if (arr == NULL)
    {
        cout << "Недостаточно памяти.";
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        arr[i] = new int[b];
    }
    cout << "Show massiv:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << "    ;    ";
        }
        cout << endl;
    }
    cout << "Show reverse massiv:\n";
    for (int i = a - 1; i >= 0; i--)
    {
        for (int j = b - 1; j >= 0; j--)
        {
            cout << arr[i][j] << "    ;    ";
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