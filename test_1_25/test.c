#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(union Un));
//	return 0;
//}
//
//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//int main()
//{
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}

//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}


//在X86下，小端字节序存储，有下列程序

//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

/*思路*/
/*异或的特点相同为0，相异为1，*/

//只有一个单身狗时
//int main()
//{
//	int arr[] = { 1,2,2,3,3,4,4,1,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		dog ^= arr[i];
//	}
//	printf("dog=%d\n", dog);
//	return 0;
//}

//当有两个时、
//将两个单身狗单独拿出来去和数组其他元素^
//int main()
//{
//	int arr[] = { 1,2,3,4,5,9,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];//此时的tmp结果为5^9;
//	}
//	//5  -- 0101
//	//9  -- 1001
//	//tmp-- 1100  -- 根据第二个1来将两个单身狗区分开来
//	int count = 0;
//	for (int i = 1; i < 32; i++)
//	{
//		if (tmp & 1 << i )
//		{
//			count = i;//找到第i位是1，记录下来
//			break;
//		}
//	}
//	//找单身狗
//	int dog1 = 0;
//	int dog2 = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] & 1 << count )
//		{
//			dog1 ^= arr[i];
//		}
//		else
//		{
//			dog2 ^= arr[i];
//		}
//	}
//	printf("dog1=%d dog2=%d\n", dog1, dog2);
//
//	return 0;
//}

////模拟实现strncpy
//#include <string.h>
//#include <assert.h>
//char* my_strncpy( char* des, const char* source, size_t num)
//{
//	assert(des && source);
//	char* start = des;
//	int i = num;
//	while (i--)
//	{
//		*des++ = *source++;
//	}
//	*des = '\0';
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = "mnbvcxzjkl";
//	char* arr2 = "abcdefg";
//	char* str=my_strncpy(arr1, arr2, 5);
//	printf("%s\n", str);
//	return 0;
//}


//模拟实现strncat
#include <assert.h>
char* my_strncat(char* des,const char* source,size_t num)
{
	assert(des && source);
	const char* start = des;//记录起始位置
	//找到'\0'
	while (*des != '\0')
	{
		des++;
	}
	//从'\0'开始向后追加
	while (num--)
	{
		*des++ = *source++;
	}
	*des = '\0';//最后手动补上\0
	return (char*)start;
}

int main()
{
	char arr1[20] = "hello";
	char* arr2 = " world";
	char* str=my_strncat(arr1, arr2, 6);
	printf("%s\n", str);

	return 0;
}











