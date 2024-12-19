#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Введите кол-во сбитых самолётов" << endl;
	cin >> a;
	cout << "Введите кол-во сбитых ракет" << endl;
	cin >> b;
	cout << "Введите кол-во сбитых спутников" << endl;
	cin >> c;

	cout << "Всего игрок получил " << 50 * a + 100 * b + 200 * c << " очков";
}