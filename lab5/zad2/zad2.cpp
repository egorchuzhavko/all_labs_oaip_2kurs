#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int N = 1000;
	for (int i = 100; i < N; i++)
	{
		if (((i % 100) / 10) == i % 10)
			cout << i<<endl;
	}
	system("pause");
	return 0;
}