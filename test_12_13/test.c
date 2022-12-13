#define  _CRT_SECURE_NO_WARNINGS 1



//写一个strlen（循环、递归、指针相减三种方式）

//第一种循环方式

#include<stdio.h>
#include<assert.h>
#include<string.h>

int my_strlen(char* str)
{
	assert(str);//验证指针的合理性
	int count = 0;//计数器
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "hello world!!";
	printf("%d\n", my_strlen(arr));
	printf("%d\n", (int)strlen(arr));//验证
	return 0;
}



//写一个strlen（循环、递归、指针相减三种方式）

//第二种递归方式

#include<stdio.h>
#include<assert.h>
#include<string.h>

int my_strlen(char* str)
{
	assert(str);//判断指针合理性
	if (*str != '\0')
		return 1 + my_strlen(str+1);
	else
		return 0;
}

int main()
{
	char arr[] = "hello world!!\n";
	printf("%d\n", my_strlen(arr));
	printf("%d\n", (int)strlen(arr));//验证
	return 0;
}


//写一个strlen（循环、递归、指针相减三种方式）

//第三种方式指针相减

#include<stdio.h>
#include<assert.h>
#include<string.h>

int my_strlen(char* str)
{
	assert(str);
	char* start = str;//记录起始位置
	while (*str != '\0')
	{
		str++;
	}
	return (int)(str - start);
}

int main()
{
	char arr[] = "hello world!!\n";
	printf("%d\n", my_strlen(arr));
	printf("%d\n", (int)strlen(arr));
	return 0;
}



