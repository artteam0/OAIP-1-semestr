#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char a[100];
	int i, j, e = 0;
	gets_s(a, 99);
	while (a[e] != '\0')
	{
		e += 1;
	}
	for ( i = 0; i < e - 1; i++)
	{
		if (a[i] == '(')
		{
			i = i - 1;
			while (a[i] != ')') 
			{
				a[i] = '\a';
				i += 1;
			}
			a[i] = '\a';
		}
	}
	cout << a;
	return 0;
}
