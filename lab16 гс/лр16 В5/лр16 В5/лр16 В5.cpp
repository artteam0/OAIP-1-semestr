#include <iostream>
#include <climits>

int main() {
    setlocale(LC_CTYPE, "rus");
    // Задаем размеры массива
    const int rows = 3; // Количество строк
    const int cols = 4; // Количество столбцов

    // Инициализируем двумерный массив
    int array[rows][cols] = {
        {5, 8, 2, 4},
        {3, 7, 6, 9},
        {6, 2, 8, 10}
    };

    // Находим минимальные элементы в каждой строке и максимальный из них
    int maxMinElement = INT_MIN; // Начальное значение для сравнения

    int maxMinRowIndex = -1; // Индекс строки с максимальным минимальным элементом

    for (int i = 0; i < rows; ++i) {
        int minElement = INT_MAX; // Начальное значение для сравнения

        for (int j = 0; j < cols; ++j) {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
            }
        }

        // Сравниваем минимальный элемент текущей строки с текущим максимальным минимальным элементом
        if (minElement >= maxMinElement) {
            maxMinElement = minElement;
            maxMinRowIndex = i;
        }
    }

    // Печать результата
    if (maxMinRowIndex != -1) {
        std::cout << "Номер строки с максимальным минимальным элементом: " << maxMinRowIndex << std::endl;
    }
    else {
        std::cout << "Массив пуст!" << std::endl;
    }

    return 0;
}
