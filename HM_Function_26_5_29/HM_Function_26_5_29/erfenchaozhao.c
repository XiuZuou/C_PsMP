#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	int flag = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;//mid需要放入循环
		if (key < arr[mid])
		{
			right = mid - 1;
		}
		else if (key > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			flag = 1;
			break;
			//return mid;//这里分支为找到key和没找到key，if只起到判断作用，并非分支
		}
	}
	if (flag == 1)
		return mid;
	else
		return -1;

}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 6;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int left = 0;
	int i = bin_search(arr, left, right, key);
	printf("%d", i);
	return 0;
}

