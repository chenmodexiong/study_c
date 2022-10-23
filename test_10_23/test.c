#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 ,0};
    int i = 0;
    int sz = strlen(arr);
    for (i = 0; i < sz; i++)
    {
        printf("%c",arr[i]);
    }
}

//int main()
//{
//    int i = 0;
//    while ((scanf("%d", &i)) != EOF)
//    {
//        printf("%c", i);
//    }
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	char ch = getchar();
//	for (i = 0; i < 5; i++)
//	{
//		//先打印空格
//		int j = 0;
//		for (j = 0; j < 4-i; j++)
//		{
//			printf(" ");
//		}
//		//打印字符及其后面的空格
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//    char ch = 0;
//    ch = getchar();
//    printf("    %c\n", ch);
//    printf("   %c %c\n", ch, ch);
//    printf("  %c %c %c\n", ch, ch, ch);
//    printf(" %c %c %c %c\n", ch, ch, ch, ch);
//    printf("%c %c %c %c %c\n", ch, ch, ch, ch, ch);
//    return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		printf("%d\n",ch);
//	}
//	return 0;
//}
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();
//    }
//    return 0;
//}
//#include<ctype.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isalpha(ch))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    float c_grade = 0;
//    float math_grade = 0;
//    float eng_grade = 0;
//    scanf("%d;%f,%f,%f", &n, &c_grade, &math_grade, &eng_grade);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", n, c_grade, math_grade, eng_grade);
//    return 0;
//}

//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//    printf("%15d\n", 0XABCDEF);
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//putchar(ch+32);
//		//printf("\n");
//		printf("%c\n",ch+32);
//		getchar();
//	}
//	return 0;
//}
//int main()
//{
//    char i = 0;
//    while (scanf("%c", &i) != EOF)
//    {
//        printf("%c\n", i+32);
//        getchar();
//    }
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	while (n)
//	{
//		printf("%d",n%10);
//		n /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	scanf("%d",&i);
//	for (j = 1; j < 5; j++)
//	{
//		ret = i % 10;
//		i /= 10;
//		printf("%d", ret);
//	}
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    int arr[1] = {i};
//    printf("%d\n", arr[0]);
//    return 0;
//}
//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//    int a = printf("Hello world!\n");
//    printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//    printf("%15d\n", 0XABCDEF);
//    return 0;
//}
//int main()
//{
//    printf("%#o %#X\n", 1234, 1234);
//    printf("%#d\n",1234);
//    return 0;
//}
//int main()
//{
//    printf("0%o 0X%x", 1234, 1234);
//    return 0;
//}
//int main()
//{
//    printf("0%o 0X%X", 1234, 1234);
//    return 0;
//}
//int main()
//{
//    printf("     **\n     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *     \n");
//    printf("    *  *     \n");
//    return 0;
//}
//int main()
//{
//    printf("The size of short is %d bytes\n", sizeof(short));
//    printf("The size of int is %d bytes\n", sizeof(int));
//    printf("The size of long is %d bytes\n", sizeof(long));
//    printf("The size of long long is %d bytes\n", sizeof(long long));
//    return 0;
//}
//int main()
//{
//    printf("v   v\n");
//    printf(" v v\n");
//    printf("  v\n");
//    return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个操作数\n");
//	scanf("%d %d",&num1,&num2);
//	sum = num1 + num2;
//	printf("%d\n",sum);
//	return 0;
//}
//int global = 2019;//全局变量
//int main()
//{
//    int local = 2018;//局部变量
//    //下面定义的global会不会有问题？
//    int global = 2020;//局部变量
//    printf("global = %d\n", global);
//    return 0;
//}
//int main()
//{
//	printf("%d\n",sizeof(int));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	return 0;
//}