#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
//先完成main函数的设置
//写出菜单menu（）函数，游戏game（）函数
//需使用rand（），srand（），time（）函数，应添加头文件stdlib.h,time.h
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**********1.play**********\n");
//	printf("**********0.exit**********\n");
//	printf("**************************\n");
//
//}
//
//void game()
//{
//	int count = 10;//设置游戏次数
//	int r = rand() % 100 + 1;//生成1~100随机数
//	int guess = 0;
//	while (count)
//	{
//		printf("你有%d次机会\n", count);
//		printf("请输入数字：");
//		scanf("%d", &guess);
//
//		if (guess < r)
//		{
//			printf("猜小了\n");
//			count--;
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//			count--;
//		}
//		else
//		{
//			printf("恭喜你，猜对了，答案是：%d\n", r);
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//设置随机数种子
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入数字选择是否进入游戏：");
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
//			printf("输入错误，请重新输入\n");
//			break;//swicth语句中将default：写在最后，其中不加入break；似乎无影响
//		}
//	} while (input);
//
//
//
//
//	return 0;
//}



//打印100~200之间的素数
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	//int flag = 1;//不能在此处假设为素数，虽然是全局变量
	//但进入循环后，在循环无法重置为1来进行判断
	for (i = 100;i <= 200;i++)
	{
		int flag = 1;//假设为素数，在此判断可以在循环中重置
		for (j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;//减少计算
			}
		
		}
		if (flag)
			printf("%d ", i);
	}


	return 0;
}