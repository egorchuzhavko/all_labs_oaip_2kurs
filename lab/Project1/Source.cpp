#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	int x, y, c;
	cout << "введите а";
	cin >> x;
	cout << "введите y";
	cin >> y;
	c = ((x * x) - (4 * y)) / 3;
	cout << "ответ " << c << endl;
	system("pause");
	return 0;
}