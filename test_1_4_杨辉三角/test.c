#define  _CRT_SECURE_NO_WARNINGS 1


//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//����

//��һ��ֱ���ҹ��ɵķ���

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[10][10] = { 0 };
//	//�ȴ�ӡ1
//	for (a = 0; a < 10; a++)
//	{
//		arr[a][0] = 1;
//		for (b = 0; b <= a; b++)
//		{
//			if (a == b)
//			{
//				arr[a][b] = 1;
//			}
//		}
//	}
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b <= a; b++)
//		{
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//û�пո�İ汾
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[10][10] = { 0 };
//	for (a = 0; a < 10; a++)
//	{
//		arr[a][0] = 1;
//		for (b = 0; b <= a; b++)
//		{
//			if (a > 0 && b > 0)
//			{
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
//			}
//			if (a == b)
//			{
//				arr[a][b] = 1;
//			}
//		}
//	}
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b <= a; b++)
//		{
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int a = 1;
//	int b = 1;
//
//	for (a = 0; a < 10; a++)
//	{
//		b = 10 - a;
//		while (b--)
//		{
//			printf(" ");
//		}
//
//		arr[a][0] = 1;//ע����������Ǵ�0��ʼ�����������±���0��
//
//		for (b = 0; b <= a; b++)
//		{
//			if (a == b)
//				arr[a][b] = 1;
//			if (a > 1 && b >= 1)
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];//��һ��ǰһ�кͱ�����֮��
//			printf("%d ", arr[a][b]);//��ֵ��һ�к�ֱ�Ӵ�ӡ�õ��������ӡЧ������ֱ��
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}


//���հ汾
//#include<stdio.h>
//#define N 14
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[N][N] = { 0 };
//	int n = 0;                   //�����n��Ҫ̫��
//	printf("������Ҫ��ӡ������\n");//����14�л����������淶
//	scanf("%d", &n);
//	for (a = 0; a < n; a++)
//	{
//		//b = 10 - a;
//		//while (b--)
//		//{
//		//	printf(" ");
//		//}
//		for (int i = 0; i <n-a; i++)
//		{
//			printf("  ");//�ڴ�ӡÿ������ǰ��ӡ�ո�
//		}
//		arr[a][0] = 1;//����ߵ�1
//		for (b = 0; b <= a; b++)
//		{
//			if (a > 0 && b > 0)
//			{
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];//�м������ֵ
//			}
//			if (a == b)
//			{
//				arr[a][b] = 1;//���ұߵ�1
//			}
//			printf("%6d", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}





//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//����

//�ڶ��ֹ�ʽ��
//
//#include <stdio.h>
///*
// * ����׳ˣ���������ܻ��롣ΪʲôҪ��float�������Ե�һ�ε�ʱ��
// * �����int�Ļ�����ô�ڴ�ӡ���������Ժ�ͻ����
// * ������Ϊ�׳˵����Ƚϴ������int�Ͳ������ˡ���ͬ
// */
//float J(int i) 
//{
//    int j;
//    float k = 1;
//    for (j = 1; j <= i; j++)
//        k = k * j;
//    return(k);
//}
//float C(int i, int j) 
//{  /*���������*/
//    float k;
//    k = J(j) / (J(i) * J(j - i));
//    return(k);
//}
//void main() 
//{
//    int i = 0, j, k, n;  /*��ӡ�������*/
//    while (i <= 0 || i > 16)
//    {
//        printf("������Ҫ��ӡ��������");
//        scanf("%d", &i);
//    }
//    printf("%d������������£�\n", i);
//    for (j = 0; j < i; j++) 
//    {
//        for (k = 1; k <= (i - j); k++)
//            printf("  ");
//        for (n = 0; n <= j; n++)
//            printf("%4.0f", C(n, j));
//        printf("\n");
//    }
//    printf("\n\n");
//}

//��ʽ�����������ÿһ��Ƕ���ʽϵ��
//������һ�����������ʾ


#include<stdio.h>

int fun1(int i)
{
	int ret = 1;
	for (int k = 1; k <= i; k++)
	{
		ret *= k;
	}
	return ret;
}
int fun2(int a, int b)
{
	return (fun1(a) / (fun1(b) * fun1(a - b)));
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int a = 0; a < n - i; a++)
		{
			printf("  ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%4d ", fun2(i, j));
		}
		printf("\n");
	}
	return 0;
}

//�����ַ���
//�ݹ�

#include<stdio.h>

int fun(int a, int b)
{
	return ((b == 1) || (b == a)) ? 1 : fun(a - 1, b - 1) + fun(a - 1, b);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)//ע��Ҫ��1��ʼ
	{
		for (int a = 0; a < n - i; a++)
		{
			printf("  ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%4d ", fun(i, j));
		}
		printf("\n");
	}
	return 0;
}


//#include <stdio.h>
//int fun(int a, int b) {
//	//�����ĵݹ���ã������Լ����ϵ����Լ�����������Ӻ���������ڣ�������ֵ���
//	//�����ĳ������Ϊһ���ڴ��ַ 
//	return (b == 1 || b == a) ? 1 : fun(a - 1, b - 1) + fun(a - 1, b);
//	//��Ŀ�����������Ӧ�� 
//}
//int main() 
//{
//	int N;
//	printf("��������������ε�������1 ~ 23����");
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) 
//	{
//		for (int j = N - i; j > 0; j--)
//			printf("    ");
//		for (int j = 1; j <= i; j++)
//			printf(" %7d", fun(i, j));
//		putchar('\n');   //����ת���ַ�putchar��� 
//	}
//	return 0;
//}






