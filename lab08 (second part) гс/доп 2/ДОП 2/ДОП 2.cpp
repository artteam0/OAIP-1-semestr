#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Rus");
    float n, min = 99999, max = -99999, x;
    int count = 0, a = 1, b = 1;
    cout << "Введите количество чисел n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Введите x: ";
        cin >> x;
        if (x <= min)
        {
            min = x;
            a = i;
            count = i - b - 1;
            
        }
        if (x >= max)
        {
            max = x;
            b = i;
            count = i - a - 1;
            
        }
    }
    if (n == 1)
        count += 1;
    cout << "Элементы, стоящие между минимальным и максимальным значениями: " << count;
}