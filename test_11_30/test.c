#define  _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 84,83,82,81,80 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð������
//	//��ȷ���߼���
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//�жϱȽϴ���������
//		for (j = 0; j < sz - 1 - i; j++)	
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//��ӡ����arr
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 84,83,88,87,61 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð������
//	//��ȷ���߼���
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//�жϱȽϴ���������
//		for (j = i+1; j < sz ; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	//��ӡ����arr
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int arr[] = { 84,83,88,87,61 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��Ҫ����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int k = i;
//		for (j = i + 1 ; j < sz ; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				//ȷ��k�ǽ�С����λ��
//				k = j;
//			}
//		}
//		//ȷ��i�ǽ�С����λ�ã��������򽻻�
//		if (i != k)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//	}
//	//��ӡ����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����ת��

//#include<stdio.h>
//#define ROW 3
//#define COL 3
//int main()
//{
//	int arr[ROW][COL] = { {100,200,300},
//					{400,500,600},
//					{700,800,900} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW-1; i++)
//	{
//		for (j = 0; j < COL-1; j++)
//		{
//			int tmp = arr[i][j + 1];
//			arr[i][j + 1] = arr[i + 1][j];
//			arr[i + 1][j] = tmp;
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//#define ROW 3
//#define COL 3
//
//int main()
//{
//	int arr[ROW][COL] = { {100,200,300},
//					{400,500,600},
//					{700,800,900} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < COL; i++)
//	{
//		for (j = 0; j < ROW; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int num = rand();
//	printf("%d\n", num);
//	return 0;
//}

////���뾲̬��
//#pragma comment(lib,"add_11_2.lib")
//
//#include<stdio.h>
//#include"add.h"
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("sum=%d\n", Add(x, y));
//}

//#include<stdio.h>
//int my_strlen(char* pa)
//{
//	if (*pa != '\0')
//		return 1 + my_strlen(pa + 1 );
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

////��ŵ������
//
//#include<stdio.h>
//
//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)     //��ֻ��һ��Բ��ʱ
//	{
//		printf("%c->%c\n", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);//��n-1��Բ�̴�A�ƹ�CŲ��B��
//		printf("%c->%c\n", A, C);//��A�����Ǹ�Բ��Ų��C��
//		hanoi(n - 1, B, A, C);//�������˰�n-1��Բ�̴�BŲ��C�ϣ������ݹ���ȥ��
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

//���򵥴�

//#include<stdio.h>
//#include<string.h>
//void reverse(char* start, char* end)
//{
//    while (start < end)
//    {
//        int tmp = *end;
//        *end = *start;
//        *start = tmp;
//        start++;
//        end--;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    scanf("%[^\n]", arr);
//    getchar();
//    int len = strlen(arr);
//    char* end = arr + (len - 1);
//    reverse(arr, end);
//    char* temp = arr;
//    int i = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (arr[i] == ' ' || arr[i] == '\0')
//        {
//            reverse(temp, arr + i - 1);
//            temp = arr + i + 1;
//        }	
//    }
//    printf("%s\n", arr);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 1;
//    while (1)
//    {
//        if (a * i % b == 0)
//        {
//            break;
//        }
//        i++;
//    }
//    printf("%d\n", a*i);
//    return 0;
//}
// 



//#include <stdio.h>
////����󹫱���
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int max = (a > b ? a : b);
//    int i = max;
//    while (1)
//    {
//        if (i % a == 0 && i % b == 0)
//        {
//            break;
//        }
//        i++;
//    }
//    printf("%d\n", i);
//    //Ч�ʱȽϸߵķ�ʽ
//    // int i = 1;
//    // while (1)
//    // {
//    //     if (a * i % b == 0)
//    //     {
//    //         break;
//    //     }
//    //     i++;
//    // }
//    // printf("%d\n", a*i);
//    return 0;
//}

//���õ���,�ַ���

//#include<stdio.h>
//#include<string.h>
////��װ�ĵ��ú���
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
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
//	int sz = (int)strlen(arr);
//	//�ȵ����ַ���
//	char* end = arr + sz - 1;
//	reverse(arr, end);
//	//������ÿ������
//	//ÿ�������Կո����ָ�
//	char* start = arr;
//	while (1)
//	{
//		char* str = start;
//		if (*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse(start, str - 1);
//		start = str + 1;
//		if (*str == '\0')
//			break;
//	}
//	//��ӡ
//	printf("%s\n", arr);
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
////��װ�ĵ��ú���
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
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
//	int sz = (int)strlen(arr);
//	//�ȵ����ַ���
//	char* end = arr + sz - 1;
//	reverse(arr, end);
//	//������ÿ������
//	//ÿ�������Կո����ָ�
//	char* start = arr;
//	char* str = start;
//	while (*str)
//	{
//		if (*str == ' ' ||  *str == '\0')
//		{
//			reverse(start, str - 1);
//			start = str + 1;
//		}
//		if (*str != '\0')
//			str++;
//	}
//	//��ӡ
//	printf("%s\n", arr);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
//��װ�ĵ��ú���
void reverse(char* left, char* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int sz = (int)strlen(arr);
	//�ȵ����ַ���
	char* end = arr + sz - 1;
	reverse(arr, end);
	//������ÿ������
	//ÿ�������Կո����ָ�
	char* start = arr;
	while (*start!='\0')
	{
		char* str = start;
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
		reverse(start, str - 1);
		start = str + 1;
	}
	//��ӡ
	printf("%s\n", arr);
	return 0;
}