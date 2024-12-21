#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, m, max;
    double A[100][100];
    cout << "Введите формат матрицы: ";
    cin >> n >> m;
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
    cout << " Исходный массив:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < m; j++)
            cout << "A[" << i + 1 << "," << j + 1 << "] =" << A[i][j] << "\t";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                cout << A[i][j] << " ";
                max = A[i][j];
                if (A[i][j] > max)
                {
                    max == A[i][j];
                }
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                cout << A[i][j] / max << " ";
            }
        }
    }
}