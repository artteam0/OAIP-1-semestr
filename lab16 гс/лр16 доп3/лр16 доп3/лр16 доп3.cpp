#include<iostream>// Подключаем библиотеку для работы с вводом/выводом.
#include<ctime>// Подключаем библиотеку для работы с случайными числами.
#include<windows.h>// Подключаем библиотеку для работы с кодировкой Windows-1251.

//Функция принимает минимум и максимум и возвращает случайное число в этих пределах.
int randomNumberFunction(int rmn, int rmx);

//Функция выводит матрицу в консоль.
void showMatrix(int** matrix, const int& SIZE_1, const int& SIZE_2);

//Функция заполняет матрицу случайными числами.
void fillingMatrix(int** matrix, const int& SIZE_1, const int& SIZE_2);

//Функция считает количество положительных элементов матрицы.
int counterPositiveElement(int** matrix, const int& SIZE_1, const int& SIZE_2);

//Функция считает количество отрицательных элементов матрицы.
int counterNegativeElement(int** matrix, const int& SIZE_1, const int& SIZE_2);

//Функция считает количество нулевых элементов матрицы.
int counterZeroElement(int** matrix, const int& SIZE_1, const int& SIZE_2);

//Функция считает количество слов в строке.
int counterWord(char* str, const int& SIZE);

int main()//Главная функция. 
{
	setlocale(LC_ALL, "ru");//Функция, которая делает русскую локализацию консоли.
	SetConsoleCP(1251); //Ввод с консоли в кодировке Windows-1251. 
	SetConsoleOutputCP(1251); //Вывод на консоль в кодировке Windows-12511.
	srand((unsigned)time(NULL));//Функция делает числа случайными.
	const int SIZE_STR = 256; //Инициализация константы.
	int choice = 1;//Инициализация переменной.

	//Определяем номер выполняемой операции.
	while (choice)
	{
		std::cout << "Выберите вариант работы:" << std::endl;
		std::cout << "1 - нахождение количества положительных, отрицательных и нулевых элементов в матрице" << std::endl;
		std::cout << "2 - нахождение количества слов в строке" << std::endl;
		std::cout << "3 - выход с программы." << std::endl;
		std::cout << "Ваш выбор:";
		std::cin >> choice;
		if (choice > 3 || choice < 1)
		{
			choice = 0;
			std::cout << "Вы ввели что-то не то..." << std::endl;
		}
		else
		{
			break;
		}
	}

	switch (choice)
	{
	case 1: {
		//Инициализация переменных и указателей.
		int** matrix, N, M, numberNegativeElements, numberPositiveElements, numberZeroElements;

		//Определяем количество строк матрицы.
		std::cout << "Введите количество строк:";
		std::cin >> N;

		//Определяем количество столбцов матрицы.
		std::cout << "Введите количество столбцов:";
		std::cin >> M;

		//Выделяем память матрице.
		matrix = new int * [N];
		for (int i = 0; i < N; i++)
		{
			matrix[i] = new int[M];
		}

		//Заполняем матрицу случайными числами.
		fillingMatrix(matrix, N, M);

		//Выводим матрицу в консоль.
		std::cout << "Матрица:" << std::endl;
		showMatrix(matrix, N, M);

		//Считаем количество отрицательных элементов.
		numberNegativeElements = counterNegativeElement(matrix, N, M);

		//Считаем количество положительных элементов.
		numberPositiveElements = counterPositiveElement(matrix, N, M);

		//Считаем количество нулевых элементов.
		numberZeroElements = counterZeroElement(matrix, N, M);

		//Выводим результат в консоль.
		std::cout << "Количество отрицательных элементов:" << numberNegativeElements << std::endl;
		std::cout << "Количество положительных элементов:" << numberPositiveElements << std::endl;
		std::cout << "Количество нулевых элементов:" << numberZeroElements << std::endl;

		//Очищаем динамическую память.
		for (int i = 0; i < N; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;

		break;
	}

	case 2: {
		//Инициализация переменных и указателей.
		char* line;
		int wordCount;

		//Выделяем память для строки.
		line = new char[SIZE_STR];

		//Вводим строку.
		std::cin.get();
		std::cout << "Введите строку:";
		gets_s(line, SIZE_STR);

		//Считаем количество слов в строке.
		wordCount = counterWord(line, SIZE_STR);

		//Выводим результат в консоль.
		std::cout << "Количество слов в предложении:" << wordCount << std::endl;

		//Освобождение памяти, которая была выделена под массив.
		delete[] line;

		break;
	}

	case 3: {
		//Выводим сообщение в консоль.
		std::cout << "Вы вышли с программы!" << std::endl;

		break;
	}

	}

	return 0;//Главная функция возвращает 0 при успешном выполнении.
}

int randomNumberFunction(int rmn, int rmx)
{
	int number = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
	return number;
}

void showMatrix(int** matrix, const int& SIZE_1, const int& SIZE_2)
{
	for (int i = 0; i < SIZE_1; i++)
	{
		for (int j = 0; j < SIZE_2; j++)
		{
			std::cout << *(*(matrix + i) + j) << ' ';
		}
		std::cout << std::endl;
	}
}

void fillingMatrix(int** matrix, const int& SIZE_1, const int& SIZE_2)
{
	for (int i = 0; i < SIZE_1; i++)
	{
		for (int j = 0; j < SIZE_2; j++)
		{
			*(*(matrix + i) + j) = randomNumberFunction(-20, 20);
		}
	}
}

int counterPositiveElement(int** matrix, const int& SIZE_1, const int& SIZE_2)
{
	int counter{};
	for (int i = 0; i < SIZE_1; i++)
	{
		for (int j = 0; j < SIZE_2; j++)
		{
			if (matrix[i][j] > 0)
			{
				++counter;
			}
		}
	}
	return counter;
}

int counterNegativeElement(int** matrix, const int& SIZE_1, const int& SIZE_2)
{
	int counter{};
	for (int i = 0; i < SIZE_1; i++)
	{
		for (int j = 0; j < SIZE_2; j++)
		{
			if (matrix[i][j] < 0)
			{
				++counter;
			}
		}
	}
	return counter;
}

int counterZeroElement(int** matrix, const int& SIZE_1, const int& SIZE_2)
{
	int counter{};
	for (int i = 0; i < SIZE_1; i++)
	{
		for (int j = 0; j < SIZE_2; j++)
		{
			if (matrix[i][j] == 0)
			{
				++counter;
			}
		}
	}
	return counter;
}

int counterWord(char* str, const int& SIZE)
{
	int counter = 1;
	for (int i = 0; i < SIZE || str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			++counter;
		}
	}
	return counter;
}
