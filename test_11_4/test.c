#define  _CRT_SECURE_NO_WARNINGS 1

//编写函数不允许创建临时变量，求字符串的长度


//#include<stdio.h>
//
//int my_strlen(char* pa)
//{
//	int count = 0;	
//	while ((*pa != '\0'))
//	{
//		//pa++;意味着向后跳一个字符；
//		//类似的，如果是整形++，意味着向后跳一个整形，大小4个字节；
//		pa++;
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//数组名本身是字符串第一个元素的地址
//	int ret=my_strlen(arr);
//	printf("%d\n",ret);
//
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* pa)
//{
//	if (*pa != '\0')
//		return 1 + my_strlen(pa + 1);
//	else
//		return 0;
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n",ret);
//
//	return 0;
//}
//
//#include<stdio.h>
//int mul(int n)
//{
//	int i = 0;
//	int fac = 1;
//	for (i = 1; i <= n; i++)
//	{
//		fac *= i;
//	}
//
//	return fac;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=mul(n);
//	printf("%d\n",ret);
//
//	return 0;
//}
//
//#include<stdio.h>
//int mul(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * mul(n-1);
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = mul(n);
//
//	printf("%d\n",ret);
//	return 0;
//}

//#include<stdio.h>
//
//int count = 0;
//int Fib(n)
//{
//
//	if (n == 3)       //计算3在计算中重复的次数
//	{
//		count++;
//	}              
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=Fib(n);
//	printf("%d\n",ret);
//	printf("count=%d\n",count);
//	return 0;
//}
//#include<stdio.h>
//int Fib(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

//静下心来认真细致
//
//汉诺塔问题

#include<stdio.h>

void hanoi(int n,char A,char B,char C)
{
	if (n == 1)     //当只有一个圆盘时
	{
		printf("%c->%c\n",A,A);
	}
	else          
	{
		hanoi(n - 1, A, C, B);//把n-1个圆盘从A绕过C挪到B上
		printf("%c->%c\n",A,C);//把A底下那个圆盘挪到C上
		hanoi(n-1,B,A,C);//问题变成了把n-1个圆盘从B挪到C上，这样递归下去；
	}
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	hanoi(n,'A', 'B', 'C');
	return 0;
}

////青蛙跳台阶问题
//
//#include<stdio.h>
//
//int num(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return num(n - 1) + num(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = num(n);
//	printf("一共有%d种跳法\n",ret);
//	return 0;
//}

//#include<stdio.h>
//
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//
//	return 0;
//}












