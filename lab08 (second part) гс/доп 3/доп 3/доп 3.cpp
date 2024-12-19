#include <iostream>
using namespace std;
int main()
{
    int k, x, i = 1, first;
    bool t = false;
    setlocale(LC_CTYPE, "Ru");
    cout << "Введите количество чисел последовательности k:";
    cin >> k;
    if (k <= 1)
    {
        cout << "Некорректный ввод";
        return(0);
    }


    cout << "x" << i << ": ";


    cin >> x;




    first = x;
    for (i; i <= k - 1; i++)
    {
        cout << "x" << i + 1 << ": ";
        cin >> x;
        if (i > 1)
        {
            if (first > x && t == false)
            {
                t = true;
                first = x;
                continue;
            }
            if (first < x && t == true)
            {
                t = false;
                first = x;
                continue;
            }
            cout << "Эта последовательность не пилообразная.";
            return(0);
        }
        else
        {
            if (first > x)
            {
                t = true;
                first = x;
                continue;
            }
            if (first < x)
            {
                t = false;
                first = x;
                continue;
            }
            cout << "Эта последовательность не пилообразная.";
            return(0);
        }
    }
    cout << "Это последовательность пилообразная.";
}