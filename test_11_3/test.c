#define  _CRT_SECURE_NO_WARNINGS 1

// �ݹ鷽ʽ
//#include<stdio.h>

//int Fib(num)
//{
//	if (num <= 2)
//		return 1;
//	else
//		return Fib(num - 1) + Fib(num - 2);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	int ret=Fib(num);
//	printf("%d\n",ret);
//	return 0;
//}


////������ʽ(�ǵݹ鷽ʽ)
//#include<stdio.h>
//
//int Fib(num)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int count = 0;
//	while (count<num-2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		count++;
//	}
//	if (num <= 2)
//	{
//		return 1;
//	}
//	return c;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	int ret = Fib(num);
//	printf("%d\n",ret);
//	return 0;
//}

//
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* arr)
//{
//	int sz=strlen(arr);
//	int tmp = *arr;
//	*arr = *(arr + sz - 1);
//	if (strlen(arr+1)>=2)
//		reverse_string(arr+1);
//	*(arr + sz - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//�ַ���һ����һ���ַ����飻
//	//������������ǵ�һ��Ԫ�صĵ�ַ��
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}


//#include<stdio.h>
//void Print(char* string)
//{
//	while (*string != '\0')
//	{
//		string++;
//		Print(string);
//	}
//	printf("%c ", *(string-1));
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//�ַ���һ����һ���ַ����飻
//	//������������ǵ�һ��Ԫ�صĵ�ַ��
//	Print(arr);
//	return 0;
//}


//#include<stdio.h>
////�ݹ鷽ʽ
//int mul(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * mul(n - 1);
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=mul(n);
//	printf("%d\n",ret);
//
//	return 0;
//}



//#include<stdio.h>
//
////�ǵݹ鷽ʽ
//
//int is_mul(int n)
//{
//	int i = 0;
//	int mul = 1;
//	for (i = 1; i <= n; i++)
//	{
//		mul *= i;
//	}
//	return mul;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=is_mul(n);
//	printf("%d\n",ret);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* arr)
//{
//	int sz = strlen(arr);
//	int tmp = *arr;
//	*arr = *(arr + sz - 1);
//	*(arr + sz - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + sz - 1) = tmp;
//
//	
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//�ַ���һ����һ���ַ����飻
//	//������������ǵ�һ��Ԫ�صĵ�ַ��
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��

#include<stdio.h>
void Print(int num)
{
	if ((num / 10) != 0)
	{
		Print(num/10);
	}

	printf("%d ",num%10);

}

int main()
{
	int num = 0;
	scanf("%d",&num);
	//������Ҫʹ��Print���������Ҵ�ӡ��1234
	Print(num);
	return 0;
}












































