#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int j = 1092;
	int mas[j];
	for (int i = 0; i < j; i++)
	{
		mas[i] = -29 + rand() % 10;
	}
	for (int i = 0; i < j; i++)
	{
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 1000; i++)
	{
		if ((i % 8 == 0))
		{
			cout << mas[i] << endl;
		}
	}
	system("pause");
	return 0;
}