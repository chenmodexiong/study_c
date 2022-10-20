#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int i = 0;
    while (scanf("%d", &i) != EOF)
    {
        if (i >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
}
//int main()
//{
//    int i = 0;
//    while (scanf("%d", &i) != EOF)
//    {
//        if (i % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    while (scanf("%d %d", &i, &j) != EOF)
//    {
//        if (i < j)
//            printf("%d<%d", i, j);
//        else if (i > j)
//            printf("%d>%d", i, j);
//        else
//            printf("%d=%d", i, j);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    scanf("%d%d", &i, &j);
//    if (i < j)
//        printf("i<j");
//    else if (i > j)
//        printf("i>j");
//    else
//        printf("i=j");
//    return 0;
//}
//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d",&a,&b);
//	max=get_max(a, b);
//	printf("%d\n",max);
//	return 0;
//}

