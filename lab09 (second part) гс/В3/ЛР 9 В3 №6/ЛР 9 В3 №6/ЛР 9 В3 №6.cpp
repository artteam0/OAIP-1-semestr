﻿#include <iostream>
using namespace std;
int main()
{
	float a = -100, b = 100, e = 0.0001, x;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if (( pow(x, 3) + 2 * x - 1) * (pow(a, 3) + 2 * a - 1) <= 0)
		{
			b = x;
		}
		else
			a = x;
	}
	cout << "x = " << x << endl;
	return 0;
}