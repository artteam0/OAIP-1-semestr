#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
    int x, y;
    cout << "Введите x: "; cin >> x;
    cout << "Введите y: "; cin >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "x = " << x << endl;
    cout << "y = " << y;
}
