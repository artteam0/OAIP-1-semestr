#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	float n, p, i, j, s, sum = 0;
	cout << "Введите кол-во лет n" << endl;
	cin >> n;
	cout << "Введите процент p" << endl;
	cin >> p;
	for (i = 1; i <= n; i++)
	{
		cout << "Введите " << i << " число " << endl;;
		cin >> s;
		for ( j = 1; j <= n - i; j++)
		{
			s = s - s * p * 0.01;
		}
		sum = sum + s;
	}
	cout << "Общая стоимость накопленного оборудования: " << sum << endl;
}