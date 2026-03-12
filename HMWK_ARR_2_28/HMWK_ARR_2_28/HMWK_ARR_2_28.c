#define _CRT_SECURE_NO_WARNINGS 1

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“ * ”组成的X形图案。

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1;i <= n; i++)
//		{
//			for (j = 1;j <= n;j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n + 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




////描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”正方形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
//输出描述：
//针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i == 0 || j == 0)
//					printf("* ");
//				else if (i == n-1 || j == n-1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


//
//矩阵置换
//

#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int j = 0;
	int arr[10][10] = {0};
	while (scanf("%d %d", &n, &m) != EOF)
	{
		
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < m;j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}

		for (i = 0;i < m;i++)
		{
			for (j = 0;j < n;j++)
			{
				printf("%d ", arr[j][i]);
			}
			printf("\n");
		}
	}
	
	return 0;
}

//从新分析再写一遍