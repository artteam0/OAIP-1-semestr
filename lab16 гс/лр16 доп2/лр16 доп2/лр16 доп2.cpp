#include<iostream>// Подключаем библиотеку для работы с вводом/выводом.
#include<ctime>// Подключаем библиотеку для работы с случайными числами.
#include<windows.h>// Подключаем библиотеку для работы с кодировкой Windows-1251.

//Функция принимает минимум и максимум и возвращает случайное число в этих пределах.
int randomNumberFunction(int rmn, int rmx);

//Функция выводит матрицу в консоль.
void showMatrix(int** matrix, const int& SIZE_1, const int& SIZE_2);

//Функция заполняет матрицу случайными числами.
void fillingMatrix(int** matrix, const int& SIZE_1, const int& SIZE_2);

//Функция ищет в матрице элемент d.
void searchNumberD(int** matrix, const int& SIZE_1, const int& SIZE_2, const int& D, int& numberLine);

//Функиция считаем сумму кодов символов строки.
int sumElementCodes(char* str, const int& SIZE);

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
		std::cout << "1 - нахождение числа d в матрице и вывод строки" << std::endl;
		std::cout << "2 - нахождение суммы кодов символов строки" << std::endl;
		std::cout << "3 - выход с программы." << std::endl;
		std::cout << "Вашвыбор:";
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
		int** matrix, N, M, d, numberLine{};

		//Определяем количество строк матрицы.
		std::cout << "Введите количество строк:";
		std::cin >> N;

		//Определяем количество колон матрицы.
		std::cout << "Введите количество колон:";
		std::cin >> M;

		//Вводим число, которое нужно найти.
		std::cout << "Введите число d:";
		std::cin >> d;

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

		//Ищем строку в которой находится число d.
		searchNumberD(matrix, N, M, d, numberLine);
		if (numberLine == 0) {
			std::cout << "Данная цифра не найдена!" << std::endl;
		}
		else {
			std::cout << "Данная цифра находится в строке " << numberLine << std::endl;
		}

		//Очищаемдинамическуюпамять.
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
		int sumSymbol{};

		//Выделяем память для строки.
		line = new char[SIZE_STR];

		//Вводим строку.
		std::cin.get();
		std::cout << "Введите строку:";
		gets_s(line, SIZE_STR);

		//Считаемсуммусимволовстроки.
		sumSymbol = sumElementCodes(line, SIZE_STR);

		//Выводим результат в консоль.
		std::cout << "Сумма символов строки равна:" << sumSymbol << std::endl;

		//Освобождение памяти, которая была выделенна под массив.
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
			*(*(matrix + i) + j) = randomNumberFunction(1, 40);
		}
	}
}

void searchNumberD(int** matrix, const int& SIZE_1, const int& SIZE_2, const int& D, int& numberLine)
{
	for (int i = 0; i < SIZE_1; i++)
	{
		for (int j = 0; j < SIZE_2; j++)
		{
			if (matrix[i][j] == D)
			{
				numberLine = j;
				break;
			}
		}
		if (matrix[i][numberLine] == D)
		{
			numberLine = i + 1;
			break;
		}
	}
}

int sumElementCodes(char* str, const int& SIZE)
{
	int sum{};
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		sum += (str[i] + 256);
	}
	return sum;
}
