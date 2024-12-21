#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	char A[20], k, fst, snd;
	int i = 0;
	cout << "Введите строку: "; cin >> A;
	while (i < strlen(A) - 1)
	{
		fst = A[i + 1];
		A[i + 1] = A[i];
		A[i] = fst;
		i = i + 2;
	}

	for (i = 0; i < strlen(A); i++)
	{
		cout << *(A + i) << " ";
	}
	_getch();
}