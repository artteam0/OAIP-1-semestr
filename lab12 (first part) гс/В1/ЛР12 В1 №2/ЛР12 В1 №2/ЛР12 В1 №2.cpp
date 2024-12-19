#include <iostream>
using namespace std;

void main()
{
	int A[10]={35,33,25,0,0,0,0,0,0,0}, B[10]={35,33,0,0,0,0,0,0,0,0}, 
	int i, j, k, count = 0, brick = 0;;
	cout << "First massive:" << endl;
	for (i = 0; i < 10; i++)
			cout << "Массив A: ";
		for (i = 0; i < 10; i++)
		{
			cout << *(A + i) << " ";
		}
		cout << endl;
	
		cout << "Массив B: ";
		for (i = 0; i < 10; i++)
		{
			cout << *(B + i) << " ";
		}
		cout << endl;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (*(A + i) < *(A + j))
			{
				swap(*(A + i), *(A + j));
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		count = 0;
		for (j = 0; j < 10; j++)
		{
			if (*(A + i) == *(B + j)) count += 1;
		}
		if (count == 0 and brick == 0) { cout << *(A + i); brick = 1; }

	}
}

//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_CTYPE, "rus");
//	srand(time(NULL));
//	int A[10] ={35,33,25,0,0,0,0,0,0,0}, B[10] = {35,33,0,0,0,0,0,0,0,0};
//	int i, j, max = A[0];
//
//	cout << "Массив A: ";
//	for (i = 0; i < 10; i++)
//	{
//		cout << *(A + i) << " ";
//	}
//	cout << endl;
//
//	cout << "Массив B: ";
//	for (i = 0; i < 10; i++)
//	{
//		cout << *(B + i) << " ";
//	}
//	cout << endl;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (*(A + i) < *(A + j))
//			{
//				swap(*(A + i), *(A + j));
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		count = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (*(A + i) == *(B + j)) count += 1;
//		}
//		if (count == 0 and brick == 0) { cout << *(A + i); brick = 1; }
//
//	}
//}
//	cout << "Наибольшее число из первого массива, отсутствующее во втором: " << max;
//
//	return 0;
//}