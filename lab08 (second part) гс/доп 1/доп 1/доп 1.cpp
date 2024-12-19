#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int num, j, sum = 0;
	cout << "Введите количество элементов" << endl;
	cin >> num;

	for (int i = 0; i < num; i++)

	{

		cin >> j;

		if (j % 2 == 0)

		{
			sum += j;
		}

	}
	cout << "Сумма четных элементов равна " << sum << endl;
}