#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int j = 11;
	int mas[j] = { 0,1,23,-34,0,1,24,7,-8,0,0 };
	for (int i = 0; i < j; i++)
	{
		cout << mas[i] << ',';
	}
	cout << endl;
	for (int i = 0; i < j; i++)
	{
		cout << mas[i / 2] << ',';
	}
	cout << endl;
	system("pause");
	return 0;
}