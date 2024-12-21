#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sq[100][100];
	for (int i = 0; i < n; i++)
	{
		int a = i + 1;
		for (int j = 0; j < n; j++)
		{
			sq[i][j] = a;
			a++;
			if (a > n) a = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << sq[i][j] << ' ';
		cout << endl;
	}
	return 0;
}