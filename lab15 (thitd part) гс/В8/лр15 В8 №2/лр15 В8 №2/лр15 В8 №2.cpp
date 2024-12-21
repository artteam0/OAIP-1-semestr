#include <iostream> 
using namespace std;

void main()
{
    bool flag = true;
    int n, m, i, j, ** A, answer = 0;
    cin >> n >> m;
    A = new int* [n];

    for (i = 0; i < n; i++)
    {
        A[i] = new int[m];
        for (j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }


    for (j = 0; j < m; j++)
    {
        A[i] = new int[m];
        for (i = 0; i < n; i++)
        {
            if (A[i][j] == 0 && flag == true) { answer = j + 1; flag = false; }
        }
    }
    cout << endl << answer;

    for (i = 0; i < n; i++)
    {
        delete[] A[i];
    }

}