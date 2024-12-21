#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	char tmp[20];
	int i, count = 0;
	cout << "Введите строку: ";
	gets_s(tmp);
	for (i = 0; i < strlen(tmp); i++)
	{
		if (tmp[i] == '.' || tmp[i] == ',')
		{
			count++;
		}
	}
	cout << "Количество точек и запятых: " << count;
	_getch();
}