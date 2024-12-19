#include <iostream>

int main() {
    using namespace std;
    setlocale(LC_CTYPE, "rus");
    int ans;
    cout << "Добро пожаловать в наше кафе!\n";
    cout << "Что будете заказывать?\n";
    cout << "1. Кофе\n" << "2. Чай\n" << "3. Газировка\n";
    cin >> ans;
    switch (ans) {
    case 1: cout << "Какой кофе вы бы хотели?\n";
        cout << "1. Эспрессо\n" << "2. Американо\n" << "3. Капучино\n" << "4. Латте\n";
        cin >> ans;
        switch (ans) {
        case 1: cout << "3 рубля к оплате, ожидайте\n";
            break;
        case 2: cout << "3 рубля к оплате, ожидайте\n";
            break;
        case 3: cout << "5 рублей к оплате, ожидайте\n";
            break;
        case 4: cout << "6 рублей к оплате, ожидайте\n";
            break;
        default: cout << "Введено некорректное значение\n";
        }
        break;
    case 2: cout << "Какой чай вам приготовить?\n";
        cout << "1. Черный чай\n" << "2. Зеленый чай\n" << "3. Каркаде\n" << "4. Ромашковый чай\n";
        cin >> ans;
        switch (ans) {
        case 1: cout << "2 рубля к оплате, ожидайте\n";
            break;
        case 2: cout << "2 рубля к оплате, ожидайте\n";
            break;
        case 3: cout << "4 рубля к оплате, ожидайте\n";
            break;
        case 4: cout << "3 рубля к оплате, ожидайте\n";
            break;
        }
        break;
    case 3: cout << "Какую газировку будете заказывать?\n";
        cout << "1. Coca-Cola\n" << "2.Fanta\n" << "3.Sprite\n";
        cin >> ans;
        switch (ans) {
        case 1: cout << "2 рубля к оплате, ожидайте\n";
            break;
        case 2: cout << "2 рубля к оплате, ожидайте\n";
            break;
        case 3: cout << "2 рубля к оплате, ожидайте\n";
            break;
        default: cout << "Введено некорректное значение!\n";
        }
    default: cout << "Введено некорректное значение!\n";
    }
    return 0;
}