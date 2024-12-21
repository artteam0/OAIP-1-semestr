#include <iostream> 
using namespace std;

void main()
{
    float A[100][100], B[100];
    int i, j, n, max = -999, cntrl1 = 0, cntrl2 = 0, count = 1, diogonal = 1, k = 1, help;
    cout << "n:";
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (help = 1; help <= n; help++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (A[i][j] > max)
                {
                    max = A[i][j];
                    cntrl1 = i;
                    cntrl2 = j;
                }
            }
        }
        B[count] = max;
        A[cntrl1][cntrl2] = 0;
        count += 1;
        max = -999;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (A[i][j] == 0)
            {
                A[i][j] = B[k]; k += 1;
                swap(A[i][j], A[diogonal][diogonal]);
                diogonal += 1;
            }
        }
    }


    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << A[i][j] << "      ";

        }
        cout << endl << endl << endl << endl;
    }
}