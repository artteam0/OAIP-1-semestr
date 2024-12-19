#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    int A[100], i, N, j, num1, num2;
    cout << "Введите размер массива: ";
    cin >> N;
    cout << "Введите элементы массива через пробел: ";
    for (i = 1; i <= N; i++)
    {
        cin >> *(A + i);
    }
    for (i = 1; i <= N; i++)
    {
        for (j = i + 1; j <= N; j++)
        {
            if (*(A + i) % *(A + j) == 0 or *(A + j) % *(A + i) == 0) 
            { num1 = *(A + i); num2 = *(A + j); }
        }
    }
    cout << "Два числа: " << num1 << " " << num2;
}