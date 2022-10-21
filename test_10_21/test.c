#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int line = 0;
	while (line <= 100000)
	{
		printf("敲代码%d\n",line);
		line++;
	}
	if (line > 100000)
		printf("成为大牛\n");
	else
		printf("好好学习，天天编程\n");
	return 0;
}


//int main()
//{
//	int i = 0;
//	printf("你要好好学习吗\n");
//	printf("好好学习请输入1，打游戏请输入2\n");
//	scanf("%d",&i);
//	if (i == 1)
//		printf("成为大牛，拿到好offer\n");
//	else if(i==2)
//		printf("回家卖红薯\n");
//	else
//		printf("输入错误\n");
//	return 0;
//}



//int main()
//{
//	char add[] = {"\073"};
//	printf("%s\n",add);
//	return 0;
//}
//int main()
//{
//	char ch[] = "\a";
//	printf("%s",ch);
//	return 0;
//}


//int main()
//{
//	char arr[] = {'a','b','c','\0'};
//	return 0;
//}
//int main()
//{
//	char a = '\0';
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcde\0";
//	int len = strlen(arr1);
//	printf("%d\n",len);
//	return 0;
//}

//enum sex
//{
//	BLUE,
//	RED,
//	GREEN
//};
//int main()
//{
//	printf("%d\n",BLUE);
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	return 0;
//}

//#define M 100
//int main()
//{
//	int arr[M] = {0};
//	printf("%p\n",arr);
//	return 0;
//}


//int main()
//{
//	const int i = 0;
//	int arr[i] = { 0 };
//	return 0;
//}
//int main()
//{
//	const int g_val = 10;
//	g_val = 8;
//	printf("%d\n",g_val);
//	return 0;
//}

//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	int a = 0;
//	while (a<10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}


//void test()
//{
//	int i = 10;
//}
//int main()
//{
//	printf("%d\n",i);
//	return 0;
//}






