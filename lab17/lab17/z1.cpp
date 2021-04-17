#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	struct kinolenta
	{
		char nazvanie[80];
		char name[80], surname[80];
		int year : 11; //11111100101
		int price;
		int pribyl;
	};
	enum strana
	{
		USA,
		France,
		Russia,
		Canada,
		Germany,
	};
	const int n = 5;
	kinolenta* kino = new kinolenta[n];
	int m;
	for (int i = 0; i < n; i++)
	{
		cout << "¬ведите название фильма: ";
		cin.ignore();
		cin.getline(kino[i].nazvanie, 80);
		cout << "¬ведите им€ режиссЄра: ";
		cin.ignore();
		cin.getline(kino[i].name, 80);
		cout << "¬ведите фамилию режиссЄра: ";
		cin.ignore();
		cin.getline(kino[i].surname, 80);
		cout << "¬ведите год выхода фильма: ";
		cin >> m;
		kino[i].year = m;
		cout << "¬ведите стоимость съЄмок фильма: ";
		cin >> kino[i].price;
		cout << "¬ведите прибыль фильма: ";
		cin >> kino[i].pribyl;
	}

	struct vnalichii
	{
		int nomenklnomer = 10;
		char name[80] = { "table" };
		double price = 10.5;
		enum edinici_izmereniya
		{
			shtuk_30,
			odin_kg,
			upakovok_10
		};
	};
	struct naslkade
	{
		int nsklada = 3;
		int nstelaja = 1;
		enum konteyner
		{
			beliy,
			siniy,
			krasniy
		};
	};
	struct pod_zakaz
	{
		int nsklada = 1;
		char surname[80] = { "Bratishkin" };
		char date[11] = { "11.12.2012" };
	};
	pod_zakaz* podzakaz = new pod_zakaz[5];
	if (podzakaz == NULL)
	{
		cout << "Ќет пам€ти, конец программы.." << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "¬ведите номер склада дл€ заказа: ";
		cin >> podzakaz->nsklada;
		cout << "¬ведите фамилию на кого оформл€ть заказ: ";
		cin.ignore();
		cin.getline(podzakaz->surname, 80);
		cout << "¬ведите дату дл€ заказа(например: 11.12.2012): ";
		cin.ignore();
		cin.getline(podzakaz->date, 80);
	}

	struct smth
	{
		char color[16];
		int length : 5;
		char type[3];
	};
	smth smthnk[10];
	int x;
	for (int i = 0; i < 10; i++)
	{
		cout << "¬ведите цвет: ";
		cin.ignore();
		cin.getline(smthnk[i].color, 16);
		cout << "¬ведите длину: ";
		cin >> x;
		smthnk[i].length = x;
		cout << "type: ";
		cin.ignore();
		cin.getline(smthnk[i].type, 3);
	}
	system("pause");
	return 0;
}