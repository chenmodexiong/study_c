#define  _CRT_SECURE_NO_WARNINGS 1
//
////逆序字符串
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* arr)
//{
//	int left = 0;
//	int right = (int)strlen(arr) - 1;
//	while (left<right)
//	{
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets_s(arr,10000);
//	//scanf("%[^d\n]",&arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//逆序字符串
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str+strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets_s(arr, 10000);
//	//scanf("%[^d\n]",&arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//打印菱形
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int m = 6;
//	int tmp = 6;
//	int j = 0;
//	//菱形上半段
//	for (tmp=6;tmp>=0;tmp--)
//	{
//		for (i = m; i >= 0; i--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * n - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		m--;
//		n++;
//	}
//	//菱形下半段
//	
//	return 0;
//}

////打印菱形
//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//菱形上半段
//	//确定几行
//	for (i = 0; i < line; i++)
//	{
//		//先打印空格
//		int j = 0;
//		for (j = 0 ; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//再打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//菱形下半段
//	//
//	for (i = 0; i < line-1; i++)
//	{
//		//先打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//再打印*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
// 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//确定是几位数
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		//求数的n次方之和
//		int sum = 0;
//		while (tmp)
//		{
//			int n = tmp % 10;
//			tmp /= 10;
//			sum += (int)pow(n, count);
//		}
//		//判断是不是水仙花数（自幂数）
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}


//打印菱形

//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//菱形上半部分
//	//
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//先打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//菱形下半部分
//	//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//先打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//再打印星号
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int k = 0;
	int sum = 0;
	int i = 0;
	//for (i = 0; i < n; i++)
	//{
	//	k = k * 10 + a;
	//	sum += k;
	//}
	while (n)
	{
		k = k * 10 + a;
		sum += k;
		n--;
	}
	printf("%d\n", sum);
	return 0;
}
