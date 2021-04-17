#include<iostream>
#include<Windows.h>
using namespace std;

class Line {
protected:
	double L;
public:
	Line() {
		cout << "Объект создан\n\n";
	}
	void Show() {
		cout << "Длина линии: " << L;
	}
	Line(double a) {
		L = a;
	}
	~Line() {
		cout << "\n\nОбъект был удалён..\n\n";
	}
};

class Triangle : public Line {
protected:
	double H;
public:
	Triangle() {
		cout << "Объект создан\n\n";
	}
	Triangle(double a, double b) : Line(a) {
		H = b;
	}
	void Show() {
		cout << "Height = " << H << ", Length = " << L << endl << endl;
	}
	double Square() {
		return((L * H) / 2);
	}
	~Triangle() {
		cout << "\n\nОбъект был удалён..\n\n";
	}
};

class Rhombus : public Triangle {
protected:
	double D1, D2;//диагонали 1 и 2
public:
	Rhombus() {
		cout << "Объект создан\n\n";
	}
	Rhombus(double a, double b,double c, double d) : Triangle(c, d) {
		D1 = a;
		D2 = b;
	}
	void Show() {
		cout << "Height = " << H << ", Length = " << L << ", Diagonal_1 = " << D1 << ", Diagonal_2 = " << D2 << endl << endl;
	}
	double Square() {
		return (0.5 * D1 * D2);
	}
	~Rhombus() {
		cout << "\n\nОбъект был удалён..\n\n";
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Line a1(10);
	a1.Show();
	a1.~Line();
	Line* a2 = new Line(15);
	a2->Show();
	a2->~Line();
	Triangle b1(15, 3);
	b1.Show();
	cout << "Площадь = " << b1.Square();
	b1.~Triangle();
	Triangle* b2 = new Triangle(11, 7);
	b2->Show();
	cout << "Площадь = " << b2->Square();
	b2->~Triangle();
	Rhombus c1(11, 11, 51, 34);
	c1.Show();
	cout << "Площадь = " << c1.Square();
	c1.~Rhombus();
	Rhombus* c2 = new Rhombus(5, 5, 16, 6);
	c2->Show();
	cout << "Площадь = " << c2->Square();
	c2->~Rhombus();
	system("pause");
	return 0;
}