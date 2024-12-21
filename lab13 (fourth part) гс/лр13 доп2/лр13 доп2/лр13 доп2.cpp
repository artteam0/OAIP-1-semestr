#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	char base[50];
	int i, j, count = 1, k = 0, prev = 0, cnst = 0, cnst2 = 0;
	gets_s(base, 49);
	for (i = 0; i <= strlen(base); i++)
	{
		j = 0;
		if (base[i] == ' ')
		{
			if (count % 2 == 1)
			{
				_strnset_s(base, ' ', i);

			}
			else
			{
				cnst = i;
				cnst2 = prev;
				while (cnst >= cnst2)
				{
					cout << base[cnst];
					cnst--;
				}
				_strnset_s(base, ' ', i);
			}
			prev = i;
			count += 1;
		}

	}

}