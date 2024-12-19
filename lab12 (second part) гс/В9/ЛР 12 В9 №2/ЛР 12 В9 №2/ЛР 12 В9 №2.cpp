#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    int A[100], B[100], t, counter1 = 0, counter2 = 0, min = 100;
    bool gg = false;
    srand(time(NULL));


    cout << "Первый массив" << endl;
    for (int i = 1; i <= 5; i++)
    {
        *(A + i) = rand() % 10;
        if (*(A + i) < min) min = *(A + i);
        cout << *(A + i) << " ";
    }
    cout << endl << "Второй массив" << endl;
    for (int i = 1; i <= 5; i++)
    {
        *(B + i) = rand() % 10;
        if (*(B + i) == min)
        {
            gg = true;
        }
        cout << *(B + i) << " ";
    }

    if (gg == true) cout << endl << "TRUE";
    else cout << endl << "FALSE";

}