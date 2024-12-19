#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double cost = 10, startCost = 10, p, n, tempCost;
	cout << "Введите процент ";
	cin >> p;
	cout << "Ведите количество лет ";
	cin >> n;

	p = p / 100;
	for (int i = 0; i < n; i++)
	{
		tempCost = cost * p;
		cost += tempCost;
		tempCost = cost * p;
		cost -= tempCost;

	}
	if (startCost > cost) {
		cout << "Цена уменьшилась на " << startCost - cost << "\n";
	}
	else
	{
		cout << "Цена увеличилась на " << cost - startCost << "\n";
	}
	cout <<"Конечная цена " << cost;

	return 0;

}
