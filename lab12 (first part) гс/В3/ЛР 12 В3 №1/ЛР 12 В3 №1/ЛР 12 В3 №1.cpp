#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int sz, A[100], B[100], countA = 0, countB = 0, t;
    cout << "Введите размеры массивов: ";
    cin >> sz;

    cout << "Массив A: ";
    srand(time(NULL));
    for (int i = 0; i < sz; i++)
    {
        *(A + i) = rand() % 100;
        cout << *(A + i) << " ";
    }
    cout << endl;

    cout << "Массив B: ";
    for (int i = 0; i < sz; i++)
    {
        *(B + i) = rand() % 100;
        cout << *(B + i) << " ";
    }
    cout << endl;

    cout << "Введите t: ";
    cin >> t;

    for (int i = 0; i < sz; i++)
    {
        if (*(A + i) < t)
        {
            countA += 1;
        }
        if (*(B + i) < t)
        {
            countB += 1;
        }
    }

    if (countA > countB)
    {
        cout << "Большинство элементов < t в массиве A: ";
        for (int i = 0; i < sz; i++)
        {
            cout << *(A + i) << " ";
        }
        cout << endl;
        cout << "Массив B: ";
        for (int i = 0; i < sz; i++)
        {
            cout << *(B + i) << " ";
        }
    }
    else
    {
        cout << "Большинство элементов < t в массиве B: ";
        for (int i = 0; i < sz; i++)
        {
            cout << *(B + i) << " ";
        }
        cout << endl;
        cout << "Массив А: ";
        for (int i = 0; i < sz; i++)
        {
            cout << *(A + i) << " ";
        }
    }
}