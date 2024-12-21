#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
	char a[100], b[100], c[100];
	int i, e = 0,k=0;
	gets_s(a, 99);
	while (a[e] != '\0')
	{
		e += 1;
	}

	for (i = 0; i < e-1; i++)
	{
		if (a[i] == ' ' || a[i] == a[0])
		{
			i += 1;
			if (a[i - 1] == a[0]) i -= 1;
			while (a[i] != ' ' || a[i]!='\0')
			{
				b[k] = a[i];
				k += 1;
				i += 1;
			}
			b[k] = ' ';
			k += 1;
			i -= 1;
		}
	}


	for (i = 0; i < k; i++)
	{
		cout << b[i];
	}


	/*for ( i = 0; i < e; i++)
	{
		if (a[i] > b[i])
		{
			cout << a;
			break;
		}
		else
		{
			if (b[i] > a[i])
				cout << b;
		}
	}*/
}