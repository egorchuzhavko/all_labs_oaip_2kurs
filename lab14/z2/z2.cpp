#include<iostream>
int NOD(int, int);
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int m, n;
	cout << "������� m: ";
	cin >> m;
	cout << "������� n: ";
	cin >> n;
	cout << "��� ����� " << m << " � " << n << " = " << NOD(n, m) << endl;
	system("pause");
	return 0;
}
int NOD(int n, int m)
{
	if (n % m == 0)
	{
		return m;
	}
	else
	{
		return NOD(m % n, n);
	}
}