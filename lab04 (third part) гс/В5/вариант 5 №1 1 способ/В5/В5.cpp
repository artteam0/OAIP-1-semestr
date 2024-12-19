#include <iomanip>
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;

}