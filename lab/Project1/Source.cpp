#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int x, y, c;
	cout << "������� �";
	cin >> x;
	cout << "������� y";
	cin >> y;
	c = ((x * x) - (4 * y)) / 3;
	cout << "����� " << c << endl;
	system("pause");
	return 0;
}