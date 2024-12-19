#include <iostream>
using namespace std;
int main()
{
	double y = 1.6e-4, x = -1, k = 6, i, c, d;
	i = 0;
	while (i <= 3)
	{
		cout << i << endl;
		c = (i / k) - (sqrt(y) / 0.4);
		cout << c << endl;
		d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
		cout << d << endl;
		i = i + 0.5;
	}
}