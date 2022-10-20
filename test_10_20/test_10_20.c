#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    int t = 0;
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }
    return 0;
}
//int main()
//{
//    int seconds = 0;
//    int h = 0;
//    int m = 0;
//    int s = 0;
//    scanf("%d", &seconds);
//    h = seconds / 3600;
//    m = (seconds % 3600) / 60;
//    s = seconds - h * 3600 - m * 60;
//    printf("%d %d %d", h, m, s);
//    return 0;
//}
//int main()
//{
//    float grade1 = 0, grade2 = 0, grade3 = 0, grade4 = 0, grade5 = 0;
//    while (scanf("%f%f%f%f%f", &grade1, &grade2, &grade3, &grade4, &grade5) != EOF)
//    {
//        float sum = grade1 + grade2 + grade3 + grade4 + grade5;
//        printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", grade1, grade2, grade3, grade4, grade5, sum);
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &j) != EOF)
//    {
//        for (i = 0; i < j; i++)
//        {
//            printf("%c", '*');
//            if (i==j-1)
//                printf("\n");
//        }
//    }
//    return 0;
//}




//int main()
//{
//    float grade1, grade2, grade3, grade4, grade5;
//    int i = 0;
//    while (scanf("%f%f%f%f%f", &grade1, &grade2, &grade3, &grade4, &grade5) != EOF)
//    {
//        printf("%.1f %.1f %.1f %.1f %.1f\n", grade1, grade2, grade3, grade4, grade5);
//    }
//    return 0;
//}



//#define Add(x,y) ((x)+(y))
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int sum = Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}



//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	return 0;
//}
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//#define MAX 1000
//int main()
//{
//	printf("%d\n",);
//	return 0;
//}




//extern int num1;
//int main()
//{
//	printf("%d\n",num1);
//	return 0;
//}



//extern MAX;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max=MAX(a,b);
//	printf("%d\n",max);
//	return 0;
//}



