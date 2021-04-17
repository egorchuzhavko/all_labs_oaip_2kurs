#include<iostream>
#include<Windows.h>
using namespace std;

class Song {
private:
	int year;//год выхода песни
	double length;//длительность песни
	char country;//страна исполнителя
	bool inchart;//находится в чартах или нет
	string name;
public:
	Song() {
		cout << "ОбЪект был создан." << endl;
	}

	int SetYear(int a) {
		year = a;
		return year;
	}
	int GetYear() {
		return year;
	}
	double SetLength(double a) {
		length = a;
		return length;
	}
	double GetLength() {
		return length;
	}
	char SetCountry(char a) {
		country = a;
		return country;
	}
	char GetCountry() {
		return country;
	}
	bool SetInchart(bool a) {
		inchart = a;
		return inchart;
	}
	bool GetInchart() {
		return inchart;
	}
	string SetName(string a) {
		name = a;
		return name;
	}
	string GetName() {
		return name;
	}
	Song(int a, double b, char c, bool d, string s) {
		year = a;
		length = b;
		country = c;
		inchart = d;
		name = s;
	}
	void print() {
		cout << "\nНазвание песни: " << GetName() << "\nДлина песни: " << GetLength() << "\nГод выхода: " << GetYear() << "\nПервая буква страны исполнителя: " << GetCountry() << "\nНаходится в чартах? (1 - да, 0 - нет): " << GetInchart() << endl;
	}
	string Status(int kf, int ke) {
		if (kf < 0 || ke < 0) {
			return("Ошибка значений...");
		}
		if (100000 <= (kf + ke) && (kf + ke) < 500000) {
			return ("Серебрянный");
		}
		else {
			if (500000 <= (kf + ke) && (kf + ke) < 1000000) {
				return("Золотой");
			}
			else {

				if (1000000 <= (kf + ke) && (kf + ke) < 10000000) {
					return("Платиновый");
				}
				else {
					if (10000000 <= (kf + ke)) {
						return("Бриллиантовый");
					}
					else {
						return("Нет статуса");	
					}
				}
			}
		}
	}
	~Song() {
		cout << "Объект был удалён." << endl;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Song first;
	first.SetName("$uicideboy$ - low key");
	first.SetLength(2.02);
	first.SetCountry('A');
	first.SetInchart(false);
	first.SetYear(2015);
	first.print();
	cout << "Статус песни: " << first.Status(144000, 554563) << endl << endl;
	string name;
	double length;
	char country;
	bool inchart;
	int year, proddisk, prodelek;
	cout << "Введите название песни с указанием исполнителя (Например: $uicedeboy$ - Low key): ";
	cin >> name;
	cout << "Введите длину песни через точку (например: 2.02): ";
	cin >> length;
	cout << "Введите первую букву страны исполнителя: ";
	cin >> country;
	cout << "Введите год выхода песни: ";
	cin >> year;
	cout << "Находится ли трек в чартах? (1 - да, 0 - нет): ";
	cin >> inchart;
	cout << "Введите число продаж диска: ";
	cin >> proddisk;
	cout << "Введите число продаж электронного варианта: ";
	cin >> prodelek;
	int prdd1 = proddisk, prde1 = prodelek;
	Song second(year, length, country, inchart, name);
	cout << "Статус песни: " << second.Status(proddisk, prodelek) << endl << endl;
	Song* third = new Song;
	if (third == NULL) {
		cout << "Ошибка..\n\n";
		system("pause");
		return 0;
	}
	cout << "Введите название песни с указанием исполнителя (Например: $uicedeboy$ - Low key): ";
	cin >> name;
	third->SetName(name);
	cout << "Введите длину песни через точку (например: 2.02): ";
	cin >> length;
	third->SetLength(length);
	cout << "Введите первую букву страны исполнителя: ";
	cin >> country;
	third->SetCountry(country);
	cout << "Введите год выхода песни: ";
	cin >> year;
	third->SetYear(year);
	cout << "Находится ли трек в чартах? (1 - да, 0 - нет): ";
	cin >> inchart;
	third->SetInchart(inchart);
	cout << "Введите число продаж диска: ";
	cin >> proddisk;
	cout << "Введите число продаж электронного варианта: ";
	cin >> prodelek;
	third->print();
	cout << "Статус песни: " << third->Status(proddisk, prodelek) << endl << endl;
	cout << "Введите название песни с указанием исполнителя (Например: $uicedeboy$ - Low key): ";
	cin >> name;
	cout << "Введите длину песни через точку (например: 2.02): ";
	cin >> length;
	cout << "Введите первую букву страны исполнителя: ";
	cin >> country;
	cout << "Введите год выхода песни: ";
	cin >> year;
	cout << "Находится ли трек в чартах? (1 - да, 0 - нет): ";
	cin >> inchart;
	cout << "Введите число продаж диска: ";
	cin >> proddisk;
	cout << "Введите число продаж электронного варианта: ";
	cin >> prodelek;
	int prdd2 = proddisk, prde2 = prodelek;
	Song* fourth = new Song(year, length, country, inchart, name);
	fourth->print();
	cout << "Статус песни: " << fourth->Status(proddisk, prodelek) << endl << endl;
	Song* s1 = &first;
	(s1)->print();
	Song** s4 = &fourth;
	(*s4)->print();
	Song& ss1 = first;
	(&ss1)->Status(prdd1, prde1);
	Song& ss4 = *fourth;
	(&ss4)->Status(prdd2, prde2);
	first.~Song();
	second.~Song();
	third->~Song();
	fourth->~Song();
	system("pause");
	return 0;
}