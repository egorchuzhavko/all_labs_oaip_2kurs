#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char* s = new char[50];
	cout << "Введите свою фамилию Имя Отчество: ";
	cin.getline(s, 50);
	int age;
	double height;
	cout << "Введите ваш возраст (полных лет): ";
	cin >> age;
	cout << "Введите ваш рост (в метрах): ";
	cin >> height;

	cout << "\n\thello, " << s << "!\n\tПривеиствуем вас в MS VS2019. \nВаш возраст " << age << " лет.\tВаш рост " << height << "метров.\n\tПока!" << endl;
	
	system("pause");
	return 0;
}