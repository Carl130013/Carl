#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int FINDDATA(int example[], int len, int num)
{
	for (int i = 0;i < len;i++)
	{
		if (example[i] = num)
			{
				return example [i];
			}
	}
	return -1;
}
int main()
{
	int arr[] = { 13,14,79,98,94,2,6,161,151 };
	int len = sizeof(arr) / sizeof(int);
	int num = 13;
	FINDDATA(arr, len, num);
	int c = FINDDATA(arr, len, num);
	printf("%d\n", c);
	return 0;
}