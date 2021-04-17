#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m[100] = { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
	-79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
	-87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
	30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
	-97, -21, -95, 64, 22, -2, 69, -84, -1, -71,
	-25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
	88, -61, 0, -64, -83, 97, 0, 90, 15, 8,
	-54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
	98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
	78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };
	int sum = 0, ii = 0;
	for (int i = 0; i < 100; i++)
	{
		if (*(m + i) > 0)
		{
			sum += *(m + i);
		}
	}
	cout << endl << "—умма элементов массива = " << sum << endl << endl;
	int newmas[5][20];
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 20; j++, ii++)
		{
			*(*(newmas + i) + j) = *(m + ii);
			cout << newmas[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "1: " << &newmas[0][0] << " " << &newmas[0][19] << endl;
	cout << "2: " << &newmas[1][0] << " " << &newmas[1][19] << endl;
	cout << "3: " << &newmas[2][0] << " " << &newmas[2][19] << endl;
	cout << "4: " << &newmas[3][0] << " " << &newmas[3][19] << endl;
	cout << "5: " << &newmas[4][0] << " " << &newmas[4][19] << endl;
	char chmas[4][11][3];
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j <11; j++)
		{
			for (size_t d = 0; d < 3; d++)
			{
				*(*(*(chmas + i) + j) + d)= 65+rand()%26;
				cout << chmas[i][j][d] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 11; j++)
		{
			for (size_t d = 0; d < 3; d++)
			{
				cout << chmas[i][j][0] << ' ';
				break;
			}
			cout << endl;
		}
		cout << endl;
	}
	char predlojenie[100];
	cout << endl << "¬ведите предложение длиной не более 100 символов. " << endl;
	gets_s(predlojenie);
	for (size_t i = 0; i < 100; i++)
	{
		if ((predlojenie[i] == '!') | (predlojenie[i] == '?') | (predlojenie[i] == '.') | (predlojenie[i] == ',') | (predlojenie[i] == ';') | (predlojenie[i] == ':'))
		{
			cout << predlojenie[i] << ' ';
		}
	}
	system("pause");
	return 0;
}