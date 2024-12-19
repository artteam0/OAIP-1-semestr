#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int sz, A[100], B[100], count1 = 0, count2 = 0, count3 = 0, t;
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
    for (int i = 0; i < sz; i++)
    {
        if (*(A + i) > *(B + i)) count1 += 1;
        if (*(A + i) < *(B + i)) count2 += 1;
        if (*(A + i) == *(B + i)) count3 += 1;
    }
    cout << "A[i]>B[i]: " << count1 << endl;
    cout << "A[i]<B[i]: " << count2 << endl;
    cout << "A[i]=B[i]: " << count3 << endl;
}