#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
struct Stu
{
    char name[20];
    char sex[5];
    int age;
};
void Print(struct Stu* ps)
{
    //printf("%s %s %d\n", (*ps).name, (*ps).sex, (*ps).age);
    //->
    //结构体的指针->成员名
    printf("%s %s %d\n", ps->name, ps->sex, ps->age);
}
int main()
{
    struct Stu s = {"zhangsan","男",20};
    Print(&s);
    return 0;
}


//struct stu
//{
//	char name[20];
//	char sex[10];
//	int age ;
//};
//void Print(struct stu* ps)
//{
//	printf("%s %s %d\n", (*ps).name, (*ps).sex, (*ps).age);
//	printf("%s %s %d\n", ps->name, ps->sex, ps->age);
//}
//int main()
//{
//	struct stu s= { "zhangsan","男",20 };
//	Print(&s);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	char sex[10];
//	int age ;
//};
//int main()
//{
//	struct stu m = {"小美","female",18};
//	printf("%s\n",m.name);
//	printf("%s\n", m.sex);
//	printf("%d\n", m.age);
//	return 0;
//}
//int main()
//{
//	struct stu s={"zhangsan","男",20};
//	printf("%s\n", s.name);
//	printf("%s\n", s.sex);
//	printf("%d\n", s.age);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	scanf("%d%d",&num1,&num2);
//	while(num1%num2)
//	{
//		tmp = num1 % num2;
//		num1 = num2;
//		num2 = tmp;
//	}
//	printf("%d\n", tmp);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d>%d>%d\n", a, b, c);
//	return 0;
//}
//int MAX(int x, int y, int i)
//{
//	if (x > y && x > i)
//		return x;
//	else if (y > i && y > x)
//		return y;
//	else if(i > x && i > y)
//		return i;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	int max = MAX(a, b, c);
//	printf("%d\n",max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}