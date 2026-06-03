#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
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
//