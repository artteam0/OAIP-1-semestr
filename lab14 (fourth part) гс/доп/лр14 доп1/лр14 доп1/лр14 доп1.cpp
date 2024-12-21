#include <iostream> 
#include <time.h> 
#include <stdlib.h> 
using namespace std;

void main()
{
	int A[100][100], i, j, znak, n;
	srand(time(NULL));
	cout << "n:";
	cin >> n;
	cout << endl << endl << endl;
	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < 2 * n; j++)
		{
			A[i][j] = rand() % 11;
			znak = rand() % 2;
			if (znak == 1)A[i][j] = A[i][j] * -1;
			cout << A[i][j] << "      ";
		}
		cout << endl << endl << endl;
	}
	cout << endl << endl << endl;
	cout << endl << endl << endl;
	cout << endl << endl << endl;
	cout << endl << endl << endl;
	swap(A[0][0], A[n - 1][n - 1]);
	swap(A[0][n - 1], A[n - 1][0]);
	swap(A[0][n], A[n - 1][2 * n - 1]);
	swap(A[0][2 * n - 1], A[n - 1][n]);

	swap(A[n][0], A[2 * n - 1][n - 1]);
	swap(A[n][n - 1], A[2 * n - 1][0]);
	swap(A[n][n], A[2 * n - 1][2 * n - 1]);
	swap(A[n][2 * n - 1], A[2 * n - 1][n]);

	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < 2 * n; j++)
		{
			cout << A[i][j] << "      ";
		}
		cout << endl << endl << endl;
	}
}