#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int flag = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = 9;
	int mid = 0;
	int k = 0;
	scanf("%d",&k);
	while (left <= right)
	{
		mid=(left + right) / 2; //求中间值
		//判断和调整来寻找k
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是:%d\n", mid);
			flag = 1;
			break;
		}
	}
	//if (left>right)
	if(flag==0)
		printf("找不到\n");
	return 0;
}
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % 2 == 0)
//				break;
//		}
//		if (i % 2 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i =0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j < i - 1; j++)
//		{
//			if (i % 2 == 0)
//				break;
//		}
//		if(i%2!=0)
//		printf("%d ",i);
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&month,&day);
//	printf("%4d %02d %02d",year,month,day);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d",&i);
//	while (i)
//	{
//		ret=i % 10;
//		printf("%d", ret);
//		i /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	printf("\n%d\n", printf("hello world"));
//	return 0;
//}
//int main()
//{
//	int i = printf("hello world");
//	printf("\n");
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	printf("%15d",0XABCDEF);
//	return 0;
//}
//int main()
//{
//	printf("%#o\n",1234);
//	printf("%#X\n",1234);
//	return 0;
//}