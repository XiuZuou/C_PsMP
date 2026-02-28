#define _CRT_SECURE_NO_WARNINGS 1
////测试数组元素的判别
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	int i = 0;
//	for (i = 0;i <= 3;i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}


////猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//
//	return;
//}
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字>:");
//		scanf("%d", &guess);
//		if (guess > r)
//			printf("猜大了\n");
//		if (guess < r)
//			printf("猜小了\n");
//		if (guess == r)
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//
//
//	}
//
//
//
//
//}
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//猜数字游戏（自主完成）（限制次数）





////在屏幕上输出9*9乘法口诀表
////分析：
////以a*b为例，99乘法口诀表中，每行中的b均相同，所以b应在外层循环
////每列的乘法表达式均从1开始，所以a应在内层循环
////又因为每行表达式个数等于b，所以当表达式个数等于b时应先换行，再跳出内层循环
//#include<stdio.h>
//int main()
//{
//
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= 9;j++)
//		{
//			n = i * j;
//			printf("%d×%d=%d	", j, i, n);
//			
//			
//			if (j == i)
//			{
//				printf("\n");
//				break;
//			}
//			
//
//		}
//	}
//
//
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
////例如：
////输入：20 40
////输出：20
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	int i = 0;
//	printf("请输入两个数：");
//	scanf("%d%*c%d", &a, &b);
//	for (i = 1;i <= a;i++)
//	{
//		if (a % i == b % i)
//			r = i;
//	}
//	printf("%d", r);
//
//	return 0;
//}


//写一个代码：打印100~200之间的素数
#include<stdio.h>
int main()
{
	int n = 100;
	int j = 0;

	while (n <= 200)
	{
		int flag = 1;//用于判断是否为素数
		for (j = 2;j < n;j++)
		{
			if (n % j == 0)
			//{
				flag = 0;
				//break;
			//}
		}

		if (flag == 1)
			printf("%d ", n);
		n = n + 1;

	}
	return 0;
}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	//循环产生100~200的数字
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//循环产生2~i-1之间的数字
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//
//