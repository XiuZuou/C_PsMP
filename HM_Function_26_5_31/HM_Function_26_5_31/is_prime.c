#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int is_prime(int x)

{
	int i = 0;
	for ( i = 2;i < x;i++)
	{
		if (x % i == 0)
		break;
	}
	if (x == i)
		return x;
	else
		return -1;
}

int main()

{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		int pri = 0;
		pri = is_prime(i);
		if (pri != -1)
			printf("%d ", pri);
	}

	return 0;
}

//int main()
//{
//	int i = 0;
//	
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}