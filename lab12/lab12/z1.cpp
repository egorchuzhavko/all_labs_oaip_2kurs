#include<iostream>
#include "Chuzhavko.h"
void randValue(long double** arr, int rows, int cols);
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int rows = 0;
    int cols = 0;
    do
    {
        cout << "������� ���������� �����: ";
        cin >> rows;
        cout << "������� ���������� ��������: ";
        cin >> cols;
    } while (rows <= 0 || cols <= 0);
    long double** arr = new long double* [rows];
    if (arr == NULL)
    {
        cout << "��� ������.";
        return 0;
    }
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new long double[cols];
    }
    randValue(arr, rows, cols);
    cout << "����� ��������� ������� ���������, �� ����������� � ������ �������: " << sumDiag(arr, rows, cols) << endl;
    cout << "�����. �����: " << srednArifm(arr, rows, cols) << endl;
    cout << "������������ ���� ���������, �� �������� � ������� ��������� � ������� ������ �����: " << multiply(arr, rows, cols) << endl;
    cout << "������������ �������: " << zamen(arr, rows, cols) << endl;
    cout << "���������� ����� ������� ������ ������ �����: " << count(arr, rows, cols) << endl;
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = NULL;
    return 0;
}
void randValue(long double** arr, int rows, int cols)
{
    srand(time(NULL));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = (10 + rand() % (50 - 10 + 1)) / 7.7;
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
