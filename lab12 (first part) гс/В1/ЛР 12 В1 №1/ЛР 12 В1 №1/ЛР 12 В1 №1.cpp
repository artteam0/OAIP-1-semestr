#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Ru");
    const int A = 100;
    int array[A], i, k = 0, m, size = 0;
    long long N;
    cout << "Введите число m: "; cin >> m;
    cout << "Введите число: "; cin >> N;
    for (; N >= 1 || N <= -1; N = N / 10) {
        if (N % 10 % m == 0) {
            *(array + size) = abs(N % 10);
            size++;
        }
    }
    for (i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }
}