#define  _CRT_SECURE_NO_WARNINGS 1

//�����ַ���

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = strlen(arr);
//	printf("%d %d", sz, len);
//	return 0;
//}
// 
//�����ַ���

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//gets(arr);
//	//char arr[] = "hello world!!";
//	gets_s(arr, 100);
//	//scanf("%[^\n]", arr);
//	char* end = arr + strlen(arr) - 1;
//	reverse(arr, end);
//	printf("%s\n", arr);
//	return 0;
//}

//���򵥴�
//���磺i like beijing.
//����֮���ɣ�beijing. like i

//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////�����ַ���
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	//�����������ַ���
//	char* end = arr + strlen(arr) - 1;
//	reverse(arr, end);
//	//������ÿ������
//	char* start = arr;//��¼��ʼλ��
//	while (*start!='\0')
//	{
//		char* str = start;//����������ָ��
//		while(*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse(start, str-1);
//		start = str + 1;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//����3�������Ӵ�С���

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//ȷ��a�����ֵ��c����Сֵ��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//�������ӹ�nֻ����m���š�����n��m������������ӵ����������û�н⣬�����No����

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int chicken = 0;
//    int rabbit = 0;
//    int n = 0;
//    int m = 0;
//    scanf("%d", &n);
//    scanf("%d", &m);
//    chicken = (4 * n - m) / 2;
//    rabbit = n - chicken;
//    if (m % 2 == 1 || chicken < 0 || rabbit < 0)
//        printf("No");
//    else
//        printf("%d %d\n", chicken, rabbit);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int chicken = 0;
//	int rabbit = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	chicken = 2 * m - n / 2;
//	rabbit = n / 2 - m;
//	if (m % 2 == 1 || chicken < 0 || rabbit < 0)
//        printf("No");
//    else
//        printf("%d %d\n", chicken, rabbit);
//	return 0;
//}




