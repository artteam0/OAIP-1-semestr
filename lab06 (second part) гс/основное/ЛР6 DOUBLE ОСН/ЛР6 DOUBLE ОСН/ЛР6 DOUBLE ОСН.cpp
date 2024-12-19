#include <iostream>
using namespace std;
int main()
{
	float y = 1.6e-4, k = 6, x, c, d, i, j;
	for (j = 1; j <=3; j++)
	{
		cin >> i;
		x = 1;
		while (x <= 2)
		{
			c = (i / k) - (sqrt(y) / 0.4);
			cout << c << endl;
			d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
			cout << d << endl;
			x = x + 0.1;
		}
	}
}

