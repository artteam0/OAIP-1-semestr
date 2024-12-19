#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "rus");
	float p, q, i;
	cout << "Введите первоначальную цену p" << endl;
	cin >> p;
	cout << "Введите конечную цену q" << endl;
	cin >> q;
	i = 0;
	while (p < q)
	{
		p = p + p * 0.03;
		i = i + 1;
	}
	cout << "Конечная цена: " << p << endl;
	cout << "Кол-во дней: " << i << endl;
}
