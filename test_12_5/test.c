#define  _CRT_SECURE_NO_WARNINGS 1


//���1~n֮���λ��1������
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    int n = 0;
//    int num = 1;
//    int i = 0;
//    scanf("%d", &n);
//        while (num <= n)
//        {
//            int count = 2;
//            for (count = 2; count <= sqrt(num); count++)
//            {
//                if (num % count == 0)
//                {
//                    break;
//                }
//            }
//            if (count > sqrt(num) && num%10==1)
//            {
//                i++;
//                printf("%d ", num);
//            }
//            num+=2;
//        }
//        printf("\n%d\n", i);
//
//    return 0;
//}

//���1~n֮�����е�����
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 1;
//	int count = 2;
//	int i = 0;
//	while (num<=n)
//	{
//		for (count = 2; count <= sqrt(num); count++)
//		{
//			if (num % count == 0)
//			{
//				break;
//			}
//		}
//		/*count = 2;
//		while (count <= sqrt(num))
//		{
//			if (num % count == 0)
//			{
//				break;
//			}
//			count++;
//		}*/
//		if (count>sqrt(num))
//		{
//			i++;
//			printf("%d ", num);
//		}
//		num+=2;
//	}
//	printf("\n%d\n", i);
//	return 0;
//}
 
// 
//���1~n֮�����е�����
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (int num = 1; num <= n; num += 2)//��Ϊ����������Ϊż��������ֱ��+=2����
//	{
//		int count = 0;
//		//ֻҪ�жϸ��������Ŀ�ƽ���ܷ��������ɣ�������ȫ���������Դ����ߴ���Ч��
//		for (count = 2; count <= sqrt(num); count++)
//		{
//			if (num % count == 0)
//			{
//				break;
//			}
//		}
//		if (sqrt(num) < count)
//		{
//			printf("%d ", num);
//			i++;
//		}
//	}
//	printf("\n����:%d��\n", i);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//������[M,N]�ڵ����������ĸ���
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &m,&n);
//	int i = 0;
//	for (int num = m; num <= n; num++)
//	{
//		int count = 0;
//		for (count = 2; count <= sqrt(num); count++)
//		{
//			if (num % count == 0)
//			{
//				break;
//			}
//		}
//		if (sqrt(num) < count)
//		{
//			i++;
//		}
//	}
//	printf("%d\n", i);
//	return 0;
//}

//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &m,&n);
//	int i = 0;
//	for (int num = m; num <= n; num++)//��Ϊ����������Ϊż��������ֱ��+=2����
//	{
//		int count = 0;
//		//ֻҪ�жϸ��������Ŀ�ƽ���ܷ��������ɣ�������ȫ���������Դ����ߴ���Ч��
//		for (count = 2; count <= sqrt(num); count++)
//		{
//			if (num % count == 0)
//			{
//				break;
//			}
//		}
//		if (sqrt(num) < count)
//		{
//			printf("%d ", num);
//			i++;
//		}
//	}
//	printf("\n����:%d��\n", i);
//	return 0;
//}

//�ж��Ƿ�������
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			break;
//		}
//	}
//	if (i > sqrt(n))
//	{
//		printf("true\n");
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}

