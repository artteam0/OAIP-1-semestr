#include <iostream> 
#include<stdio.h> 
#include<stdlib.h> 

using namespace  std;

void main()
{
	int i, j, n, m, counter = 0, max;
	float* arr, sum = 0, p = 1;
	arr = (float*)calloc(200, sizeof(float));

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i == 0)max = arr[i];
		if (arr[i] > max) { max = arr[i]; counter = i; }
	}
	for (i = 0; i < counter; i++)
	{
		if (arr[i] < 0) p *= arr[i];
		if (arr[i] > 0) sum += arr[i];
	}
	cout << endl << "sum:" << sum << "    proizvedenie:" << p;


	free(arr);
}