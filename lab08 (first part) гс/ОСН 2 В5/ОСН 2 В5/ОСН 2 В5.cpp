#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	double p = -2, y, q = 1;
	for (int i = 1; i <= 5; i++)
		
	{
		cout << "Введите y: " << endl;
		cin >> y;
		q = q * (y - 5);
	}
	cout <<"Ответ: " << p + q << endl;
}