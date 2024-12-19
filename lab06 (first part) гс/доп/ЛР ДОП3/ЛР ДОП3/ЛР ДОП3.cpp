#include <iostream>

int main() {
    setlocale(LC_CTYPE, "rus");
    int num;
    int signChanges = 0;
    int prevSign = 0;

    std::cout << "Введите последовательность чисел (для завершения введите 0):" << std::endl;

    do {
        std::cin >> num;

        if (num != 0) {
            int currentSign = (num > 0) ? 1 : -1;

            if (currentSign != prevSign && prevSign != 0) {
                signChanges++;
            }

            prevSign = currentSign;
        }
    } while (num != 0);

    std::cout << "Количество смен знака: " << signChanges << std::endl;

    return 0;
}