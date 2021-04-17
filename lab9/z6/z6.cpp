#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int a = 10;
	const int b = 10;
	int arr[a][b] = { { 16, 78, 0, 6, -29, 19, -52, 65, -88, 51},
					{ -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
					{ -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
					{ 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
					{ -99, -21, -95, 64, 22, -2, 69, -84, -1, -71},
					{ -25, 47, 72, 43, 15, -44, 44, 61, 4, 74},
					{ 88, -61, 0, -64, -83, 97, 0, 90, 15, 8},
					{ -54, 99, 73, 35, -67, -87, 85, -93, -70, 10},
					{ 98, 58, -10, -29, 95, 62, 77, 89, 36, -32},
					{ 78, 60, -79, -18, 30, -13, -34, -92, 1, -38} };
	bool flag = false;
	for (int i = 0; i < a; i++)
	{
		flag = false;
		int sum = 0;
		for (int j = 0; j < b; j++)
		{
			if (arr[i][j] < 0)
			{
				flag = true;
				break;
			}
		}
		for (int j = 0; j < b; j++)
		{
			if (flag == false)
			{
				sum += arr[i][j];
			}
		}
		cout << sum << " ";
	}
	int minsumma = 100000, s1, s2;
	for (int i = 1; i < a - 1; i++)
	{
		int s1 = 0;
		int s2 = 1000;
		for (int j = 0; j < b - i; j++)
		{
			s1 += fabs(arr[j + i][j]);
			s2 += fabs(arr[j][j + i]);
		}
		if (s1 < minsumma || s2 < minsumma)
		{
			if (s1 < s2) 
			{
				minsumma = s1;
			}
			else
			{
				minsumma = s2;
			}
		}
	}
	cout << endl << "минимум среди сумм модулей элементов диагоналей, параллельных побочной диагонали матрицы = " << minsumma << endl;
	system("pause");
	return 0;
}