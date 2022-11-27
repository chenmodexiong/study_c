#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	printf("GoodGood Study!!!\n");
//	printf("DayDay up!!!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//实现代码：求 1！ + 2！ + 3！ ... + n!；不考虑溢出。

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;//保存每个阶乘的结果
//	int sum = 0;//保存最终的和
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)//计算每个阶乘
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//
//void test(int* pa)
//{
//	//断言pa不能为空指针
//	assert(pa != NULL);
//}
//
//int main()
//{
//	int* pa = NULL;
//	test(pa);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	const int* i = 10;
//  i = 20 ;
//	*i = 30;
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int* const i = 10;
//	//*i = 30;
//	i = 20;
//	return 0;
//}

//模拟实现strlen函数


//#include<stdio.h>
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	if (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//模拟实现strcpy

//#include<stdio.h>
//#include<string.h>

//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "*********";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
// 
//模拟实现strcpy

//#include<stdio.h>
//#include<assert.h>
////库函数的strcpy返回的是目标空间的起始地址
//char* my_strcpy(char* des, const char* source)//const修饰不需要改变的量
//{
//	assert(des && source);//断言不是空指针,确定指针有效性
//	char* ret = des;
//	while (*source != '\0')
//	{
//		*des++ = *source++;
//	}
//	*des++ = *source++;//把最后的\0也要拷贝过去
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "*********";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//库函数的strcpy返回的是目标空间的起始地址

//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//断言指针的有效性
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";
//	//链式访问
//	printf("%s\n", my_strcpy(arr1, p));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int i = 0;
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* des,const char* source)
//{
//	assert(des && source);
//	char* ret = des;
//	while (*des++ = *source++)
//	{
//		;
//	}
//	//while (*source != '\0')
//	//{
//	//	*des++ = *source++;
//	//}
//	//*des++ = *source++;
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "**********";
//	char arr2[] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	str++;
//	//	count++;
//	//}
//	//return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}