#include<iostream>
#include<Windows.h>
using namespace std;

class Point {
protected:
    double x, y;
public:
    Point() {
        cout << "������ ������" << endl;
    }
    Point(double a, double b) {
        x = a;
        y = b;
    }
    virtual void Show() = 0;
    virtual double Length() = 0;
    virtual double LenghtCircle() = 0;
    ~Point() {
        cout << "������ �����" << endl;
    }
};

class Circle : public Point {
protected:
    double r, p, l;
public:
    Circle() {
        cout << "������ ������" << endl;
    }
    Circle(double a0, double b0, double r0) : Point(a0, b0) {
        r = r0;
    }
    double LenghtCircle() override {
        return l = (x + y) * 2;
    }
    double Length() override {
        return  p = 2.0 * 3.14 * r;
    };
    void Show() override {
        cout << "������ ����� = " << l << endl;
        cout << "�������� = " << p << endl;
        cout << "������ = " << r << endl;
    }
    ~Circle() {
        cout << "������ �����" << endl;
    }
};
double Min(Point** mas, int n) {
    double min = mas[0]->LenghtCircle();
    for (int i = 0; i < n; i++) {
        if (mas[i]->LenghtCircle() < min) {
            min = mas[i]->LenghtCircle();
        }
    }
    return min;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;
    cout << "������� ���������� ��������: ";
    cin >> n;
    double a, b, c;
    Point** mas = new Point * [n];
    for (int i = 0; i < n; i++)
    {
        cout << "������� ���������� �����\n";
        cin >> a >> b;
        cout << "������� ������\n";
        cin >> c;
        mas[i] = new Circle(a, b, c);
        mas[i]->LenghtCircle();
        mas[i]->Length();
    }

    for (int i = 0; i < n; i++) {
        mas[i]->Show();
    }
    double min = Min(mas, n);
    cout << "�����������: " << min << endl;
    return 0;
}