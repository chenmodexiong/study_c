#define  _CRT_SECURE_NO_WARNINGS 1


/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
����Ϊ4�����ɷ��Ĺ���:
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭������*/

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


//��ӡ�������
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
//	for (int i = 1; i <= n; i++)//ע��Ҫ��1��ʼ
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
//�ַ���������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include<stdio.h>
#include<string.h>

//��ֱ�ӵķ���

//void left_move(char* str, int k)
//{
//	for (int j = 0; j < k; j++)
//	{
//		//��תһ���ַ�
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
//		//��תһ���ַ�
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
//	printf("��������ת����:\n");
//	scanf("%d", &k);
//	left_move(arr,k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//�ַ���������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include<stdio.h>
#include<string.h>
#include<assert.h>

//
////�����ַ�������
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
//	//�������
//	reverse(arr, arr + k - 1);
//	//�����ұ�
//	reverse(arr + k, arr + len - 1);
//	//��������
//	reverse(arr, arr + len - 1);
//
//}
//
//int main()
//{
//	char arr[] = "AABCDEF";
//	printf("������Ҫ��ת�ĸ���:\n");
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//
//�ַ�����ת���
//
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC


#include<stdio.h>
#include<string.h>

//��ֱ�۵Ļ�������
//
//void left_move(char* arr, int k)
//{
//	for (int j = 0; j < k; j++)
//	{
//		//��תһ���ַ�
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
//			//ÿ��תһ�αȽ�һ��
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

//���õķ�ʽ
//�����⺯��strncat��strstr

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
	//�ַ���ĩβ׷��,ע��Ҫ���ַ�������ռ�
	strncat(arr1, arr1, len1);
	//�ж�arr1���Ƿ����arr2���������򷵻�arr1��arr2�ĵ�ַ
	//�������򷵻�NULL
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


