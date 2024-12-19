#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");



	char tmp[33]; unsigned int A, B, maskA = 0, maskB = 0;
	int n, p, m, q; cout << "Число A = "; cin >> A;
	cout << "Число битов n = "; cin >> n; cout << "Позиция бита p = "; cin >> p;
	for (int i = 0; i < n; i++) {
		maskA <<= 1;
		maskA++;
	}
	maskA <<= p; maskA >>= (n + 1);
	_itoa_s(A, tmp, 2); cout << "A = " << tmp << endl; _itoa_s(maskA, tmp, 2); cout << "Маска для А: " << tmp << endl;
	_itoa_s(A | maskA, tmp, 2); cout << "Новое A: " << tmp << endl; cout << "Число B = "; cin >> B;
	cout << "Число битов m = "; cin >> m; cout << "Позиция бита q "; cin >> q;
	for (int i = 0; i < m; i++) {
		maskB <<= 1;
		maskB++;
	}
	maskB <<= q; _itoa_s(B, tmp, 2); cout << "B = " << tmp << endl;
	_itoa_s(maskB, tmp, 2); cout << "Маска для B: " << tmp << endl; _itoa_s(B | maskB, tmp, 2); cout << "Новое B: " << tmp << endl;

}
//------------------------
//*char tmp[33];
//unsigned int A, maskA = 170; cout << "Число A = "; cin >> A;
//_itoa_s(A, tmp, 2); cout << "A = " << tmp << endl; _itoa_s(maskA, tmp, 2); cout << "Маска для А: " << tmp << endl;
//_itoa_s(A | maskA, tmp, 2); cout << "Новое A: " << tmp << endl;*/
//------------------------
//*char tmp[33]; unsigned int A, B;
//int n, m; cout << "Число A = "; cin >> A;
//cout << "Число B = "; cin >> B; cout << "Позиция n = "; cin >> n;
//cout << "Позиция m = "; cin >> m; _itoa_s(A, tmp, 2); cout << "A = " << tmp << endl;
//_itoa_s(B, tmp, 2); cout << "B = " << tmp << endl; int maskA = (A >> n) & 7;
//int maskB = ~(7 << m); _itoa_s((B & maskB) | (maskA << m), tmp, 2); cout << "B = " << tmp << endl;
//
//}
