#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double a, b, c;
	cout << "Введите число: "; cin >> a;
	c = (a - 5) / 2;
	b = c + 5;
	cout << "Первое число: " << c << endl;
	cout << "Второе число: " << b;
}