#define _CRT_SECURE_NO_WARNINGS 1
////三个整数从大到小排序
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	int mid = 0;
//	int min = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a - b)>0 && (b - c)>0)//a>b>c
//	{
//		max = a;
//		mid = b;
//		min = c;
//		printf("%d %d %d", max, mid, min);
//	}
//	else if ((a - c)>0 && (c - b)>0)//a>c>b
//	{
//		max = a;
//		mid = c;
//		min = b;
//		printf("%d %d %d", max, mid, min);
//	}
//	else if ((b - a)>0 && (a - c)>0)//b>a>c
//	{
//		max = b;
//		mid = a;
//		min = c;
//		printf("%d %d %d", max, mid, min);
//	}
//	else if ((b - c)>0 && (c - a)>0)//b>c>a
//	{
//		max = b;
//		mid = c;
//		min = a;
//		printf("%d %d %d", max, mid, min);
//	}
//	else if ((c - a)>0 && (a - b)>0)//c>a>b
//	{
//		max = c;
//		mid = a;
//		min = b;
//		printf("%d %d %d", max, mid, min);
//	}
//	else if ((c - b)>0 && (b - a)>0)//c>b>a
//	{
//		max = c;
//		mid = b;
//		min = a;
//		printf("%d %d %d", max, mid, min);
//	}
//
//
//	return 0;
//}

//三个整数从大到小排序（优化）
//#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		int t = b;
//		b = c;
//		c = t;
//	}
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}


////三角形判断
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a == b) && (a == c)&& (a + b) > c && (a + c) > b && (b + c) > a)//等边三角形
//			printf("Equilateral triangle!\n");
//		else if ((a == c) && (a != b)&& (a + b) > c && (a + c) > b && (b + c) > a)//等腰三角形
//			printf("Isosceles triangle!\n");
//		else if ((a == b) && (a != c)&& (a + b) > c && (a + c) > b && (b + c) > a)//等腰三角形
//			printf("Isosceles triangle!\n");
//		else if ((b == c) && (b != a)&& (a + b) > c && (a + c) > b && (b + c) > a)//等腰三角形
//			printf("Isosceles triangle!\n");
//		else if ((a + b) > c && (a + c) > b && (b + c) > a)//普通三角形
//			printf("Ordinary triangle!\n");
//		else
//			printf("Not a triangle!\n");
//
//
//	}
//
//	return 0;
//}


////三角形判断（对上代码优化）
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))//首先判断是否是三角形
//		{
//			if ((a == b) && (b == c))//判断等边三角形
//				printf("Equilateral triangle!");
//			else if (((a == b) && (a != c))||((a == c) && (a != b))|| (c == b) && (a != c))//判断等腰三角形
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 99; i += 2)
//	{
//		a += (1.0 / i);
//	}
//	for (j = 2; j <= 100;j += 2)
//	{
//		b -= (1.0 / j);
//	}
//	sum = a + b;
//	printf("%lf", sum);
//
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果优化
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int m = 1;
//	double sum = 1;
//	double t = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		m = -m;
//		t = m *1.0 / i;
//		sum += t;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if ((i / 10 == 9) || (i % 10 == 9))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



////打印1000年到2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		year = i;
//		if (((year % 4) == 0 && (year % 1000) != 0) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//
//	return 0;
//}


////求10 个整数中最大值
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		
//		for (j = i+1;j < 10;j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				max = arr[i];
//				arr[i + 1] = max;//保留当前比较最大值
//				/*printf("%d ", max);*/
//				break;
//			}
//			else
//			{
//				max = arr[j];
//				arr[i + 1] = max;//保留当前比较最大值
//				/*printf("%d ", max);*/
//				break;
//			}
//		}
//	}
//	printf("%d ", max);
//	return 0;
//}