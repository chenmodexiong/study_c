#define  _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>

//
//int main()
//{
//	printf("好好学习，天天编程\n");
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



//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
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
////初始化为0
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




//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

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



//打印每一个元素
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
////逆序元素
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
//	//3和4意味着数组3行4列；
//	//完全初始化；
//	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//不完全初始化；
//	int arr2[3][4] = { 1,2,3,4 };
//	
//
//	//特殊的初始化方式
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
//	//特殊的初始化方式
//	int arr3[3][4] = { {1,2},{3,4},{4,5} };
//
//	printf("%d ", * (arr3 + 1)[1]);//访问2行2列的元素
//	
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//特殊的初始化方式
//	int arr3[3][4] = { {1,2},{3,4},{4,5} };
//
//	//访问2行2列元素
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





