#include<iostream>
using namespace std;
int main()
{
	double a = 1, b = 6, n = 200, h, s1 = 0, s2 = 0, i, x, S;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i = 1; i < n; i++)
	{
		s2 += 1 + pow(x, 3);
		x += h;
		s1 += 1 + pow(x, 3);
		x += h;
	}
	S = (h / 3) * ((1 + pow(a, 3)) + 4 * (1 + pow(a, 3) + h) + 4 * s1 + 2 * s2 + (1 + pow(b, 3)));
	cout << "S = " << S << endl;
	return 0;
}