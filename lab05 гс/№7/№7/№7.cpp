#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "rus");
    int sum1, sum2, sum3, sum, k = 3;
    cout << "Введите три числа\n";
    cin >> sum1 >> sum2 >> sum3;
    sum = 0;
    sum1 % 5 == 0 ? sum += sum1 : k--;
    sum2 % 5 == 0 ? sum += sum2 : k--;
    sum3 % 5 == 0 ? sum += sum3 : k--;
    (k == 0) ? cout << "Error" : cout << sum;
}