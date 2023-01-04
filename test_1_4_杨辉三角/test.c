#define  _CRT_SECURE_NO_WARNINGS 1


//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……

//第一种直接找规律的方法

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[10][10] = { 0 };
//	//先打印1
//	for (a = 0; a < 10; a++)
//	{
//		arr[a][0] = 1;
//		for (b = 0; b <= a; b++)
//		{
//			if (a == b)
//			{
//				arr[a][b] = 1;
//			}
//		}
//	}
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b <= a; b++)
//		{
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//没有空格的版本
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[10][10] = { 0 };
//	for (a = 0; a < 10; a++)
//	{
//		arr[a][0] = 1;
//		for (b = 0; b <= a; b++)
//		{
//			if (a > 0 && b > 0)
//			{
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
//			}
//			if (a == b)
//			{
//				arr[a][b] = 1;
//			}
//		}
//	}
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b <= a; b++)
//		{
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int a = 1;
//	int b = 1;
//
//	for (a = 0; a < 10; a++)
//	{
//		b = 10 - a;
//		while (b--)
//		{
//			printf(" ");
//		}
//
//		arr[a][0] = 1;//注意访问数组是从0开始（数组的最低下标是0）
//
//		for (b = 0; b <= a; b++)
//		{
//			if (a == b)
//				arr[a][b] = 1;
//			if (a > 1 && b >= 1)
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];//上一行前一列和本列数之和
//			printf("%d ", arr[a][b]);//赋值完一行后直接打印得到的整体打印效果就是直接
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}


//最终版本
//#include<stdio.h>
//#define N 14
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[N][N] = { 0 };
//	int n = 0;                   //输入的n不要太大
//	printf("请输入要打印的行数\n");//大于14行会造成输出不规范
//	scanf("%d", &n);
//	for (a = 0; a < n; a++)
//	{
//		//b = 10 - a;
//		//while (b--)
//		//{
//		//	printf(" ");
//		//}
//		for (int i = 0; i <n-a; i++)
//		{
//			printf("  ");//在打印每行数据前打印空格
//		}
//		arr[a][0] = 1;//最左边的1
//		for (b = 0; b <= a; b++)
//		{
//			if (a > 0 && b > 0)
//			{
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];//中间的数赋值
//			}
//			if (a == b)
//			{
//				arr[a][b] = 1;//最右边的1
//			}
//			printf("%6d", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}





//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……

//第二种公式法
//
//#include <stdio.h>
///*
// * 定义阶乘，在这里可能会想。为什么要用float，当我试第一次的时候，
// * 如果用int的话，那么在打印行数多了以后就会出错。
// * 这是因为阶乘的数比较大，如果用int就不够用了。下同
// */
//float J(int i) 
//{
//    int j;
//    float k = 1;
//    for (j = 1; j <= i; j++)
//        k = k * j;
//    return(k);
//}
//float C(int i, int j) 
//{  /*定义组合数*/
//    float k;
//    k = J(j) / (J(i) * J(j - i));
//    return(k);
//}
//void main() 
//{
//    int i = 0, j, k, n;  /*打印杨辉三角*/
//    while (i <= 0 || i > 16)
//    {
//        printf("请输入要打印的行数：");
//        scanf("%d", &i);
//    }
//    printf("%d行杨辉三角如下：\n", i);
//    for (j = 0; j < i; j++) 
//    {
//        for (k = 1; k <= (i - j); k++)
//            printf("  ");
//        for (n = 0; n <= j; n++)
//            printf("%4.0f", C(n, j));
//        printf("\n");
//    }
//    printf("\n\n");
//}

//公式法，杨辉三角每一项都是二项式系数
//可以用一个组合数来表示


#include<stdio.h>

int fun1(int i)
{
	int ret = 1;
	for (int k = 1; k <= i; k++)
	{
		ret *= k;
	}
	return ret;
}
int fun2(int a, int b)
{
	return (fun1(a) / (fun1(b) * fun1(a - b)));
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int a = 0; a < n - i; a++)
		{
			printf("  ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%4d ", fun2(i, j));
		}
		printf("\n");
	}
	return 0;
}

//第三种方法
//递归

#include<stdio.h>

int fun(int a, int b)
{
	return ((b == 1) || (b == a)) ? 1 : fun(a - 1, b - 1) + fun(a - 1, b);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)//注意要从1开始
	{
		for (int a = 0; a < n - i; a++)
		{
			printf("  ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%4d ", fun(i, j));
		}
		printf("\n");
	}
	return 0;
}


//#include <stdio.h>
//int fun(int a, int b) {
//	//函数的递归调用，函数自己不断调用自己，产生多个子函数程序入口，并返回值相加
//	//函数的程序入口为一个内存地址 
//	return (b == 1 || b == a) ? 1 : fun(a - 1, b - 1) + fun(a - 1, b);
//	//三目条件运算符的应用 
//}
//int main() 
//{
//	int N;
//	printf("请输入杨辉三角形的行数（1 ~ 23）：");
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) 
//	{
//		for (int j = N - i; j > 0; j--)
//			printf("    ");
//		for (int j = 1; j <= i; j++)
//			printf(" %7d", fun(i, j));
//		putchar('\n');   //单个转义字符putchar输出 
//	}
//	return 0;
//}






