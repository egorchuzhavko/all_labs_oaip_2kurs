#include<iostream>
#include<Windows.h>
using namespace std;
struct laptop
{
	int year; //год выпуска модели ноутбука
	double diagonal; //диагональ монитора
	bool grafcard;//есть ли дискретная видеокарта
	char OS; //какая операционная система стоит на ноутбуке
	char name[80]; //массив для хранения названия ноутбука
	int memory[10]; //массив для хранения количества памяти в твердотельных накопителях
};
struct note
{
	char name[80], surname[80];
	int phonenumber;
	int birthday[3];
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n, m, x, kolvo = 0;
	do
	{
		cout << "Сколько у вас ноутбуков? ";
		cin >> n;
	} while (n <= 0);
	laptop* notebook = new laptop[n];
	laptop** ukazatel = &notebook;
	if (notebook == NULL)
	{
		cout << "Массив не смог создаться из за проблем с памятью\n";
		system("pause");
		return 0;
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << "Введите название/модель вашего ноутбука: ";
		cin.ignore();
		cin.getline(ukazatel[i]->name, 80);
		cout << "Год выпуска вашего ноутбука: ";
		cin >> ukazatel[i]->year;
		cout << "Введите диагональ монитора вашего ноутбука: ";
		cin >> ukazatel[i]->diagonal;
		cout << "Есть ли у вас дискретная видеокарта? (Если есть - введите 1, иначе - 0) ";
		cin >> ukazatel[i]->grafcard;
		cout << "Введите вашу операционную систему (Если Mac - M, если windows - W, если Linux - L): ";
		cin >> ukazatel[i]->OS;
		int n;
		do
		{
			cout << "Сколько у вас твердотельных накопителей для хранения памяти? (Не больше 10) ";
			cin >> m;
		} while (m > 10);
		for (size_t j = 0; j < m; j++)
		{
			cout << "Введите количество памяти в " << j + 1 << " диске: ";
			cin >> ukazatel[i]->memory[j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << "\n\nНоутбук " << i + 1 << " :" << endl;
		cout << ukazatel[i]->name << endl << "Год выпуска: " << ukazatel[i]->year << endl <<
			"Диагональ монитора: " << ukazatel[i]->diagonal << endl;
		if (ukazatel[i]->grafcard == 1)
		{
			cout << "Есть дискретная видеокарта" << endl;
		}
		else
		{
			cout << "Нет дискретной видеокарты" << endl;
		}
		if (ukazatel[i]->OS == 'W')
		{
			cout << "Операционная система: Windows" << endl;
		}
		if (ukazatel[i]->OS == 'M')
		{
			cout << "Операционная система: Mac OS" << endl;
		}
		if (ukazatel[i]->OS == 'L')
		{
			cout << "Операционная система: Linux" << endl;
		}
		else
		{
			cout << "Операционная система: Неизвестно" << endl;
		}
		cout << "Всего " << m << " накопителей памяти: " << endl;
		for (size_t j = 0; j < m; j++)
		{
			cout << "Введите размерность" << j + 1 << " диска: ";
			cout << ukazatel[i]->memory[j] << endl;
		}
	}
	cout << "Какого года ноутбук вы ищете?\n";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (ukazatel[i]->year == x)
		{
			kolvo++;
		}
	}
	if (kolvo > 0)
	{
		cout << "Совпадения найдены. Их -" << x << endl;
	}
	else
	{
		cout << "Совпадений не найдено" << endl;
	}
	cout << endl;
	note* bloknot = new note[10];
	note** bb = &bloknot;
	note temp;
	int x1, nomer, netsovpadeniy = 0;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "Введите имя человека: ";
		cin.ignore();
		cin.getline(bb[i]->name, 80);
		cout << "Введите фамилию человека: ";
		cin.ignore();
		cin.getline(bb[i]->surname, 80);
		cout << "Введите номер телефона: +";
		cin >> bb[i]->phonenumber;
		cout << "Введите день рождения (только число дня): ";
		cin >> bb[i]->birthday[0];
		cout << "Введите месяц рождения (номер месяца): ";
		cin >> bb[i]->birthday[1];
		cout << "Введите год рождения: ";
		cin >> bb[i]->birthday[2];
	}
	for (size_t i = 0; i < 9; i++)
	{
		x = bb[i]->birthday[2] * 512 + bb[i]->birthday[1] * 32 + bb[i]->birthday[0];
		x1 = bb[i + 1]->birthday[2] * 512 + bb[i + 1]->birthday[1] * 32 + bb[i + 1]->birthday[0];
		if (x > x1)
		{
			temp = bloknot[i];
			bloknot[i] = bloknot[i + 1];
			bloknot[i + 1] = temp;
		}
	}
	cout << "Введите номер телефона для поиска: +";
	cin >> nomer;
	for (size_t i = 0; i < 10; i++)
	{
		if (nomer == bloknot->phonenumber)
		{
			cout << "Фамилия и имя: " << bb[i]->surname << ' ' << bb[i]->name << endl << "Дата рождения: " << bb[i]->birthday[0] << '.' <<
				bb[i]->birthday[1] << '.' << bb[i]->birthday[2] << endl << "Номер: +" << bb[i]->phonenumber << endl;
		}
		else
		{
			netsovpadeniy++;
		}
	}
	if (netsovpadeniy != 0)
	{
		cout << "Совпадений не найдено.." << endl;
	}
	system("pause");
	return 0;
}