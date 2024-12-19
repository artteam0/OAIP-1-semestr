#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 100;
    int i, sz, C[N], count = 0, max = 0;
    cout << "Введите размер массива: ";
    cin >> sz;
    cout << "Массив C: ";
    srand(time(NULL));

    for (i = 0; i < sz; i++)
    {
        C[i] = rand() % 15;
        cout << C[i] << " ";
    }

    for (int j = 0; j < sz; j++)
    {
        count = 0;
        while (C[j] == C[j + count])
        {
            count += 1;
        }
        j = j + count;
        if (count > max) max = count;
    }
    cout << endl;
    cout << "Наибольшее число, подряд идущих элементов " << max << endl;
    return 0;
}
