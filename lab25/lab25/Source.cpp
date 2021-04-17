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
	Dot(const Dot& obj) {
		this->x1 = obj.x1;
	}
	int GetX1() {
		return x1;
	}
	Dot operator+(Dot object) {
		cout << "Сложение\n";
		this->x1 = this->x1 + object.GetX1();
		return *this;
	}
	void operator--() {
		this->x1--;
		return;
	}
	Dot operator--(int) {
		Dot temp;
		temp.x1 = this->x1;
		(temp.x1)--;
		return temp;
	}
	bool operator>=(Dot obj)const {
		return(((this->x1 > obj.x1) | (this->x1 == obj.x1) ? true : false));
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
	Pyramid(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : Quadrate(x0, y0, x1, y1, x2, y2, x3, y3), x5(x4), y5(y4) {
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
	Dot d1(11, 1);
	Dot d2(6, 4);
	int p;
	do {
		cout << "Выберите пункт меню:\n1)сложение\n2)--\n3)>=\n4)Выход из программы\nПункт меню: ";
		cin >> p;
		switch (p) {
			case 1: {
				d1 + d2;
				cout << d1.GetX1() << ' ' << d2.GetX1() << endl;
				break;
			}
			case 2: {
				--d1;
				--d2;
				cout << d1.GetX1() << ' ' << d2.GetX1() << endl;
				break;
			}
			case 3: {
				if (d1 >= d2) {
					cout << true << endl;
				}
				else {
					cout << false << endl;
				}
				break;
			}
		}
	} while (p != 4);
	system("pause");
	return 0;
}