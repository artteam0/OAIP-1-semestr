#include <iostream> 
using namespace std;

void main()
{
    int rows = 4, column = 4, i, j, ** A, maxsum = -999, minsum = 999, sum, sum1;
    A = new int* [4];
    for (i = 0; i < 4; i++)
    {
        A[i] = new int[4];
        for (j = 0; j < 4; j++)
        {
            cin >> A[i][j];
        }
    }


    for (i = 0; i < 4; ++i)
    {
        if (i % 2 == 1) sum = 0;
        if (i % 2 == 0) sum1 = 0;
        for (j = 0; j < 4; j++)
        {
            if (i % 2 == 1) sum += A[i][j];
            if (i % 2 == 0) sum1 += A[i][j];
        }
        if ((i % 2) == 1)
        {
            if (sum > maxsum)
                maxsum = sum;
        }
        if (sum1 < minsum && i % 2 == 0) minsum = sum1;

    }
    cout << maxsum << ":max" << "     " << minsum << ":min";

    for (i = 0; i < 4; i++)
    {
        delete[] A[i];
    }


}