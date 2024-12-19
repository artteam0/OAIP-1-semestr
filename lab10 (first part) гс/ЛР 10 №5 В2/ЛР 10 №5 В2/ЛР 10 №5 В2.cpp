#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 100;
    int i, sz, f = 0, C[N];
    cout << "Введите размер массива: ";
    cin >> sz;
    cout << "Массив C: ";
    srand((unsigned)time(NULL));

    for (i = 0; i < sz; i++)
    {
        C[i] = rand() % 2;
        cout << C[i] << " ";
    }
    for ( i = 0; i < sz; i++)
    {
        if (C[i] == C[sz]) { i += 1; sz -= 1;}
        else f += 1;
    }
    if (f == 0) cout << "Массив симметричен." << endl;
    else cout << "Массив несимметричен." << endl;

    return 0;
}