#define  _CRT_SECURE_NO_WARNINGS 1



//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if(((a==3)+(b==2)==1) && ((b==2)+(e==4)) && ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1)
//							&& (120 == a * b * c * d * e))
//						{
//							
//							printf("A=%d B=%d C=%d D=%d E=%d", a, b, c, d, e);
//							return 0;
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//		for (B = 1; B <= 5; B++)
//			for (C = 1; C <= 5; C++)
//				for (D = 1; D <= 5; D++)
//					for (E = 1; E <= 5; E++)
//						if (((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 && \
//							(C == 5) + (D == 3) == 1 && (E == 4) + (A == 1) == 1) == 1)
//							if (120 == A * B * C * D * E)//�������β�ͬ�������Ϊ��ֵ120��ɸѡ�ظ�����
//								printf("A=%d  B=%d  C=%d  D=%d  E=%d\n", A, B, C, D, E);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if (((A == 3) + (B == 1)) == 1 && ((B == 2) + (E == 4)) == 1 && ((C == 1) + (D == 2)) == 1 && ((C == 5) + (D == 3)) == 1 && ((E == 4) + (A == 1)) == 1)
//						{
//							printf("A=%d B=%d C=%d D=%d E=%d ", A, B, C, D, E);
//							return 0;
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
����Ϊ4�����ɷ��Ĺ���:
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭������*/

//#include<stdio.h>
//
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0;
//	for (A = 0; A <= 1; A++)
//	{
//		for (B = 0; B <= 1; B++)
//		{
//			for (C = 0; C <= 1; C++)
//			{
//				for (D = 0; D <= 1; D++)
//				{
//					if ((A == 0) + (C == 1) + (D == 1) + (D == 0) == 3)
//					{
//						if ((A + B + C + D) == 3)
//						{
//							printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//						}
//					}
//
//				}
//			}
//		}
//	}
//	return 0;
//}


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
		for (int a = 0; a < n-i; a++)
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
		for (int a = 0; a < n-i; a++)
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













