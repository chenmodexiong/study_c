#define  _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//
//int main()
//{
//	//���߶�������������õ���Ҳ������
//	int i = 10 / 3;
//	printf("i=%d\n",i);
//
//	//��������ֻҪ��һ�����������õ��Ľ�����Ǹ�������
//	//float��double����Ĭ�ϴ�ӡС�����λ��
//	//�뱣����λֱ����%f����%lfǰ���.n���ɣ�
//	double a = 10.0 / 3;
//	printf("a=%lf\n", a);
//	double b = 10 / 3.0;
//	printf("b=%.1lf\n", b);
//	double c = 10.0 / 3.0;
//	printf("c=%.2lf\n", c);
//
//	//��Ҫǿ������%����ֻ�������������Σ���
//	//����%�õ���ֵҲֻ����������
//	int j = 10 % 3;
//	printf("j=%d\n", j);
//
//	return 0;
//}






//���Ʋ�����  <<
//���Ʋ�����  >>
//�������Ʋ������ƶ��Ķ����Ƕ�����λ
//��λ������ֻ��������������
//
//int main()
//{
//	int i = 10;
//	int a = 10 << 1;
//	int b = 10 >> 1;
//	printf("a=%d\nb=%d",a,b);
//}
//
//#include<stdio.h>

//int main()
//{
//	int ret = -10 << 1;
//	printf("%d\n",ret);
//	return 0;
//}


//int main()
//{
//	int i = -1;
//	int ret = i >> 1;
//	printf("%d\n",ret);
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int x = 0;
//	int y = 0;
//	x = y = a + b;
//	printf("x=%d y=%d\n",x,y);
//	//����ִ��˳����ʲô�����أ�
//	//��ʵ��
//	y = a + b;
//	x = y;
//	printf("x=%d y=%d\n", x, y);
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (!i)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		printf("1\n");
//	}
//	return 0;
//}


////��������
//// C99�������
////�������;���������ʾ��ٵ�����
////ֻ������ȡֵ��true����false
//
//#include<stdio.h>
//#include<stdbool.h>
//
//int main()
//{
//	_Bool flag = false;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
////Ӧ�ó�������
////�ж�����
//// 
//_Bool is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa=&a;
//	printf("%p\n",pa);
//
//	char m = '*';
//	int* pb=&m;
//	
//	char arr[10] = { 0 };
//	int* pc = arr;
//	&arr[0];
//	&arr;
//
//	int* p = "abcdef";
//
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	int *pa=&i;
//	*pa = 20;
//	printf("%d\n", *pa);
//	printf("%d\n",i);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	printf("%d\n", sizeof(i));
//	printf("%d\n", sizeof i);
//	printf("%d\n", sizeof(int));
//
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr[0]));
//	printf("%d\n", sizeof arr);
//	printf("%d\n", sizeof (int[10]));
//
//	return 0;
//}


//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	short b = 5;
//	printf("%d\n",sizeof(b=a+3));
//	printf("%d\n",b);
//
//	return 0;
//}
//


//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n",~a);
//	return 0;
//}
//

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = i++;
//	int a = ++i;
//	printf("%d\n",j);
//	printf("%d\n",a);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 5;
//	int j = i--;
//	int a = --i;
//	printf("%d\n", j);
//	printf("%d\n", a);
//	return 0;
//}
//



