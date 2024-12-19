#include<iostream>
using namespace std;
int main()
{
	double a = 8, b = 12, n = 200, h, s = 0, x;
	h = (b - a) / n;
	x = a;
	for (x; x <= (b - h); x += h)
	{
		s += h * ((5 - pow(x, 2)) + (5 - pow(x, 2) + h)) / 2;
	}
	cout << "s = " << s << endl;
	return 0;
}