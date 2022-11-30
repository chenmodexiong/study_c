#define  _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 84,83,82,81,80 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序
//	//先确定走几趟
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//判断比较次数并交换
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
//	//打印数组arr
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 84,83,88,87,61 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序
//	//先确定走几趟
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//判断比较次数并交换
//		for (j = i+1; j < sz ; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	//打印数组arr
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int arr[] = { 84,83,88,87,61 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一共要几趟
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int k = i;
//		for (j = i + 1 ; j < sz ; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				//确定k是较小数的位置
//				k = j;
//			}
//		}
//		//确定i是较小数的位置，若不是则交换
//		if (i != k)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//	}
//	//打印数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//矩阵转置

//#include<stdio.h>
//#define ROW 3
//#define COL 3
//int main()
//{
//	int arr[ROW][COL] = { {100,200,300},
//					{400,500,600},
//					{700,800,900} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW-1; i++)
//	{
//		for (j = 0; j < COL-1; j++)
//		{
//			int tmp = arr[i][j + 1];
//			arr[i][j + 1] = arr[i + 1][j];
//			arr[i + 1][j] = tmp;
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//#define ROW 3
//#define COL 3
//
//int main()
//{
//	int arr[ROW][COL] = { {100,200,300},
//					{400,500,600},
//					{700,800,900} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < COL; i++)
//	{
//		for (j = 0; j < ROW; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int num = rand();
//	printf("%d\n", num);
//	return 0;
//}

////导入静态库
//#pragma comment(lib,"add_11_2.lib")
//
//#include<stdio.h>
//#include"add.h"
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("sum=%d\n", Add(x, y));
//}

//#include<stdio.h>
//int my_strlen(char* pa)
//{
//	if (*pa != '\0')
//		return 1 + my_strlen(pa + 1 );
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

////汉诺塔问题
//
//#include<stdio.h>
//
//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)     //当只有一个圆盘时
//	{
//		printf("%c->%c\n", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);//把n-1个圆盘从A绕过C挪到B上
//		printf("%c->%c\n", A, C);//把A底下那个圆盘挪到C上
//		hanoi(n - 1, B, A, C);//问题变成了把n-1个圆盘从B挪到C上，这样递归下去；
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

//逆序单词

//#include<stdio.h>
//#include<string.h>
//void reverse(char* start, char* end)
//{
//    while (start < end)
//    {
//        int tmp = *end;
//        *end = *start;
//        *start = tmp;
//        start++;
//        end--;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    scanf("%[^\n]", arr);
//    getchar();
//    int len = strlen(arr);
//    char* end = arr + (len - 1);
//    reverse(arr, end);
//    char* temp = arr;
//    int i = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (arr[i] == ' ' || arr[i] == '\0')
//        {
//            reverse(temp, arr + i - 1);
//            temp = arr + i + 1;
//        }	
//    }
//    printf("%s\n", arr);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 1;
//    while (1)
//    {
//        if (a * i % b == 0)
//        {
//            break;
//        }
//        i++;
//    }
//    printf("%d\n", a*i);
//    return 0;
//}
// 



//#include <stdio.h>
////求最大公倍数
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int max = (a > b ? a : b);
//    int i = max;
//    while (1)
//    {
//        if (i % a == 0 && i % b == 0)
//        {
//            break;
//        }
//        i++;
//    }
//    printf("%d\n", i);
//    //效率比较高的方式
//    // int i = 1;
//    // while (1)
//    // {
//    //     if (a * i % b == 0)
//    //     {
//    //         break;
//    //     }
//    //     i++;
//    // }
//    // printf("%d\n", a*i);
//    return 0;
//}

//倒置单词,字符串

//#include<stdio.h>
//#include<string.h>
////封装的倒置函数
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int sz = (int)strlen(arr);
//	//先倒置字符串
//	char* end = arr + sz - 1;
//	reverse(arr, end);
//	//再逆序每个单词
//	//每个单词以空格作分隔
//	char* start = arr;
//	while (1)
//	{
//		char* str = start;
//		if (*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse(start, str - 1);
//		start = str + 1;
//		if (*str == '\0')
//			break;
//	}
//	//打印
//	printf("%s\n", arr);
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
////封装的倒置函数
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int sz = (int)strlen(arr);
//	//先倒置字符串
//	char* end = arr + sz - 1;
//	reverse(arr, end);
//	//再逆序每个单词
//	//每个单词以空格作分隔
//	char* start = arr;
//	char* str = start;
//	while (*str)
//	{
//		if (*str == ' ' ||  *str == '\0')
//		{
//			reverse(start, str - 1);
//			start = str + 1;
//		}
//		if (*str != '\0')
//			str++;
//	}
//	//打印
//	printf("%s\n", arr);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
//封装的倒置函数
void reverse(char* left, char* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int sz = (int)strlen(arr);
	//先倒置字符串
	char* end = arr + sz - 1;
	reverse(arr, end);
	//再逆序每个单词
	//每个单词以空格作分隔
	char* start = arr;
	while (*start!='\0')
	{
		char* str = start;
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
		reverse(start, str - 1);
		start = str + 1;
	}
	//打印
	printf("%s\n", arr);
	return 0;
}