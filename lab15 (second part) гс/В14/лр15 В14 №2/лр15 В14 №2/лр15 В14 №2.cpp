#include <iostream> 
using namespace std;

void main()
{
    bool flag = false;
    int i, j, n, m, pos1, pos2, first, ** A;
    cin >> n >> m;
    A = new int* [n];
    for (i = 0; i < n; i++)
    {
        A[i] = new int[m];
        for (j = 0; j < m; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == 0)
            {
                flag = true;
                pos1 = i + 1;
                pos2 = j + 1;
                first = A[i][0];
            }
        }
    }
    if (flag == false) cout << endl << flag;
    else {
        cout << endl << "[" << pos1 << "," << pos2 << "]" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << A[i][j] - first << "     ";
            }
            cout << endl << endl << endl << endl << endl;
        }

    }

    for (i = 0; i < n; i++)
    {
        delete[] A[i];
    }

}