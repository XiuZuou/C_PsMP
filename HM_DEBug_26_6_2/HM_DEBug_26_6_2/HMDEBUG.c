#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水问题
//这个问题并非看上去那么简单，购买汽水后，会得到瓶子，瓶子可以去换汽水，换后的汽水还能拿到瓶子，最后仅能换1瓶
//汽水时结束
//似乎可以使用递归，返回瓶子数量？
#include<stdio.h>
//
//int main()
//{
//	int cost = 1;
//	int bottles = 0;
//	int recycle = bottles / 2;
//	int sum = 0;
//	int money = 0;
//	bottles;
//	while (scanf("%d", &money) != EOF)
//	{
//		sum = money / cost + ;
//	}
//	return 0;
//}

int main()
{
	int money = 20;//题目要求20元买汽水
	int bottles = 0;
	int soda = 0;
	int change = 0;
	//int B_change = 0;
	int sum = 0;
	soda = money;//汽水1元/瓶
	bottles = soda;
	while (bottles >= 2)//瓶子数量大于等于2就可以继续兑换汽水
	{
		bottles = soda;
		change = bottles / 2;
		sum += soda;
		soda = change;
		
	} 
	printf("20元可以喝的汽水数量为：%d", sum);

	return 0;
}