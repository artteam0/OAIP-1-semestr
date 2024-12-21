#include <iostream> 
#include<stdio.h> 
#include<stdlib.h> 
using namespace std;

void main()
{
	int k, i, zero, sum = 0, count = 0, * arr;
	arr = (int*)calloc(200, sizeof(int));
	cin >> k;
	for (i = 0; i < k; i++)
	{
		cin >> arr[i];
		if (arr[i] > 0) count += 1;
		if (arr[i] == 0)zero = i;
	}
	for (i = i - 1; i > zero; i--)
	{
		sum = sum + arr[i];
	}

	cout << endl << "Col-vo:" << count << "    " << "Sum:" << sum;

	free(arr);
}