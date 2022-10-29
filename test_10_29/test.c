#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
int is_prime(i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if ((i % j) == 0)
			return 0;
		else
		{
			printf("%d  ", i);
			return 1;
		}
	}
}
int main()
{
	int i = 1;
	for (i = 100; i <= 200; i++)
	{
		is_prime(i);
	}
	return 0;
}
//int is_leap_year(year)
//{
//	if (year % 4 == 0 && year / 100 != 0 || year / 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	int ret=is_leap_year(year);
//	if (ret == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}
//#include<stdio.h>
//
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int b = 0;
//	int a = 0;
//	scanf("%d %d",&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int h = 0;
//	scanf("%d",&h);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= h; i++)
//	{
//		for (j = 1; j <= h; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int first = 1;
//	int i = 1;
//	int j = 0;
//	while (i < n)
//	{
//		first *= 10;
//		i++;
//	}
//	printf("first=%d\n",first);
//	for (j = first; j < first * 10; j++)
//	{
//		int b = j;
//		int sum = 0;
//		int c = 0;
//		do
//		{	
//			int a = 0;
//			int p = 1;
//			c = b%10;
//			b /= 10;
//			for (a = 1; a <= n; a++)
//			{
//				p *= c;
//			}
//			sum += p;
//		} while (b>0);
//		if (sum == j)
//			printf("水仙花数：%d ", j);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int N = 0;
//	if (i == 0)
//	{
//		N = 3;
//	}
//	printf("%d\n",N);
//	return 0;
//}
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	long long i = 0;
//	long long ret = 0;
//	long long sum = 0;
//	int N = 0;
//	
//	for (i = 100;i<=1000000 ;i++ )
//	{
//		if (i >= 100 && i < 1000)
//			N = 3;
//		else if (i >= 1000 && i < 10000)
//			N = 4;
//		else if(i >= 10000 && i < 100000)
//			N = 5;
//		else if(i >= 100000 && i < 1000000)
//			N = 6;
//		else
//			N = 7;
//		ret=(int)pow((i%10),N);
//		sum += ret;
//	}
//	if (sum == i)
//		printf("%lld\n",i);
//	return 0;
//}
//#include<stdio.h>
//void swap(int pa, int pb)
//{
//	int tmp = 0;
//	tmp = pa;
//	pa = pb;
//	pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("交换前：a=%d b=%d\n",a,b);
//	swap(&a, &b);
//	printf("交换后：a=%d b=%d\n",a,b);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int ret = get_max(a, b);
//	printf("%d\n",ret);
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int sum = 0;
//	sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x / 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year+=4)
//	{
//		if (is_leap_year(year)==1)
//		{
//			printf("%d ",year);
//		}
//	}
//
//	return 0;
//}