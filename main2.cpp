#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int arr[] = { 22,12,13,35,28,24,47,42,49 };
	int maxindex[] = { 22,35,49 };
	int start[] = { 0,3,6 };
	int key = 24;
	int i, j;
	for ( i = 0;i < 3; i++)
	{
		if (maxindex[i] < key)
		{
			continue;
		}
		if (maxindex[i] >= key)
		{
			
			break;

		}
	}
	int begin = start[i];
	int end;
	if (i + 1 < 3)//证明还存在第三组，将end设置为第三组第一个数据即可
	{
		end = start[i + 1];
	}
	for (j = begin;j < end;j++)
	{
		if (arr[j] == key)
		{
			
			printf("%d\n", j);
			return j;
		}
		else
		{
			continue;
		}
	}

}






