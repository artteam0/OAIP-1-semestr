#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i, sz, j, A[100], B[100], sum = 0;
    double sr;
    cout << "Введите размер массива: ";
    cin >> sz;

    cout << "Массив A: ";
    srand(time(NULL));

    for (i = 0; i < sz; i++)
    {
        *(A + i) = rand() % 100;
        cout << *(A + i) << " ";
    }
    cout << endl;
    for (i = 0; i < sz; i++)
    {
        sum += *(A + 1);
    }
    sr = sum / sz;
    cout << "Среднее арифметическое: " << sr << endl;
    cout << "Изменённый массив: ";
    for (i = 0; i < sz; i++)
    {
        if (*(A + i) > sr)
        {
            cout << *(A + i) << " ";
            *(A + i) = 0;
        }
    }
    for (i = 0; i < sz; i++)
    {
        if (*(A + i) != 0)
        {
            cout << *(A + i) << " ";
        }
    }
    return 0;
}
