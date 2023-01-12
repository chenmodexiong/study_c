#define  _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <string.h>

//c库函数在使用是出错的话，会返回错误码
//strerror可以将错误码翻译为错误信息

//int main()
//{
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)//打开失败
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//关闭文件
//	fclose(pf);
//	return 0;
//}

/*perror example*/

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)//打开失败
//	{
//		perror((char*)pf);
//		//printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//关闭文件
//	fclose(pf);
//	return 0;
//}


/*memcpy example*/
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//模拟实现memcpy

#include <stdio.h>
#include <assert.h>
//不考虑重复的简单情况
void* my_memcpy(void* des, const void* source, int num)
{
	assert(des && source);//判断指针合法性
	void* ret = des;//记录目标起始地址
	while (num--)
	{
		*(char*)des = *(char*)source;
		des = (char*)des + 1;//一定注意这里的写法，不要写成*des++，强制类型转换是临时性的
		source = (char*)source + 1;//
	}
	return ret;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr1+2, arr1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//模拟实现memmove
//#include <assert.h>
//
//void* my_memmove(char* des, const char* source, size_t num)
//{
//	assert(des && source);
//	char* ret = des;
//	if (des < source)
//	{
//		//前-->后
//		while (num--)
//		{
//			*((char*)des) = *((char*)source);
//			des = (char*)des + 1;
//			source = (char*)source + 1;
//		}
//	}
//	else
//	{
//		//后-->前
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)source + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove((char*)(arr1+2), (const char*)arr1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
 

/*memcmp example*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 1,2,3 };
//	int arr3[] = { 1,2,9 };
//	printf("%d\n", memcmp(arr1, arr3,12));
//	printf("%d\n", memcmp(arr1, arr2,12));
//	printf("%d\n", memcmp(arr3, arr2,12));
//	return 0;
//}

///*memset example*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world!!";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


/*memset example*/
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[10] = { 0 };
	//我们要将arr全部初始化为0,能不能实现
	memset(arr, 1, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}












