#define  _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	printf("�ú�ѧϰ��������\n");
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//������
//	return 0;
//}
//

//
//
//1. sizeof(������)��������������Ĵ�С��sizeof�ڲ�������һ������������������ʾ������
//�顣
//2. & ��������ȡ����������ĵ�ַ�� & ����������������ʾ�������顣
//
//int arr[10] = { 0 };
//printf("%d\n", sizeof(arr));
//
//


//
//
//#include <stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
////����2
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);//�Ƿ������������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
























