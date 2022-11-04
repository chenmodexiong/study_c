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









