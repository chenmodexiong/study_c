#define  _CRT_SECURE_NO_WARNINGS 1


//
//#include<stdio.h>
//
//int main()
//{
//	//char* p = "abcdef";
//	//*p = 'w';//�����ַ������ܱ��޸ģ������������������
//	
//	const char* p = "abcdef";//�����Ͻ���д��,�ܶ������Ҫ�����const
//	printf("%s\n", p);
//
//	return 0;
//}


//һ��������

//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//���Ͼ���
//
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//#include <stdio.h>
//
//#define ROW 4
//#define COL 4
//
//void Find_num(int (*p)[COL], int row, int col,int n)
//{
//		int i = 1;
//		int j = 0;
//		//�����½ǿ�ʼ����
//		while ((*(p + row - i))[j] > n)
//		{
//			i++;
//			if (i > row)
//			{
//				printf("û���ҵ�n\n");
//				break;
//			}
//		}
//		while ((*(p + row - i))[j] < n)
//		{
//			j++;
//			if ((*(p + row - i))[j] == n)
//			{
//				printf("n��������:%d %d\n", row - i+1, j+1);
//				break;
//			}
//			if (j > col)
//			{
//				printf("û���ҵ�n\n");
//				break;
//			}
//		}
//}
//
//int main()
//{
//	int arr[ROW][COL] = { {1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
//	printf("������Ҫ���ҵ�����:\n");
//	int n = 0;
//	scanf("%d", &n);
//	Find_num( arr, ROW, COL,n);
//
//	return 0;
//}


//���Ͼ���
//
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//#include <stdio.h>
//
//#define ROW 4
//#define COL 4
//
//int Find_num(int arr[ROW][COL], int row, int col, int n)
//{
//	int i = 0;
//	int j = col-1;
//	while (i < row && j>0 )
//	{
//		if (arr[i][j] > n)
//		{
//			j--;
//		}
//		else if(arr[i][j] < n)
//		{
//			i++;
//		}
//		else
//		{
//			return 1;//�ҵ�����1
//		}
//	}
//	return 0;//�ҵ�����0
//}
//
//int main()
//{
//	int arr[ROW][COL] = {{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
//	printf("������Ҫ���ҵ�����:\n");
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Find_num( arr, ROW, COL,n);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}



#include <stdio.h>

#define ROW 4
#define COL 4

int Find_num(int arr[ROW][COL], int row, int col, int n)
{
	int i = 0;
	int j = col - 1;
	while (i < row && j>0)
	{
		if (arr[i][j] > n)
		{
			j--;
		}
		else if (arr[i][j] < n)
		{
			i++;
		}
		else
		{
			printf("�ҵ��ˣ�n��������:%d %d", i+1, j+1);
			return 0;
		}
	}
	printf("û�ҵ�n\n");
	return 0;
}

int main()
{
	int arr[ROW][COL] = { {1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
	printf("������Ҫ���ҵ�����:\n");
	int n = 0;
	scanf("%d", &n);
	Find_num(arr, ROW, COL, n);

	return 0;
}







