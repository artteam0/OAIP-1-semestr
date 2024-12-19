#include<iostream>
using namespace std;
int main()
{
	double a = 8, b = 12, n = 200, h, s1 = 0, s2 = 0, i, x, S;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for ( i = 1; i < n; i++)
	{
		s2 += 5 - pow(x, 2);
		x += h;
		s1 += 5 - pow(x, 2);
		x += h;
	}
	S = (h / 3) * ((5 - pow(a, 2)) + 4 * (5 - pow(a, 2) + h) + 4 * s1 + 2 * s2 + (5 - pow(b, 2)));
	cout << "S = " << S << endl;
	return 0;
}