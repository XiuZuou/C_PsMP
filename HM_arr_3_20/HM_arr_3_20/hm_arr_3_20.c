#define _CRT_SECURE_NO_WARNINGS 1

//空心正方形图案
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d",&n) != EOF)
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i == 0 || j == 0)
//					printf("* ");
//				else if (i == n-1 ||j == n-1)
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

////矩阵转置
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	while (scanf("%d %d", &m, &n) != EOF)
//	{
//		//数组输入
//		for(i = 0;i < m;i++)
//		{
//			for (j = 0;j < n;j++)
//				scanf("%d", &arr[i][j]);
//		}
//	
//		////检测数组是否正确
//		//for (i = 0;i < m;i++)
//		//{
//		//	for (j = 0;j < n;j++)
//		//		printf("%d ", arr[i][j]);
//		//	printf("\n");
//
//		//}
//		//矩阵转置
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < m;j++)
//				printf("%d ", arr[j][i]);
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//// X形图案
//
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
//				if (i == j)
//					printf("*");
//				else if (i + j == n-1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//逆序输出


//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0;i<10;i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i<10;i++)
//		printf("%d ", arr[9 - i]);
//
//	return 0;
//}

////【一维数组】输入10个整数，求平均值
//
//#include<stdio.h>
//
//int main()
//
//{
//	int arr[10] = { 0 };
//	double avg = 0.0;
//	int i = 0;
//	int sum = 0;
//	for (i = 0;i < 10;i++)
//		scanf("%d",&arr[i]);
//	for (i = 0;i < 10;i++)
//		sum += arr[i];
//	avg = sum / 10.0;
//	printf("%lf", avg);
//	return 0;
//}

//【一维数组】交换数组,将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//
//#include<stdio.h>
//
//int main()
//
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,0 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0;i < 5;i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0;i < 5;i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0;i < 5;i++)
//		printf("%d ", arr2[i]);
//
//	return 0;
//}

//有序序列合并
//描述
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//输入描述：
//输入包含三行，
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数，用空格分隔。
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int cmp = 0;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		for (i = 0;i < n;i++)
//			scanf("%d", &arr1[i]);
//		for (j = 0;j < m;j++)
//			scanf("%d", &arr2[j]);
//		int i = 0;
//		int j = 0;
//		while (i < n && j < m)
//		{
//			if (arr1[i] > arr2[j])
//			{
//				printf("%d ", arr2[j]);
//				j++;
//			}
//			else
//			{
//				printf("%d ", arr1[i]);
//				i++;
//			}
//		}
//		while (i < n)
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		while (j < m)
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//
//	return 0;
//}

//
//重新写一次
//
#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	while (scanf("%d%d", &n, &m) != EOF)
	{
	//数组输入
		for (int i = 0;i < n;i++)
			scanf("%d", &arr1[i]);
		for (int i = 0;i < m;i++)
			scanf("%d", &arr2[i]);
	//进行比较排序
		int i = 0;
		int j = 0;
		while (i < n && j < m)
		{
			if (arr1[i] < arr2[j])
			{
				printf("%d ", arr1[i]);
				i++;
			}
			else
			{
				printf("%d ", arr2[j]);
				j++;
			}
		}
		while (i < n)
		{
			printf("%d ", arr1[i]);
			i++;
		}
		while (j < m)
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}


	return 0;
}