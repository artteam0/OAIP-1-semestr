#include <iostream>
int main() {
	using namespace std;
setlocale(LC_CTYPE, "rus");
double a, b, c, d, x1, x2;
std::cout << "Введите коэффициент a = ";
cin >> a;
std::cout << "Введите коэффициент b = ";
cin >> b;
std::cout << "Введите коэффициент c = ";
cin >> c;
d = pow(b, 2) - 4 * a * c;
x1 = ( - b + sqrt(d)) / 2 * a, x2 = ( - b - sqrt(d)) / 2 * a;
cout << "d = " << d << endl;
if (d < 0) {
	std::cout << "Нет корней" << std::endl;
}
else
{
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}
	return 0;
}