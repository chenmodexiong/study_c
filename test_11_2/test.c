#define  _CRT_SECURE_NO_WARNINGS 1

//导入静态库
#pragma comment(lib,"add_11_2.lib")

#include<stdio.h>

#include"add.h"
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}


//#include<stdio.h>

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int sum = Add(a, b);
//	printf("sum=%d\n",sum);
//	return 0;
//}


//void new_line()
//{
//	printf("hehe\n");
//
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}

//#include<stdio.h>
//void  Print(num)
//{
//	if ((num / 10) != 0)
//	{
//		Print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	Print(num);
//	return 0;
//}


//模拟strlen

////递归方式
//
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = my_strlen(arr);
//	printf("长度是：%d\n",sz);
//	return 0;
//}


////非递归方式
//
//#include<stdio.h>
//int my_strlen(char str[])
//{
//	int i = 0;
//	int count = 0;
//	while (str[i] != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "abcde";
//	int sz=my_strlen(arr);
//	printf("数组长度是：%d\n",sz);
//
//	return 0;
//}

//int DigitSum(n)
//{
//	if (n>0)
//	{
//		return (n % 10)+ DigitSum(n/10);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int sum=DigitSum(n);
//	printf("sum=%d\n",sum);
//	return 0;
//}
//#include<stdio.h>
//int mul(int n,int k)
//{
//	if (k!=0)
//	{
//		return n*mul(n, k - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	int ret=mul(n,k);
//	printf("%d的%d次方=%d\n",n,k,ret);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret1 = i * i;
//		ret2 = i * i * i;
//		printf("%d的平方：%d   ",i,ret1);
//		printf("%d的立方：%d\n",i, ret2);
//	}
//
//	return 0;
//}
