#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if ((a + b) >= 100)
        printf("%d\n", (a + b) % 100);
    else
        printf("%d\n", a + b);
    return 0;
}
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 10; j <= 10000; j *= 10)
//        {
//            //�������
//            sum += (i / j) * (i % j);
//        }
//        //�ж��ǲ���Ҫ������
//        if (sum == i)
//            printf("%d ", sum);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 10000; i < 99999; i++)
//    {
//        int sum = 0;
//        for (j = 10; j <= 10000; j = 10 * j)
//        {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    //��������
//    int i = 0;
//    scanf("%d", &i);
//    //ȡ�ø�����������(ѭ��)
//            //i/10000 * i%10000
//    printf("%d*%d+", i / 10000, i % 10000);
//    printf("%d*%d+", i / 1000, i % 1000);
//    printf("%d*%d+", i / 100, i % 100);
//    printf("%d*%d\n", i / 10, i % 10);
//    //������
//    //��ӡ    
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int score[3] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&score[i]);
//		//printf("score=%d,",score[i]);
//	}
//	printf("score1=%d score2=%d score3=%d",score[0],score[1],score[2]);
//	return 0;
//}
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	ret = (int)pow(2, 6);
//	//pow��������n��m�η��õ�;
//	//ǿ��ת��Ϊint����,���⾯��;
//	//pow����Ĭ�Ϸ�����double����;
//	printf("%d\n",ret);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    //����ɼ�
//    int score1 = 0;
//    int score2 = 0;
//    int score3 = 0;
//    scanf("%d %d %d", &score1, &score2, &score3);
//    //����ɼ�,ע���ʽ
//    printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
//    return 0;
//}
//#include <stdio.h>
////�����ֵ
//#define PI 3.1415926
//int main()
//{
//    //����뾶,��������
//    double r = 0.0;
//    scanf("%lf", &r);
//    //����������
//    double v = 0.0;
//    v = (4 / 3.0) * PI * (r * r * r);
//    //������,������λС��
//    printf("%.3lf", v);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    double circumference = 0.0;
//    double area = 0.0;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double p = (a + b + c) / 2;
//    circumference = a + b + c;
//    area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2lf area=%.2lf", circumference, area);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int grade = 0;
//	int ret = 0;
//	scanf("%d",&grade);
//	ret = grade / 10;
//	switch (ret)
//	{
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	default:
//		printf("E\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d",&x);
//	if (x < 1)
//		printf("%d", x);
//	else if (x >= 1 && x < 10)
//		printf("%d", 2 * x - 1);
//	else
//		printf("%d", 3 * x - 11);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a + b > c && a + c > b && b + c > a)
//		printf("��������\n");
//	else
//		printf("����������\n");
//	return 0;
//}