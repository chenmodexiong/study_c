#define  _CRT_SECURE_NO_WARNINGS 1


//malloc
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("malloc");
//		return 1;
//	}
//	//输入1~10
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	//打印1~10
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//申请空间后一定要记得释放并且将指针置为空
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//开辟10个整型大小
//	int* p = (int*)malloc(10*INT_MAX);
//	//如果开辟失败打印错误信息
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印开辟好的空间内容
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//开辟10个整型空间
//	int* p = (int*)calloc(10, sizeof(int));
//	//如果开辟失败打印错误信息
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//打印空间的内容
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//开辟10个整型空间
//	int* p = (int*)calloc(10, sizeof(int));
//	//如果开辟失败打印错误信息
//	if (p == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("calloc");
//	}
//	//假设我们要扩容到20个整型空间
//	int* str = (int*)realloc(p, 20 * sizeof(int));
//	if (str != NULL)
//	{
//		p = str;
//		str = NULL;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//对NULL指针的解引用操作
// 
// 
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//这里一定要注意判断是否是空指针
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//对动态开辟空间的越界访问
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		*(p + i) = 0;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//对非动态开辟内存使用free释放
// 
// 
//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int* p=&a;
//	free(p);
//	return 0;
//}


//使用free释放一块动态开辟内存的一部分
// 
// 
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 25; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//对同一块动态内存多次释放
// 
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}


//忘记释放动态开辟的空间，造成内存泄漏
// 
// 
//#include <stdio.h>
////test函数内部进行了malloc操作，返回了开辟空间的起始地址，记得释放
//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//	return p;
//}
//int main()
//{
//	int* ptr=test();
//	free(ptr);
//	ptr = NULL;
//	while (1);
//}


//吃内存观测
#include <stdlib.h>
int main()
{
	while (1)
	{
		malloc(1);
	}
}

