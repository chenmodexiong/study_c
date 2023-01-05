#define  _CRT_SECURE_NO_WARNINGS 1


//
//#include<stdio.h>
//
//int main()
//{
//	//char* p = "abcdef";
//	//*p = 'w';//常量字符串不能被修改，程序跑起来会崩掉；
//	
//	const char* p = "abcdef";//更加严谨的写法,很多编译器要求加上const
//	printf("%s\n", p);
//
//	return 0;
//}


//一道笔试题

//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//杨氏矩阵
//
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//
//#include <stdio.h>
//
//#define ROW 4
//#define COL 4
//
//void Find_num(int (*p)[COL], int row, int col,int n)
//{
//		int i = 1;
//		int j = 0;
//		//从左下角开始查找
//		while ((*(p + row - i))[j] > n)
//		{
//			i++;
//			if (i > row)
//			{
//				printf("没有找到n\n");
//				break;
//			}
//		}
//		while ((*(p + row - i))[j] < n)
//		{
//			j++;
//			if ((*(p + row - i))[j] == n)
//			{
//				printf("n的坐标是:%d %d\n", row - i+1, j+1);
//				break;
//			}
//			if (j > col)
//			{
//				printf("没有找到n\n");
//				break;
//			}
//		}
//}
//
//int main()
//{
//	int arr[ROW][COL] = { {1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
//	printf("请输入要查找的数字:\n");
//	int n = 0;
//	scanf("%d", &n);
//	Find_num( arr, ROW, COL,n);
//
//	return 0;
//}


//杨氏矩阵
//
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//
//#include <stdio.h>
//
//#define ROW 4
//#define COL 4
//
//int Find_num(int arr[ROW][COL], int row, int col, int n)
//{
//	int i = 0;
//	int j = col-1;
//	while (i < row && j>0 )
//	{
//		if (arr[i][j] > n)
//		{
//			j--;
//		}
//		else if(arr[i][j] < n)
//		{
//			i++;
//		}
//		else
//		{
//			return 1;//找到返回1
//		}
//	}
//	return 0;//找到返回0
//}
//
//int main()
//{
//	int arr[ROW][COL] = {{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
//	printf("请输入要查找的数字:\n");
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Find_num( arr, ROW, COL,n);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}



#include <stdio.h>

#define ROW 4
#define COL 4

int Find_num(int arr[ROW][COL], int row, int col, int n)
{
	int i = 0;
	int j = col - 1;
	while (i < row && j>0)
	{
		if (arr[i][j] > n)
		{
			j--;
		}
		else if (arr[i][j] < n)
		{
			i++;
		}
		else
		{
			printf("找到了，n的坐标是:%d %d", i+1, j+1);
			return 0;
		}
	}
	printf("没找到n\n");
	return 0;
}

int main()
{
	int arr[ROW][COL] = { {1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
	printf("请输入要查找的数字:\n");
	int n = 0;
	scanf("%d", &n);
	Find_num(arr, ROW, COL, n);

	return 0;
}







