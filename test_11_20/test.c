#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;//创建一个变量，一定会开辟一块空间；
//	int* pa = &a;//将a的地址取出来放到pa里面去，pa就是一个指针变量；
//
//	printf("%p\n", &a);//将a的地址和pa打印出来看一下；
//	printf("%p\n", pa);
//
//	*pa = 20;//*解引用操作符，*pa得到的其实就是a，
//	         //这里就是直接通过指针找到了a，从而直接对a进行操作
//	printf("a=%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//
//	//int* pa = &a;
//	//*pa = 0;
//
//	return 0;
//}



//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//
//	char* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	int* pb = &a;
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= sz; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p=test();
//	printf("%d\n", *p);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int p = &arr[9] - &arr[0];
//	printf("%d\n", p);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int my_strlen(char* start)
//{
//	char* str = start;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	//将这个数组初始化为1~10；
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	char arr[] = "";
//	char ch = 0;
//	while ((ch = getchar()) != '\0')
//	{
//		char arr[] = ch;
//	}
//	return 0;
//}


//
//#include<stdio.h>
//
//int main()
//{
//	char str[101];
//	while (fgets(str, 101, stdin) != NULL) 
//	{
//		int l = 0;
//		while (str[l] != '\n' && str[l] != '\0')l++;
//		for (int i = l - 1; i >= 0; i--)printf("%c", str[i]);
//		printf("\n");
//	}
//}
//


//
//#include<stdio.h>
//
//int main()
//{
//	char arr[13] = { 0 };
//	int left = 0;
//	int right = 12;
//	while (left<right)
//	{
//		int mid = (left + right) / 2;
//		printf("* ");
//		left++;
//		right--;
//	}
//	return 0;
//}
//













