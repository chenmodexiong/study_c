#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//数组名的意义：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。
//sizeof(arr)
//&arr
//只有这两种情况下数组名表示整个数组。其他情况都是首元素地址。

//
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));// 4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//地址大小4/8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4/8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));// 4/8
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//
//	return 0;
//}


//字符数组
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//printf("%d\n", strlen(arr));//随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//strlen('a')->strlen(97),-err，非法访问
//	//printf("%d\n", strlen(arr[1]));//同上，非法访问
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));// 4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//-err 非法访问
//	//printf("%d\n", strlen(arr[1]));//-err 非法访问
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}

//
//int main()
//{
//	const char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//指针大小4/8
//	//printf("%d\n", sizeof(p + 1));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1));//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//-err
//	////printf("%d\n", strlen(p[0]));//-err
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}
//

//二维数组
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4/8  
	//注意a[0]是一行的数组名，所以是地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4/8
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4/8
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16

	return 0;
}


////笔试题1：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));         
//	return 0;
//}
////程序的结果是什么？


//笔试题2：
// 
//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	//结构体类型的指针+1跳过一个结构体的大小
//	//0x00100000 + 1
//	//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);
//	//整型+1就是+1
//	//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//整型指针+1跳过4个字节
//	//0x00100004
//	return 0;
//}


//笔试题3:

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//整型+1，就是+1
//	//所以与原来地址相比只加了1个字节
//  //4,200000
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


////笔试题4:

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//注意逗号表达式，如果是初始化要用大括号。
//	// 1 3
//	// 5 0
//	// 0 0
//	int* p;
//	p = a[0];//数组第一行的地址
//	printf("%d", p[0]);
//	return 0;
//}


////笔试题5:

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//ff ff ff fc   
//	//-4
//	return 0;
//}

//笔试题6:

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10,5
//	return 0;
//}

//笔试题7:

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//笔试8

//++ -- 这样的操作符副作用不要忘记
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	//POINT
//	printf("%s\n", *-- * ++cpp + 3);
//	//ER
//	printf("%s\n", *cpp[-2] + 3);
//	//ST
//	printf("%s\n", cpp[-1][-1] + 1);
//	//*(*(cpp-1)-1)+1
//	//EW
//	return 0;
//}


