#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int FINDDATA(int example[], int len, int num)
{
	int min = 0;
	int max = len - 1;
	while (min <= max)
	{
		int index = (min + max) / 2;
		if (example[index] <num)
		{
			min = index + 1;
		}
		else if (example[index] > num)
		{
			max = index - 1;
		}
		else if (example[index] == num)
		{
			return index;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 13, 14, 16, 18, 82, 91, 103 };
	int len = sizeof(arr) / sizeof(int);
	FINDDATA(arr, len, 103);
	int res = FINDDATA(arr, len, 103);
	printf("%d\n", res);
	return 0;
}
