#include <iostream>//ОШИБКА!!!!!!!!!!!!!!!!!!!!!!!
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int f, i;
	double a, x, f1, e;
	cout << "Введите x:";
	cin >> x;
	cout << endl << "Введите i:";
	cin >> i;
	cout << "Выберите чем будет являться у вас F" << endl << "1.F=e^x или напишите 2.F=x^2" << endl << "Сделайте выбор 1 или 2:";
	cin >> f;
	switch (f)
	{
	case 1:
	{
		f1 = exp(x);
		cout << "Вы выбрали 2.F=e^x" << endl;
		break;
	}
	case 2:
	{
		f1 = pow(x, 2);
		cout << "Вы выбрали 2.F=x^2" << endl;
		break;
	default:
		cout << "Ошибка!!!Введено неправильные числа" << endl;
	}
	}
	if ((i % 2 != 0) & (x > 0))
		e = (i * sqrt(f1));
	else if ((i % 2 == 0) & (x < 0))
		e = i / (2 * sqrt(abs(f1)));
	else
		e = sqrt(abs(i * (f1)));
	cout << "e=" << e;
	return (0);
	system("pause");
}

