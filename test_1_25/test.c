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


//��X86�£�С���ֽ���洢�������г���

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


//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

/*˼·*/
/*�����ص���ͬΪ0������Ϊ1��*/

//ֻ��һ������ʱ
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

//��������ʱ��
//���������������ó���ȥ����������Ԫ��^
//int main()
//{
//	int arr[] = { 1,2,3,4,5,9,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];//��ʱ��tmp���Ϊ5^9;
//	}
//	//5  -- 0101
//	//9  -- 1001
//	//tmp-- 1100  -- ���ݵڶ���1���������������ֿ���
//	int count = 0;
//	for (int i = 1; i < 32; i++)
//	{
//		if (tmp & 1 << i )
//		{
//			count = i;//�ҵ���iλ��1����¼����
//			break;
//		}
//	}
//	//�ҵ���
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

////ģ��ʵ��strncpy
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


//ģ��ʵ��strncat
#include <assert.h>
char* my_strncat(char* des,const char* source,size_t num)
{
	assert(des && source);
	const char* start = des;//��¼��ʼλ��
	//�ҵ�'\0'
	while (*des != '\0')
	{
		des++;
	}
	//��'\0'��ʼ���׷��
	while (num--)
	{
		*des++ = *source++;
	}
	*des = '\0';//����ֶ�����\0
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











