#include<iostream>
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
int main()
{
	setlocale(LC_ALL, "Russian");
	laptop mylaptop;
	mylaptop.year = 2020;
	mylaptop.diagonal = 15.6;
	mylaptop.grafcard = true;
	mylaptop.OS = 'W';
	strcpy_s(mylaptop.name, 80, "Xiaomi Mi Notebook Pro");
	mylaptop.memory[0] = 512;
	cout << "Mylaptop:\n" << mylaptop.name << " | " << mylaptop.diagonal << " | " << mylaptop.year <<
		" | " << mylaptop.OS << " | " << mylaptop.grafcard << " | " << mylaptop.memory[0] << endl;
	laptop otherlaptop;
	cout << "Введите название/модель вашего ноутбука: ";
	cin.getline(otherlaptop.name, 80);
	cout << "Год выпуска вашего ноутбука: ";
	cin >> otherlaptop.year;
	cout << "Введите диагональ монитора вашего ноутбука: ";
	cin >> otherlaptop.diagonal;
	cout << "Есть ли у вас дискретная видеокарта? (Если есть - введите 1, иначе - 0) ";
	cin >> otherlaptop.grafcard;
	cout << "Введите вашу операционную систему (Если Mac - M, если windows - W, если Linux - L): ";
	cin >> otherlaptop.OS;
	int n;
	do
	{
		cout << "Сколько у вас твердотельных накопителей для хранения памяти? (Не больше 10) ";
		cin >> n;
	} while (n > 10);
	for (size_t i = 0; i < n; i++)
	{
		cout << "Введите количество памяти в " << i + 1 << " диске: ";
		cin >> otherlaptop.memory[i];
	}
	cout << "Your laptop: \n" << otherlaptop.name << " | " << otherlaptop.diagonal << " | " << otherlaptop.year <<
		" | " << otherlaptop.OS << " | ";
	for (size_t i = 0; i < n; i++)
	{
		cout << otherlaptop.memory[i] << " | ";
	}
	cout << otherlaptop.grafcard << endl;
	laptop dlyaukazatelya;
	laptop* ukazatel = &dlyaukazatelya;
	ukazatel->year = 2020;
	ukazatel->diagonal = 15.6;
	(*ukazatel).grafcard = true;
	(*ukazatel).OS = 'W';
	strcpy_s((*ukazatel).name, 80, "Xiaomi Mi Notebook Pro");
	ukazatel->memory[0] = 512;
	cout << "Mylaptop:\n" << ukazatel->name << " | " << ukazatel->diagonal << " | " << ukazatel->year <<
		" | " << (*ukazatel).OS << " | " << (*ukazatel).grafcard << " | " << (*ukazatel).memory[0] << endl;
	laptop dlyassilki;
	laptop& ssilka = dlyassilki;
	(&ssilka)->year = 2020;
	(&ssilka)->diagonal = 15.6;
	(&ssilka)->grafcard = true;
	(&ssilka)->OS = 'W';
	strcpy_s((&ssilka)->name, 80, "Xiaomi Mi Notebook Pro");
	(&ssilka)->memory[0] = 512;
	cout << "Mylaptop:\n" << (&ssilka)->name << " | " << (&ssilka)->diagonal << " | " << (&ssilka)->year <<
		" | " << (&ssilka)->OS << " | " << (&ssilka)->grafcard << " | " << (&ssilka)->memory[0] << endl;
	system("pause");
	return 0;
}