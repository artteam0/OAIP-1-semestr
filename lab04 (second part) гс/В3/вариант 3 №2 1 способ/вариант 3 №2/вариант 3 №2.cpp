#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    int x, y, z;
    cout << "Введите x: "; cin >> x;
    cout << "Введите y: "; cin >> y;
    z = x;
    x = y;
    y = z;
    cout << "x = " << x << endl;
    cout << "y = " << y;
}