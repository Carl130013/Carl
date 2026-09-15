#include <stdio.h>
int add(int x, int y) //加法函数
{
	return x + y;
}

int sub(int x, int y)//减法函数
{
	return x - y;
}

int mul(int x, int y)//乘法函数
{
	return x * y;
}

int divide(int x, int y)//除法函数
{
	return x / y;
}

int main()
{

	while (1)
	{
		printf("简易整数计算器\n");
		printf("请输入对应的字母选择计算方法\n");
		printf("1-加法，2-减法，3-乘法，4-除法\n");
		int x;
		int ret = scanf("%d", &x);
		if (x == 1)
		{
			while (1)
			{
				int a, b;
				int ret = scanf("%d %d", &a, &b);
				if (a == 0 && b == 0)
				{
					break;
				}
				printf("结果=%d\n", add(a, b));
			}





		}





		else if (x == 2)
		{
			while (1)
			{
				int a, b;
				int ret = scanf("%d %d", &a, &b);
				if (a == 0 && b == 0)
				{
					break;
				}
				printf("结果=%d\n", sub(a, b));
			}
		}
		else if (x == 3)
		{
			while (1)
			{
				int a, b;
				int ret = scanf("%d %d", &a, &b);
				if (a == 0 && b == 0)
				{
					break;
				}
				printf("结果=%d\n", mul(a, b));
			}

		}
		else if (x == 4)
		{
			while (1)
			{
				int a, b;
				int ret = scanf("%d %d", &a, &b);
				if (a == 0 && b == 0)
				{
					break;
				}
				printf("结果=%d\n", divide(a, b));
			}
		}
		
	}
	return 0;
}
