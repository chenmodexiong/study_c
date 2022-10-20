#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int sum=0;
//	scanf("%d%d",&a,&b);
//	sum=a+b;
//	printf("sum=%d\n",sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 1;
	while (i<100)
	{
		if(i%2 == 1)
			printf("%d\n", i);
		i++;
	}
	return 0;
}



