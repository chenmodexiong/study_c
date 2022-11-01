#define  _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "abcde";
	//数组名本身就是地址，并且是字符串第一个字符的地址；
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}

//#include<stdio.h>
//
//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
//
//void Print(unsigned int n)
//{
//	if(n>9)
//	{
//		Print(n/10);
//	}
//	printf("%d ",n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u",&num);
//	Print(num);
//	return 0;
//}




//导致栈溢出的最简单递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

////全局变量不初始化默认是0；
//int val;
//int main()
//{
//	printf("%d\n",val);
//	return 0;
//}


//int amd;//变量的声明；
//int main()
//{
//	printf("%d\n",amd);
//	return 0;
//}
//int amd = 2022;//变量的定义；

//导入静态库
//#pragma comment(lib,"add_11_1.lib")
//
//#include<stdio.h>
//#include"add.h"
////测试模块
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int ret=Add(a,b);
//	printf("sum=%d\n",ret);
//	return 0;
//}

//#include<stdio.h>
////函数的声明
//int Add(int x,int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret=Add(a,b);
//	printf("%d\n",ret);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//链式访问举例
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//void Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//函数是不能嵌套定义的，
//	//函数只可以嵌套访问；
//	void Add(int x, int y)
//	{
//		return x + y;
//	}
//
//	return 0;
//}


//#include<stdio.h>
//void Add(int* num)
//{
//	*num += 1;
//	//(*num++);
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//
//	printf("%d\n",num);
//	return 0;
//}
//#include<stdio.h>
//int count(int sum)
//{
//	sum += 1;
//	return sum;
//}
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	sum=count(sum); 
//	sum = count(sum);
//	sum = count(sum);
//	sum = count(sum);
//
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	scanf("%d",&k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=search(arr,k,sz);
//	if (ret != -1)
//	{
//		printf("找到了，下标是：%d",ret);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}