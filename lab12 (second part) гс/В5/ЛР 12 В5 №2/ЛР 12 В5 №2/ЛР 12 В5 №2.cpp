#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 10000;
    int i, sz, j, C[N], A[N], sum = 0, count = 0;
    double sr;
    cout << "Введите размер массива: ";
    cin >> sz;

    cout << "Массив C: ";
    srand(time(NULL));

    for (i = 0; i < sz; i++)
    {
        *(C + i) = rand() % 100;
        cout << *(C + i) << " ";
    }
    cout << endl;

    cout << "Массив A: ";
   

    for (i = 0; i < sz; i++)
    {
        *(A + i) = rand() % 100;
        cout << *(A + i) << " ";
    }
    cout << endl;

    for (i = 0; i < sz; i++)
    {
        for ( j = 0; j < sz; j++)
        {
            if (*(C + i) == *(A + j))
            {
                count += 1;
            }
        }
    }
    cout << count;
}