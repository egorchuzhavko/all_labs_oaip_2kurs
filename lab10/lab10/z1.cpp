#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double peremennaya = 1.41, * pA = &peremennaya;
	double& pPeremennaya = peremennaya;
	cout << &peremennaya << "	" << *pA << "	" << pPeremennaya << endl;
	cout << "Введите значение переменной: ";
	cin >> peremennaya;
	cout << peremennaya << "	" << *pA << "	" << pPeremennaya << endl;
	peremennaya /= 2;
	*pA /= 2;
	pPeremennaya /= 2;
	cout << peremennaya << "	" << *pA << "	" << pPeremennaya << endl;
	system("pause");
	return 0;
}