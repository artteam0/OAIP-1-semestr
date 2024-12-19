#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "rus");
	float c, i, d, j, y = 1.6e-4, x = -1, k = 6;
	for  (j = 1; j <=3; j++)
	{
		std::cout << "Введите число" << std::endl;
		std::cin >> i;
		c = (i / k) - (sqrt(y) / 0.4);
		std::cout << c << std::endl;
		d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
		std::cout << d << std::endl;
	}
}