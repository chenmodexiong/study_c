#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}




//ÿ��һ��

//���n��쳲�������

#include<stdio.h>
//�ݹ�д��
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	int flag = 1;
	while (flag)
	{
		scanf("%d", &n);
		//�ж�����ĺϷ���
		if (n > 0)
		{
			flag = 0;
		}
		else
		{
			printf("�������\n");
		}
	}
	//�����n��쳲�������
	printf("��%d��쳲�������Ϊ%d\n", n, Fib(n));
	return 0;
}



//ÿ��һ��

//���n��쳲�������

#include<stdio.h>
//����д��
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int flag = 1;
	while (flag)
	{
		scanf("%d", &n);
		//�ж�����ĺϷ���
		if (n > 0)
		{
			flag = 0;
		}
		else
		{
			printf("�������\n");
		}
	}
	//�����n��쳲�������
	printf("��%d��쳲�������Ϊ%d\n", n, Fib(n));
	return 0;
}


