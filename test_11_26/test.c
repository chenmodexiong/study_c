#define  _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//    fun(students + 1);
//    return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//#include<stdio.h>
//
//int main()
//{
//	int price = 1;
//	int money = 20;
//	int count = 0;
//	for (price; price <= money; price++)
//	{
//		count++;
//	}
//	count += count / 2;
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//            scanf("%d ", &arr[i][j]);
//    }
//    int sum = 0; //计数器，计算对角线下方是不是全为0
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (j < i) //把对角线下方的元素全部加起来
//                sum += arr[i][j];
//        }
//    }
//    if (sum == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    int flag = 1;
//    for (i = 1; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                flag = -1;
//            }
//        }
//    }
//    if (flag == 1)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[3][3];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//    }
//}


//#include<stdio.h>
//#include<assert.h>
//
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//		//str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%u\n", my_strlen(arr));
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000][1000] = { 0 };
//    int i = 0;
//    //输入第一个数组
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //输入第二个数组
//    int arr2[1000][1000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //判断相等
//    int flag = 1;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = -1;
//            }
//        }
//    }
//    if (flag == 1)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10] = { 0 };
//    int i = 0;
//    //输入第一个数组
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //输入第二个数组
//    int arr2[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    // //判断相等
//    // int flag = 1;
//    // for (i = 0; i < n; i++)
//    // {
//    //     int j = 0;
//    //     for (j = 0; j < m; j++)
//    //     {
//    //         if (arr1[i][j] != arr2[i][j])
//    //         {
//    //             flag = -1;
//    //         }
//    //     }
//    // }
//    // if (flag == 1)
//    // {
//    //     printf("YES\n");
//    // }
//    // else
//    // {
//    //     printf("NO\n");
//    // }
//
//    //判断相等
//    int sum1 = 0;
//    int sum2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            sum1 += arr1[i][j];
//            sum2 += arr2[i][j];
//        }
//    }
//    if (sum1 == sum2)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//}

//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。

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
//	//遍历判断是否奇数，
//	int j = 0;
// 	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] % 2) != 0)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//遍历判断是否是偶数,
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] % 2) == 0)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//打印数组arr,
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
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
//	//打印数组arr
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//
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
//        scanf("%d ", &arr[i]);
//    }
//    int flag = 0;
//    for (i = 0; i < N; i++)
//    {
//        //判断是否有序
//        if (arr[i] > arr[i + 1])
//        {
//            flag = -1;
//        }
//        else if (arr[i] < 0)
//        {
//            break;
//        }
//        else
//        {
//            flag = 1;
//        }
//    }
//    if (flag == 1)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//    return 0;
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
//        scanf("%d ", &arr[i]);
//    }
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 0; i < N; i++)
//    {
//        //判断是否有序
//        if (arr[i] > arr[i + 1])
//        {
//            flag1 = 1;
//        }
//        else if (arr[i] < arr[i + 1])
//        {
//            flag2 = 1;
//        }
//    }
//    if ( flag1 && flag2 )
//    {
//        printf("unsorted\n");
//    }
//    else
//    {
//        printf("sorted\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a[55], n, flag1 = 0, flag2 = 0, i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) 
//    {
//        scanf("%d", &a[i]);
//        if (i > 0) 
//        {
//            if (a[i] < a[i - 1]) 
//            {
//                flag1 = 1;
//            }
//            else if (a[i] > a[i - 1]) 
//            {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 && flag2) 
//        printf("unsorted\n");//只有当flag1和flag2都为1的时候序列无序
//    else 
//        printf("sorted\n");
//}

