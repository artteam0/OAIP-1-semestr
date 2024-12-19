#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "rus");
    int C1, C2, halfC1, halfC2, i;
    cout << "Введите кол-во литров в первом сосуде C1: ";
    cin >> C1;
    cout << "Введите кол-во литров во втором сосуде C2: ";
    cin >> C2;
    for (i = 1; i <= 12; i++) 
    {
        halfC1 = C1 / 2;
        C1 = C1 - halfC1;
        C2 = C2 + halfC1;
        halfC2 = C2 / 2;
        C2 = C2 - halfC2;
        C1 = C1 + halfC2;
    }

    cout << "В первом сосуде будет " << C1 << " литров воды" << endl;
    cout << "Во втором сосуде будет " << C2 << " литров воды" << endl;

    return 0;
}
