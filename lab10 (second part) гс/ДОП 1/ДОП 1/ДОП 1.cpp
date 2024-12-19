#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const int N = 55;
    int i, sz, A[N], amount = 0, max = 0;
    double;
    cout << "Введите количество дней: ";
    cin >> sz;
    cout << "Массив равен: ";
    srand((unsigned)time(NULL));

    for (i = 0; i < sz; i++)
    {
        A[i] = rand() % 55;
        cout << A[i] << " ";
    }
    cout << endl;

    for (i = 1; i < sz + 1; i++)
    {
        amount += A[i - 1];
        if (i % 7 == 0)
        {
            cout << "Осадки: " << amount << " " << endl;
            if (amount > max)
            {
                max = amount;
            }
            amount = 0;
        }
    }
    cout << "Максимальное  кол-во осадков за неделю: " << max;
}