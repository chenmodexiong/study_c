#define  _CRT_SECURE_NO_WARNINGS 1

//逆序字符串

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
//逆序字符串

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

//逆序单词
//例如：i like beijing.
//逆序之后变成：beijing. like i

//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////逆序字符串
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
//	//先逆序整个字符串
//	char* end = arr + strlen(arr) - 1;
//	reverse(arr, end);
//	//再逆序每个单词
//	char* start = arr;//记录起始位置
//	while (*start!='\0')
//	{
//		char* str = start;//用来操作的指针
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

//输入3个数，从大到小输出

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//确定a是最大值，c是最小值；
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


//鸡和兔子共n只，共m条脚。输入n和m，输出鸡和兔子的数量。如果没有解，输出“No”。

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




