#define  _CRT_SECURE_NO_WARNINGS 1
//
////�����ַ���
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* arr)
//{
//	int left = 0;
//	int right = (int)strlen(arr) - 1;
//	while (left<right)
//	{
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets_s(arr,10000);
//	//scanf("%[^d\n]",&arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//�����ַ���
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str+strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets_s(arr, 10000);
//	//scanf("%[^d\n]",&arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//��ӡ����
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int m = 6;
//	int tmp = 6;
//	int j = 0;
//	//�����ϰ��
//	for (tmp=6;tmp>=0;tmp--)
//	{
//		for (i = m; i >= 0; i--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * n - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		m--;
//		n++;
//	}
//	//�����°��
//	
//	return 0;
//}

////��ӡ����
//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//�����ϰ��
//	//ȷ������
//	for (i = 0; i < line; i++)
//	{
//		//�ȴ�ӡ�ո�
//		int j = 0;
//		for (j = 0 ; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//�ٴ�ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�����°��
//	//
//	for (i = 0; i < line-1; i++)
//	{
//		//�ȴ�ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//�ٴ�ӡ*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
// 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//ȷ���Ǽ�λ��
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		//������n�η�֮��
//		int sum = 0;
//		while (tmp)
//		{
//			int n = tmp % 10;
//			tmp /= 10;
//			sum += (int)pow(n, count);
//		}
//		//�ж��ǲ���ˮ�ɻ�������������
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}


//��ӡ����

//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//�����ϰ벿��
//	//
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//�ȴ�ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�����°벿��
//	//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//�ȴ�ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//�ٴ�ӡ�Ǻ�
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int k = 0;
	int sum = 0;
	int i = 0;
	//for (i = 0; i < n; i++)
	//{
	//	k = k * 10 + a;
	//	sum += k;
	//}
	while (n)
	{
		k = k * 10 + a;
		sum += k;
		n--;
	}
	printf("%d\n", sum);
	return 0;
}
