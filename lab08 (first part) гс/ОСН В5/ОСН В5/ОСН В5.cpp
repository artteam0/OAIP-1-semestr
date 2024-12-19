#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	double a = 0.5, b = 7, v, w, c;
	for ( int i = 1; i <= 5 ; i++)
	{
		cin >> v;
		if (i == 1)
		{
			c = v;
		}
		if (v > 0)
		{
			w = a + v;
		}
		else
		{
			w = b / v;
		}
		if (w > c)
		{
			c = w;
		}
		cout << c << endl;
	}
	return 0;
}