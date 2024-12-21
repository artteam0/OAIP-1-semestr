#include <iostream>
#include <cmath>
using namespace std;

void massiv(); void matrix();
void main()
{
    setlocale(LC_ALL, "ru");
    srand((unsigned)time(NULL));
    int option;
    do
    {
        cout << endl;
        cout << "Введите" << endl;        cout << "1-одномерный массив" << endl;
        cout << "2-работа с матрицей" << endl;        cout << "3-выход" << endl;
        cin >> option;
        switch (option)
        {
        case 1: massiv(); break;
        case 2: matrix(); break;
        case 3: break;
        }
    } while (option != 3);
}

    void massiv() {
    int size, zero = 0, min = 0;    cout << "Введите размер массива "; cin >> size;
    double* arr = new double[size], sum = 0;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zero++;
        }        if (arr[min] > arr[i]) {
            min = i;
        }
    }    if (!zero) {
        cout << "Нулей нет" << endl;
    }
    else {
        cout << "Количество нулей: " << zero << endl;
    }
    cout << "Минимальный элемент: " << arr[min] << endl;    min++;
    while (min < size) {
        sum += arr[min];        min++;
    }    cout << "Сумма элементов: " << sum << endl;
    delete[] arr;
}
    void matrix() {
    int row, col, zero = 0, ser, max_ser = 1, max;
    cout << "Введите количество строк "; cin >> row;    cout << "Введите количество столбцов "; cin >> col;
    int** arr = new int* [row];    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }    cout << "Введите матрицу по строкам:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
        cout << endl;
    }    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (arr[j][i] == 0) {
                zero++;
                break;
            }
        }
    }
    cout << "Количество нулевых столбцов: " << zero << endl;
    for (int i = 0; i < row; i++) {
        ser = 1;        for (int j = 0; j < col; j++)
        {
            if ((j + 1) < col) {
                if (arr[i][j] == arr[i][j + 1]) {
                    ser++;
                    if (ser > max_ser) {
                        max_ser = ser;
                        max = i;
                    }
                }
                else {
                    ser = 1;
                }
            }
        }
    }    if (max_ser == 1) {
        cout << "Серии нет" << endl;
    }
    else {
        cout << "Номер строки с максимальной серией: " << max << endl;
    }    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }    delete[] arr;
}