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

//ʵ�ִ��룺�� 1�� + 2�� + 3�� ... + n!�������������

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
//	int ret = 1;//����ÿ���׳˵Ľ��
//	int sum = 0;//�������յĺ�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)//����ÿ���׳�
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
//	//����pa����Ϊ��ָ��
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

//ģ��ʵ��strlen����


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

//ģ��ʵ��strcpy

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
//ģ��ʵ��strcpy

//#include<stdio.h>
//#include<assert.h>
////�⺯����strcpy���ص���Ŀ��ռ����ʼ��ַ
//char* my_strcpy(char* des, const char* source)//const���β���Ҫ�ı����
//{
//	assert(des && source);//���Բ��ǿ�ָ��,ȷ��ָ����Ч��
//	char* ret = des;
//	while (*source != '\0')
//	{
//		*des++ = *source++;
//	}
//	*des++ = *source++;//������\0ҲҪ������ȥ
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


//�⺯����strcpy���ص���Ŀ��ռ����ʼ��ַ

//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//����ָ�����Ч��
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
//	//��ʽ����
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