#define  _CRT_SECURE_NO_WARNINGS 1


//二分查找法
//折半查找法

//找出数字7并且打印下标
#include<stdio.h>

int main()
{
	int flag = 0;
	printf("请输入要查找的数字:>\n");
	scanf("%d", &flag);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < flag)
		{
			left = mid + 1;
		}
		else if (arr[mid] > flag)
		{
			right = mid-1;
		}
		else if(arr[mid]==flag)
		{
			printf("找到了，数字%d的下标是:%d\n",flag, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}

//写一个函数实现二分查找

#include<stdio.h>

int half_find(int* arr, int left, int right,int key)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] == key)
		{
			return mid;
		}
	}
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 0;
	printf("请输入要查找的元素:>\n");
	scanf("%d", &key);
	int flag=half_find(arr, 0, sz - 1,key);
	if (flag == 0)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是:%d\n", flag);
	}
	return 0;
}




