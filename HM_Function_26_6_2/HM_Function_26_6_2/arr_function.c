#define _CRT_SECURE_NO_WARNINGS 1
//创建一个整形数组，完成对数组的操作
//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

#include<stdio.h>

#define row 10

void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int j = 0;
	for (j = 0;j < sz;j++)
	{
		printf("%d ", arr[j]);
	}
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int strg = 0;
	while (left < right)
	{
		strg = arr[left];
		arr[left] = arr[right];
		arr[right] = strg;
		left++;
		right--;

	}
}

int main()
{
	int arr1[row] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[row] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	init(arr1, sz1);
	print(arr1, sz1);
	printf("\n");
	reverse(arr2, sz2);
	print(arr2, sz2);
	return 0;
}

