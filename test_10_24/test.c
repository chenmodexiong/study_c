#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int i, j;
    scanf("%d%d", &a, &b);
    i = a / b;
    j = a % b;
    printf("%d %d", i, j);
    return 0;
}
//int main()
//{
//    char i = 0;
//    scanf("%c", &i);
//    printf("%d\n", i);
//    return 0;
//}
////int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    int tmp = a;
//    a = b;
//    b = tmp;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    long time = 31560000;
//    time = time * age;
//    printf("%ld\n", time);
//    return 0;
//}
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    int time = 3156;
//    time = time * age;
//    printf("%d0000\n", time);
//    return 0;
//}
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    int time = 31560000;
//    int n = time * age;
//    printf("%d\n", n);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //1向左移动n位计算的就是2的n次方
//        m = 1 << n;
//        printf("%d\n", m);
//    }
//    return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = a << 1;
//	printf("%d\n",b);
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d %2d %2d", &year, &month, &date);
//    printf("year=%04d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", date);
//    return 0;
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    int i = 0;
//    scanf("%d", &i);
//    if (i)
//    {
//        date = i % 100;
//        month = (i / 100) % 100;
//        year = (i / 100) / 100;
//    }
//    printf("year=%d\n", year);
//    printf("month=%d\n", month);
//    printf("date=%d\n", date);
//    return 0;
//}
//int main()
//{
//	printf("好好学习,天天编程\n");
//	return 0;
//}
