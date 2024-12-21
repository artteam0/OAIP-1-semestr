#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	char base[50], end[11];
	int i, j, count = 0, k = 0, prev = 0;
	gets_s(base, 49);
	gets_s(end, 10);
	for (i = 0; i <= strlen(base) + 1; i++)
	{
		if (base[i] == ' ')
		{
			count = strlen(end);
			while (count != 0)
			{
				count--;
				if (base[i - strlen(end) + count] == end[count]) k += 1;
			}
			if (k == strlen(end))
			{
				count = prev;
				while (count <= i)
				{

					cout << base[count];
					count++;
				}
				k = 0;

			}
			prev = i;
		}

	}
}