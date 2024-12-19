#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int N, num, temp, count;
    cout << "Введите количество чисел: ";
    cin >> N;

    num = 1;
    count = 0;

    while (count < N) {
        int temp = num;

        while (temp % 2 == 0) {
            temp /= 2;
        }

        while (temp % 3 == 0) {
            temp /= 3;
        }

        while (temp % 5 == 0) {
            temp /= 5;
        }

        if (temp == 1&num>1) {
            cout << num << " ";
            count++;
        }

        num++;
    }

    return 0;
}