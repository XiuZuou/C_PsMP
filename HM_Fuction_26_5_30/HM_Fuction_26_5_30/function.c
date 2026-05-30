#define _CRT_SECURE_NO_WARNINGS 1

////
////函数实现乘法表
////
//
//#include<stdio.h>
//
//void Multiply_list(int num)
//{
//	int i = 0;
//	int j = 0;
//	int mul = 0;
//	for (i = 1;i <= num;i++)
//	{
//		for (j = 1; j <= i;j++)
//		{
//			mul = i * j;
//			printf("%d * %d = %d  ", j, i, mul);
//			if (i == j)
//				printf("\n");
//		}
//	}
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Multiply_list(num);
//
//	return 0;
//
//}

//
//用函数实现判断闰年
//

#include<stdio.h>
leapyear(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		//return 1;
		printf("是闰年\n");
	else
		//return -1;
		printf("不是闰年\n");
}

//show(int y)
//{
//	if (leapyear(y) == 1)
//		printf("是闰年\n");
//	if (leapyear(y) == -1)
//		printf("不是闰年\n");
//}

int main()
{
	int years = 0;
	scanf("%d", &years);
	leapyear(years);
	//show(leapyear(years));
	return 0;
}
//学习与反思
//1.函数定义中，应处处使用形式参数，且形式参数不要从新定义
//2.明天解决为什么用两个函数会只返回同一个结果