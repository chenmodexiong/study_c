#define  _CRT_SECURE_NO_WARNINGS 1


//
//#include<stdio.h>
//
//void sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1-i; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = {8,9,7,5,6,4,2,3,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//

//错误代码：演示
//
//#include<stdio.h>
////
////传参时int arr[]与int* arr完全相同；
////
//void sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序；
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 8,8,7,7,6,4,2,3,1 };
//	sort(arr);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//
//#include<stdio.h>
////
////传参时int arr[]与int* arr完全相同；
////
//void sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序；
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 8,8,7,7,6,4,2,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//











