#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 100;
    int i, sz, C[N];
    cout << "Введите размер массива: ";
    cin >> sz;
    cout << "Массив C: ";
    srand(time(NULL));

    for ( i = 0; i < sz; i++)
    {
        C[i] = rand() % 100;
        cout << C[i] << " ";
    }

    for( i = 2; i < sz; i += 3)
    {
        C[i] = (C[i - 1] + C[i - 2]) / 2;
    }

    cout << endl;
    cout << "Изменённый массив: ";

    for( i = 0; i < sz; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}
