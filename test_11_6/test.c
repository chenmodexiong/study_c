#define  _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>

//
//int main()
//{
//	printf("�ú�ѧϰ��������\n");
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int i = 0;
//	int tmp[5] = { 0 };
//	printf("arr1:\n");
//	for (i = 0; i < 5; i++)
//	{
//		tmp[i] = arr2[i];
//		arr2[i] = arr1[i];
//		arr1[i] = tmp[i];
//
//		printf("%d ", arr1[i]);
//
//	}
//	printf("\n");
//	printf("arr2:\n");
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//
//	return 0;
//}



//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//
//
//#include<stdio.h>
//#include<string.h>

//
//void print(int* arr)
//{
//	int sz = sizeof(arr) / sizeof(*arr);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//}

//void init(int* arr)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*arr = 0;
//		arr++;
//	}
//}
//
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//print(arr);
//	init(arr);
//	//print(arr);
//	//reverse(arr);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//
////��ʼ��Ϊ0
//void init(int* pa,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*pa = 0;
//		pa++;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}




//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//#include<stdio.h>
//void reverse(int* arr,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		*(arr + left) = *(arr + right);
//		left++;
//		right--;
//	}
//
//}



//��ӡÿһ��Ԫ��
//#include<stdio.h>
//
//void print(int* pa,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*pa);
//		pa++;
//	}
//
//}
//
//
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	return 0;
//}
//
////����Ԫ��
//#include<stdio.h>
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	return 0;
//}



//#include<stdio.h>


//void print(int* pa)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *pa);
//		pa++;
//	}
//}

//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *pa);
//		pa++;
//	}
//
//	return 0;
//}


//#include<stdio.h>



//int main()
//{
//	//3��4��ζ������3��4�У�
//	//��ȫ��ʼ����
//	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//����ȫ��ʼ����
//	int arr2[3][4] = { 1,2,3,4 };
//	
//
//	//����ĳ�ʼ����ʽ
//	int arr3[3][4] = { {1,2},{3,4},{4,5} };
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//
//
//	//����ĳ�ʼ����ʽ
//	int arr3[3][4] = { {1,2},{3,4},{4,5} };
//
//	printf("%d ", * (arr3 + 1)[1]);//����2��2�е�Ԫ��
//	
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//����ĳ�ʼ����ʽ
//	int arr3[3][4] = { {1,2},{3,4},{4,5} };
//
//	//����2��2��Ԫ��
//	printf("%d ",arr3[1][1]);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&%d:%p \n",arr[i][j],&arr[i][j]);
//		}
//	}
//
//
//	return 0;
//}



#include<stdio.h>


int main()
{
	int arr[5] = {1,2,3,4,5};
	int i = 0;
	for (i = 1; i <= 5; i++)
	{
		printf("%d ",arr[i]=i);
	}
	return 0;
}





