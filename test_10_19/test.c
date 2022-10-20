#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test()
{
	 static int i = 1;
	printf("%d\n",i);
	i++;
}
int main()
{
	int j= 0;
	for (j = 1; j < 10; j++)
	{
		test();
	}
	return 0;
}







//MAX(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d",&a,&b);
//	max=MAX(a, b);
//	printf("%d\n",max);
//	return 0;
//}




//typedef int uint;
//int main()
//{
//	int a = 0;
//	uint b = 0;
//
//	return 0;
//}







//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d%d", &a, &b))
//	{
//		if (a == b)
//			printf("%d=%d\n", a, b);
//		else if (a < b)
//			printf("%d<%d\n", a, b);
//		else
//			printf("%d>%d\n", a, b);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",a,b);
//	if (a >= b)
//		printf("max=%d\n", a);
//	else
//		printf("max=%d\n",b);
//	return 0;
//}
