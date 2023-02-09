#define  _CRT_SECURE_NO_WARNINGS 1


//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现

#include <stdio.h>
#include <stddef.h>

//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//
//#define OFFSETOFF(type,member) (size_t)&(((type*)0)->member)
//
//int main()
//{
//	//int a = offsetof(struct S, a);
//	//int b = offsetof(struct S, b);
//	//int c = offsetof(struct S, c);
//	//printf("%d %d %d\n", a, b, c);
//	int a = OFFSETOFF(struct S, a);
//	int b = OFFSETOFF(struct S, b);
//	int c = OFFSETOFF(struct S, c);
//	printf("%d %d %d\n", a, b, c);
//	
//	return 0;
//}



//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。

//#define SWAP(a) ((a&0x55555555)<<1)+((a&0xaaaaaaaa)>>1)
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n", SWAP(x));
//
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

//模拟atoi

enum State
{
	VALID,
	INVALID
}state = INVALID;//默认表示非法

int my_atoi(const char* str)
{
	assert(str);
	if (*str=='\0')
	{
		return 0;
	}
	while(isspace(*str))
	{
		str++;
	}
	int flag = 1;
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			ret =  ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX)
			{
				return INT_MAX;
			}
			else if (ret < INT_MIN)
			{
				return INT_MIN;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}

int main()
{
	//char* p = "   -123456";
	int ret = my_atoi("   -12#345");
	if (state == VALID)
	{
		printf("%d", ret);
	}
	else
	{
		printf("非法字符串转换,%d\n", ret);
	}
	return 0;
}




//
//enum State
//{
//	VALID,
//	INVALID
//}state = INVALID;//默认表示非法
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//跳过空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag * (*str - '0');
//			if (ret > INT_MAX)
//			{
//				return INT_MAX;
//			}
//			else if (ret < INT_MIN)
//			{
//				return INT_MIN;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//
//	state = VALID;
//	return (int)ret;
//}
//
//int main()
//{
//	int ret = my_atoi("  -1234111111");
//
//	if (state == VALID)
//		printf("%d\n", ret);
//	else
//		printf("非法字符串转换,%d\n", ret);
//
//	return 0;
//}











