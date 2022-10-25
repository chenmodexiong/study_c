#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 10;
	int y = 8;
	int i = (x > y ? x : y);
	printf("%d\n",i);
	return 0;
}
//int main()
//{
//	int i = 10;
//	printf("%f\n",(float)i);
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8};
//	printf("%d\n", sizeof(int));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	if (!i)
//		printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	int i = 19;
//	int j = 3;
//	printf("%d\n",i%j);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z=0;
//	z=x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum=Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d",&num1,&num2);
//	//sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n",i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;		
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d\n",i);
//		continue;
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8};
//	char arr2[] = {"12345678"};
// 
//      //计算字符串大小可以用sizeof和strlen来计算,并且sizeof计算出的算\0,也就是比实际长度要大1;
//      //计算数组大小只能用sizeof计算并且计算结果是准确的;    
// 
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = strlen(arr1);
//	//printf("%d\n", sz1);
//	//printf("%d\n", sz2);
//	//int sz1 = sizeof(arr2) / sizeof(arr2[0]);
//	//int sz2 = strlen(arr2);
//	printf("%d\n", sz1);
//	printf("%d\n",sz2);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = 0;
//	int k = 0;
//	int flag = 0;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (0 == flag)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (flag*1.0/i);
//		flag = -flag;
//	}
//	printf("%f\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,5,-1,17,-8,8,9,10};
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max <= arr[i])
//			max = arr[i];
//	}
//	printf("max=%d\n",max);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,-1,7,19,20,10};
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] <= arr[i + 1])
//		{
//			//arr[i] = arr[i + 1];
//			max = arr[i + 1];
//		}
//		if (arr[i] > arr[i + 1]) 
//		{
//			//arr[i]=arr[i];
//			max = arr[i];
//		}
//	}
//	printf("%d\n",arr[i]);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			printf("%d*%d=%-2d ",i,n,i*n);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int mid = 0;
//	int right = 9;
//	int flag = 0;
//	int k = 7;
//	scanf("%d",&k);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了,这个元素的下标是:%d", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (0 == flag)
//		printf("找不到");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	for (n=1;n<=3;n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n",ret);
//	return 0;
//}
//int main()
//{
//	printf("好好学习,天天编程");
//	return 0;
//}