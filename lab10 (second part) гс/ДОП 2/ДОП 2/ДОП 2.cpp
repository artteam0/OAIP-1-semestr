#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const int N = 100;
    int i, sz, A[N], count = 0;
    cout << "Размер массива: ";
    cin >> sz;
    cout << "Массив равен: ";
    for (i = 0; i < sz; i++)
    {
        A[i] = rand() % 20;
        cout << A[i] << " ";
    }
    for (i = 0; i < sz; i++)
    {
        if (A[i + 1] == A[i])
        {
            count += 1;
        }
    }
    cout << endl;
    cout << "Количество пар: " << count;
}