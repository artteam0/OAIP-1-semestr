#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;

void main()
{
	int i, count = 0, maxnum, n;
	float* arr, C, max = 0, p = 1;
	arr = (float*)calloc(200, sizeof(float));
	cout << "Razmer:";
	cin >> n;
	cout << endl << "C:";
	cin >> C;
	cout << endl << "Massive:";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > C)count += 1;
		if (i == 0)max = abs(arr[i]);
		if (abs(arr[i]) > max) { max = abs(arr[i]); maxnum = i; }

	}

	for (i = maxnum + 1; i < n; i++)
	{
		p *= arr[i];
	}
	cout << endl << "col-vo:" << count << "    proizvedenie:" << p;

	free(arr);

}