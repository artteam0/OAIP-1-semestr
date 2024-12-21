#include<iostream>
#include<string>
using namespace std;

// Функция для создания динамического двумерного массива
int** createDynamicArray(int rows, int cols) {
    int** array = new int * [rows]; // Выделение памяти под указатели на строки
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols]; // Выделение памяти под элементы каждой строки
    }
    return array; // Возвращение указателя на созданный массив
}

// Функция для освобождения памяти, выделенной под динамический двумерный массив
void deleteDynamicArray(int** array, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[]array[i]; // Освобождение памяти для каждой строки
    }
    delete[]array; // Освобождение памяти для массива указателей на строки
}

// Функция для проверки нахождения числа на главной диагонали
bool isNumberOnDiagonal(int** array, int rows, int cols, int number) {
    for (int i = 0; i < rows && i < cols; ++i) {
        if (array[i][i] == number) {
            return true; // Если число найдено на главной диагонали, возвращается true
        }
    }
    return false; // Если число не найдено на главной диагонали, возвращается false
}

// Функция для вывода строк, начинающихся с буквы "b"
void printStringsStartingWithB(string* strings, int numStrings) {
    cout << "Строки, начинающиеся с буквы 'b':" << endl;
    for (int i = 0; i < numStrings; ++i) {
        if (!strings[i].empty() && tolower(strings[i][0]) == 'b') {
            cout << strings[i] << endl; // Вывод строки, если она не пуста и начинается с 'b'
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUS"); // Установка русской локали для корректного отображения текста

    int choice;

    do {
        cout << "Выберите вариант работы:" << endl;
        cout << "1 - проверка числа на главной диагонали" << endl;
        cout << "2 - вывод строк, начинающихся с 'b'" << endl;
        cout << "0 - выход из программы" << endl;
        cout << "Вашвыбор: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int N, M;
            cout << "Введите количество строк N: ";
            cin >> N;
            cout << "Введите количество столбцов M: ";
            cin >> M;

            int** matrix = createDynamicArray(N, M); // Создание двумерного массива

            cout << "Введите элементы массива:" << endl;
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < M; ++j) {
                    cout << "matrix[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j]; // Вводэлементовмассива
                }
            }

            int number;
            cout << "Введите число для проверки: ";
            cin >> number;

            if (isNumberOnDiagonal(matrix, N, M, number)) {
                cout << "Число " << number << " находится на главной диагонали." << endl;
            }
            else {
                cout << "Число " << number << " не находится на главной диагонали." << endl;
            }

            deleteDynamicArray(matrix, N); // Освобождениепамяти
            break;
        }
        case 2: {
            int numStrings;
            cout << "Введите количество строк текста: ";
            cin >> numStrings;
            cin.ignore();
            string* strings = new string[numStrings]; // Созданиемассивастрок

            cout << "Введите строки текста:" << endl;
            for (int i = 0; i < numStrings; ++i) {
                cout << "Строка " << i + 1 << ": ";
                getline(cin, strings[i]); // Вводстроктекста
            }

            printStringsStartingWithB(strings, numStrings); // Выводстрок, начинающихсяс 'b'

            delete[] strings; // Освобождениепамяти
            break;
        }
        case 0: {
            cout << "Выход из программы." << endl;
            break;
        }
        default:
            cout << "Неверный выбор. Повторитеввод." << endl;
        }
    } while (choice != 0);

    return 0;
}
