#include<iostream>
using namespace std;
bool posledovatelnost(int*, bool);
int main()
{
	setlocale(LC_ALL, "Russian");
	int mas[13];
	cout << "Введите элементы массива" << endl;
	for (size_t i = 0; i < 13; i++)
	{
		cout << "mas[" << i+1 << "]=";
		cin >> mas[i];
	}
	bool result=false;
	result = posledovatelnost(mas, result);
	if (result == true)
	{
		cout << "Массив не сортирован по возрастанию" << endl;
	}
	else
	{
		cout << "Массив сортирован по возрастанию" << endl;
	}
	system("pause");
	return 0;
}
bool posledovatelnost(int* mas, bool result)
{
	int kolvo = 0;
	for (size_t i = 0; i < 12; i++)
	{
		if ((mas[i] < mas[i + 1]))
		{
			kolvo += 1;
		}
	}
	return (kolvo + 1 == 13 ? false : true);
}