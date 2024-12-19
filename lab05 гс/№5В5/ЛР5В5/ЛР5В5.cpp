#include <iostream>

int main() {
    setlocale(LC_CTYPE, "rus");
    int A, B, C, D;

    std::cout << "Введите четыре переменные: ";
    std::cin >> A >> B >> C >> D;

    if (A % 2 == 0 && B % 2==0 && C % 2==0 && D % 2 == 0) {
        std::cout << "Все числа четные." << std::endl;
    }
    else {
        std::cout << "Хотя бы одно число нечетное." << std::endl;
    }

    return 0;
}