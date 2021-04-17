#include<iostream>
#include<cmath>
#include<Windows.h>
using namespace std;

class Dot {
protected:
	int x1, y1;
public:
	virtual void Show() {
		cout << "Точка 1 с координатами x1: " << x1 << ", y1: " << y1 << endl;
	}
	Dot(int x0, int y0) :x1(x0), y1(y0) { //прямая иниацилизация 
	}
	Dot() {
	}
	~Dot() {
	}
};

class Quadrate : public Dot {
protected:
	int x2, y2, x3, y3, x4, y4;
public:
	void Show() override {
		Dot::Show();
		cout << "Точка 2 с координатами x2: " << x2 << ", y2: " << y2 << "\nТочка 3 с координатами x3: " << x3 << ", y3: " << y3 <<
			"\nТочка 4 с координатами x4: " << x4 << ", y4: " << y4 << endl;
	}
	Quadrate(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3) :Dot(x0, y0), x2(x1), y2(y1), x3(x2), y3(y2), x4(x3), y4(y3) {
	}
	Quadrate() {
	}
	double Square() {
		return pow(sqrt(pow(x1, 2) + pow(y1, 2)), 2);
	}
	~Quadrate() {
	}
};

class Pyramid : public Quadrate {
protected:
	int x5, y5;
public:
	void Show() override {
		Quadrate::Show();
		cout << "Точка 5 с координатами x5: " << x5 << ", y5: " << y5 << endl;
	}
	Pyramid(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : Quadrate (x0,y0,x1, y1, x2, y2, x3, y3), x5(x4), y5(y4) {
	}
	Pyramid() {
	}
	double Square() {
		double a = sqrt(pow(x1, 2) + pow(y1, 2));
		double b = sqrt(pow(x2, 2) + pow(y2, 2));
		double c = sqrt(pow(x3, 2) + pow(y3, 2));
		double pp = (a + b + c) / 3;
		double St = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
		return (4 * St + pow(a, 2));
	}
	~Pyramid() {
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Dot dot(3, 1);
	dot.Show();
	dot.~Dot();
	Quadrate kvadrat(3, 1, 3, 3, 1, 5, 2, 4);
	kvadrat.Show();
	cout << "площадь квадрата = " << kvadrat.Square() << endl;
	kvadrat.~Quadrate();
	Pyramid piramida(5, 1, 2, 3, 2, 4, 1, 2, 3, 5);
	piramida.Show();
	cout << "площадь пирамиды = " << piramida.Square() << endl;
	piramida.~Pyramid();
	int n, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, p;
	do {
		cout << "Введите количество экземпляров для массива: ";
		cin >> n;
	} while (n <= 0);
	Dot** mas = new Dot * [n];
	for (int i = 0; i < n; i++) {
		cout << "Выберите пункт меню:\n1) Точка\n2) Квадрат\n3) Пирамида\n Пункт меню:";
		cin >> p;
		switch (p) {
		case 1:
		{
			cout << "Щас вы будете вводить по очереди данные для ТОЧКИ: ";
			cin >> x1 >> y1;
			mas[i] = new Dot(x1, y1);
			break;
		}
		case 2: {
			cout << "Щас вы будете вводить по очереди данные для КВАДРАТА: ";
			cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
			mas[i] = new Quadrate(x1, y1, x2, y2, x3, y3, x4, y4);
			break;
		}
		case 3: {
			cout << "Щас вы будете вводить по очереди данные для ПИРАМИДЫ: ";
			cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
			mas[i] = new Pyramid(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
			break;
		}
		}
	}
	for (int i = 0; i < n; i++) {
		mas[i]->Show();
	}
	system("pause");
	return 0;
}