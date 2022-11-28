#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    //输入第一个数组
//    int arr1[] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr1[i]);
//    }
//    //输入第二个数组
//    int arr2[] = { 0 };
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d ", &arr2[i]);
//    }
//    //将两个数组合并成一个
//    int tol[100] = { 0 };
//    int j = 0;
//    i = 0;
//    while (i < m + n)
//    {
//        tol[j++] = arr1[i];
//        tol[j] = arr2[i];
//        i++;
//        //if (arr1[i] < arr2[i])
//        //{
//        //    tol[j++] = arr1[i];
//        //    tol[j] = arr2[i];
//        //}
//        //else
//        //{
//        //    tol[j++] = arr1[i];
//        //    tol[j] = arr2[i];
//        //}
//        //i++;
//    }
//    //将数组冒泡排序
//    for (i = 0; i < m + n - 1; i++)
//    {
//        for (j = 0; j < m + n - 1 - i; j++)
//        {
//            if (tol[j] > tol[j + 1])
//            {
//                int tmp = tol[j];
//                tol[j] = tol[j + 1];
//                tol[j + 1] = tmp;
//            }
//        }
//    }
//    //输出数组
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", tol[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,4,66,84,34,56,7,9,10,13 };
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			int tmp = arr[0];
//			arr[0] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//	int max = arr[0];
//	printf("MAX=%d\n", max);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	//输入整数数组
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//排序正确的数组
//	int arr2[10] = { 0 };
//	//遍历数组判断是否是奇数
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] % 2) != 0)
//		{
//			arr2[j++] = arr[i];
//		}
//	}
//	//遍历数组判断是否是偶数
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] % 2) == 0)
//		{
//			arr2[j++] = arr[i];
//		}
//	}
//	//打印数组arr2
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int N = 0;
//    scanf("%d ", &N);
//    int i = 0;
//    int arr[50] = { 0 };
//    //输入N个整数
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 1; i < N; i++)
//    {
//        //判断是否有序
//        if (arr[i] > arr[i - 1])
//        {
//            flag1 = 1;
//        }
//        else if (arr[i] < arr[i - 1])
//        {
//            flag2 = 1;
//        }
//    }
//    if (flag1 && flag2)
//    {
//        printf("unsorted\n");
//    }
//    else
//    {
//        printf("sorted\n");
//    }
//    return 0;
//}


#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    //输入第一个数组
    int arr1[50] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //输入第二个数组
    int arr2[50] = { 0 };
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //将两个数组合并成一个
    int tol[101] = { 0 };
    int j = 0;
    for (i = 0; i < n ; i++)
    {
        tol[j++] = arr1[i];
    }
    for (i = 0; i <  m; i++)
    {
        tol[j++] = arr2[i];
    }
    //将数组冒泡排序
    for (i = 0; i < m + n - 1; i++)
    {
        for (j = 0; j < m + n - 1 - i; j++)
        {
            if (tol[j] > tol[j + 1])
            {
                int tmp = tol[j];
                tol[j] = tol[j + 1];
                tol[j + 1] = tmp;
            }
        }
    }
    //输出数组
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", tol[i]);
    }
    return 0;
}
