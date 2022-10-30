#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int get_max(int x, int y)
{
    return (x > y ? x : y);
}
int main()
{
    int n = 0;
    int i = 0;
    int score[] = { 0 }; 
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &score[i]);
    }
    get_max(score[i], score[i + 1]);
    printf("%d\n", score[i]);
    return 0;
}
//#include <stdio.h>
//
//int main()
//{
//    float val = 0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    scanf("%f %d %d %d", &val, &month, &day, &flag);
//    switch (flag)
//    {
//    case 1:
//    {
//        if (day == 11)
//            val = val * 0.7 - 50;
//        else
//            val = val * 0.8 - 50;
//        break;
//    }
//    case 0:
//    {
//        if (day == 11)
//            val = val * 0.7;
//        else
//            val = val * 0.8;
//        break;
//    }
//    }
//    if (val <= 0)
//        val = 0;
//    printf("%.2f", val);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%X %o", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float score = 0;
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%f",&score);
//		sum += score;
//	}
//	printf("%.1f",sum/5.0);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    int ret = 0;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF)
//    {
//        if (m % h == 0)
//        {
//            ret = n - (m / h) * 1;
//        }
//        else
//        {
//            ret = (n - (m / h) * 1) - 1;
//        }
//    }
//    printf("%d\n", ret);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    int ret = 0;
//    scanf("%d %d %d", &n, &h, &m);
//    if (m % h == 0)
//    {
//        ret = n - (m / h) * 1;
//    }
//    else
//    {
//        ret = n - (m / h) * 1 - 1;
//    }
//    printf("%d\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    float score = 0;
//    float sum = 0;
//    float avg = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%f", &score);
//        sum += score;
//    }
//    printf("%.2f %.2f", sum, sum / 3.0);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    float score1 = 0;
//    float score2 = 0;
//    float score3 = 0;
//    scanf("%f %f %f", &score1, &score2, &score3);
//    float sum = score1 + score2 + score3;
//    float aver = sum / 3;
//    printf("%.2f %.2f", sum, aver);
//    return 0;
//}
//#include <stdio.h>
//
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
//#include<stdio.h>
//int main()
//{
//	char c = 'h';
//	//c = getchar();
//	printf("%c\n",c);
//	return 0;
//}

