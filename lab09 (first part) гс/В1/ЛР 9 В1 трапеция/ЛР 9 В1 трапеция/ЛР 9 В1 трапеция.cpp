#include<iostream>
using namespace std;
int main()
{
	double a = 1, b = 3, n = 200, h, s = 0, x;
	h = (b - a) / n;
	x = a;
	for (x; x <= (b - h); x += h)
	{
		s += h * ((pow(x, 3) - 3) + ((pow(x, 3) - 3) + h)) / 2;
	}
	cout << "s = " << s << endl;
	return 0;
}