#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int m;
	int nomerelementaravnogonol = 0, summa = 0;
	do
	{
		cout << "Введите размерность массива(m>0): ";
		cin >> m;
	} while (m < 0);
	int* a = new int[m];
	if (a == NULL)
	{
		cout << "Недостаточно памяти для создания массива" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < m; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i] == 0)
		{
			nomerelementaravnogonol = i;
		}
	}
	for (int i = nomerelementaravnogonol+1; i < m; i++)
	{
		summa += a[i];
	}
	cout << "Сумма элементов, расположенных после последнего элемента, равного нулю = " << summa;
	delete[] a;
	a = NULL;
	system("pause");
	return 0;
}