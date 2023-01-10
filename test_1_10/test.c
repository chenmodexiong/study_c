#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//memcmp
//第一个中的值小于第二个中的值,返回小于0的值
//第一个中的值等于第二个中的值，返回0
//第一个中的值大于第二个中的值，返回大于0的值
//

//int main()
//{
//	int arr1[] = { 1,2,3 };//01 00 00 00 02 00 00 00 03 00 00 00
//	int arr2[] = { 1,2,5 };//01 00 00 00 02 00 00 00 05 00 00 00
//	int ret=memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//结构体内存对齐原则
//1.第一个结构体成员放在偏移量为0的地址处
//2.其他成员要存放在<对齐数>的整数倍地址处
//	对齐数是编译器默认的对齐数和该成员大小的较小值
//	-VS中默认值对齐数为8
//3.结构体总大小为成员最大对齐数的整数倍
//4.如果嵌套了结构体的情况下，嵌套的那个结构体对齐到自己成员最大对齐数的整数倍处，
//	结构体的总大小是所以(含嵌套结构体)成员的最大对齐数的整数倍。 
//
//

//
////练习1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
////练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", (int)sizeof(struct S1));//12
//	printf("%d\n", (int)sizeof(struct S2));//8
//	printf("%d\n", (int)sizeof(struct S3));//16
//	printf("%d\n", (int)sizeof(struct S4));//32
//
//	return 0;
//}

























