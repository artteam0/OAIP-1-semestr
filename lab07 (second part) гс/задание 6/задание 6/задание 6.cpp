#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	double y = 1.4e-3, x = 0.2, m = 4, p, q, j;
	j = 5;

	while (j <= 11)
	{
		cout << j << endl;
		p = exp(sin(j / x)) * log(x / y) * x;
		cout << p << endl;

		if (p <= (y * y))
		{
			q = sqrt(p / m);
		}

		else

			if (p > (y * y))
			{
				q = (sqrt(2 * x)) / (j + p);
			}

		cout << q << endl;
		
		j = j + 2;
	}
	return 0;
}