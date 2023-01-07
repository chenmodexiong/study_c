#define  _CRT_SECURE_NO_WARNINGS 1


/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
以下为4个嫌疑犯的供词:
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手*/

//#include<stdio.h>
//
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c", killer);
//		}
//	}
//	return 0;
//}


//打印杨辉三角
//
//#include<stdio.h>
//
//int fun(int a, int b)
//{
//	return ((b == 1) || (b == a)) ? 1 : fun(a - 1, b - 1) + fun(a - 1, b);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)//注意要从1开始
//	{
//		for (int a = 0; a < n - i; a++)
//		{
//			printf("  ");
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%4d ", fun(i, j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
// 
// 
// 
//
//字符串左旋：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<string.h>

//最直接的方法

//void left_move(char* str, int k)
//{
//	for (int j = 0; j < k; j++)
//	{
//		//旋转一个字符
//		char tmp = (*str);
//		size_t len = strlen(str);
//		for (int i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	for (int j = 0; j < k; j++)
//	{
//		//旋转一个字符
//		char tmp = arr[0];
//		size_t len = strlen(arr);
//		for (int i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	printf("请输入旋转个数:\n");
//	scanf("%d", &k);
//	left_move(arr,k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//字符串左旋：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<string.h>
#include<assert.h>

//
////逆序字符串函数
//void reverse(char* left,char* right)
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
//void left_move(char* arr, int k)
//{
//	int len = (unsigned int)strlen(arr);
//	//逆序左边
//	reverse(arr, arr + k - 1);
//	//逆序右边
//	reverse(arr + k, arr + len - 1);
//	//逆序整体
//	reverse(arr, arr + len - 1);
//
//}
//
//int main()
//{
//	char arr[] = "AABCDEF";
//	printf("请输入要旋转的个数:\n");
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//
//字符串旋转结果
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC


#include<stdio.h>
#include<string.h>

//最直观的基本方法
//
//void left_move(char* arr, int k)
//{
//	for (int j = 0; j < k; j++)
//	{
//		//旋转一个字符
//		char tmp = arr[0];
//		size_t len = strlen(arr);
//		for (int i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int is_left_move(char* arr1, char* arr2)
//{
//	size_t len1 = strlen(arr1);
//	size_t len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i < len1; i++)
//		{
//			//每旋转一次比较一次
//			left_move(arr1, 1);
//			if (strcmp(arr1, arr2) == 0)
//			{
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCDE";
//	char arr2[] = "BCDEAA";
//	int len=is_left_move(arr1, arr2);
//	if (len == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//更好的方式
//两个库函数strncat、strstr

#include<stdio.h>
#include<string.h>

int is_left_move(char* arr1,char* arr2)
{
	assert(arr1 && arr2);
	size_t len1 = strlen(arr1);
	size_t len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	//字符串末尾追加,注意要在字符串留足空间
	strncat(arr1, arr1, len1);
	//判断arr1中是否存在arr2，若存在则返回arr1中arr2的地址
	//不存在则返回NULL
	if (strstr(arr1, arr2) != NULL)
		return 1;
	else
		return 0;
}

int main()
{
	char arr1[20] = "AABCDE";
	char arr2[] = "BCDEAA";
	int len = is_left_move(arr1, arr2);
	if (len == 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}


