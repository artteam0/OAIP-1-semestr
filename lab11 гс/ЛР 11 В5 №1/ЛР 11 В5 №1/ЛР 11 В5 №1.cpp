#include <iostream>
void main()
{
    setlocale(0, "");
    using namespace std;
    int A, mask = 1, k; char tmp[33];
    short i, num1 = 0;
    cout << "Введите число ";       cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде = " << tmp << endl;
    num1 = 0;
    _itoa_s(mask, tmp, 2);
    for (i = 0; i <= A; i++)
    {
        if ((mask & A) == mask) num1++;
        mask = mask << 1;
    }
    cout << num1 << endl;
}