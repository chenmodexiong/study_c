#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int m= 0;
	scanf("%d",&m);
	if (m % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
//int is_leap_year(int i)
//{
//	for (i; i % 4 == 0 && i % 100 != 0 || i % 400 == 0;i++)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ",year);
//	}
//	return 0;
//}

//int is_prime(int n)
//{
//	int m=0;
//	for (m = 2; m < sqrt(n); m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = {"hello world"};
//	memset(arr1,'#', 5);
//	printf("%s\n",arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = {"hello world"};
//	char arr2[] = {"#####"};
//	strcpy(arr1,arr2);
//	printf("%s",arr1);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max = 0;
//	max = get_max(a, b);
//	printf("%d\n",max);
//	max = get_max(100, 200);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr1[] = {"########################"};
//	char arr2[] = {"welcome to university!!!"};
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n",arr1);
//		Sleep(1000);//间隔1秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("welcome to university!!!\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	printf("请输入密码\n");
//	for (i = 1; i <= 3; i++)
//	{
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("密码错误，请重新输入\n");
//	}
//	if (i == 4)
//		printf("三次均错误\n退出程序\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	scanf("%d",&i);
//	for (j = 1; j <= i; j++)
//	{
//		ret = ret * j;
//	}
//	printf("ret=%d ",ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{ 
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//			printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = {0,1,2,3,4,5,6,-7,-8,-9};
//	int max = arr[0];
//	int i = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	for (i = 1; i <= sz; i++)
//	{
//		if (max <= arr[i])
//			max = arr[i];
//	}
//	printf("%d\n",max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum +=flag*1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf",sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			if(i%10==9)
//			count++;
//			if(i/10==9)
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n ", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	char arr[] = {i};
//	for (i = 100; i< 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ",year);
//		if (year % 400 == 0)
//			printf("%d ",year);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int r = 0;
//	scanf("%d%d",&i,&j);
//	while (i % j)
//	{
//		r = i % j;
//		i = j;
//		j = r;
//	}
//	printf("%d\n",j);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}
////int main()
//{
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d%d%d",a,b,c);
//	return 0;
//}
//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//        scanf("%s", input);
//        if (0 == strcmp(input, "我是猪"))  
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在60秒内关机\n请输入，我是猪，即可取消关机\n请输入:");
//		scanf("%s",&input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("已取消关机\n");
//			break;
//		}
//		else
//			printf("输入错误，60秒后即将关机\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	printf("请输入密码\n");
//	for (i = 1; i <= 3; i++)
//	{
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	}
//	if (i == 4)
//		printf("三次均错误,退出程序\n");
//	return 0;
//}
//int main()
//{
//	int a, b, m, n;
//	scanf("%d%d",&a,&b);
//	m = 1; n = 1;
//	if (a > 0)
//		m = m + n;
//	if (a < b)
//		n = 2 * m;
//	else if (a == b)
//		n = 5;
//	else 
//		n = m+1;
//	printf("m=%d n=%d\n",m,n);
//	return 0;
//}

//int main()
//{
//	const double PI = 3.14159;
//	double r;
//	scanf("%lf", &r);
//	printf("circumference=%f\n", 2 * PI * r);
//	printf("area=%f\n", PI * r * r);
//	return 0;
//}

//int main()
//{
//	int k = 7;
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组arr元素个数
//	for (i = 0; i <sz; i++)
//	{
//		if (k == arr[i])//不要忘记多条语句用大括号哦
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;  
//		}
//	}
//	if (i == sz)//讨论全部情况
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int i = 10, j = 10;
//	printf("%d%d\n",++i,j--);
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int a = 0;
//	int	b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	sum = a + b + c;
//	printf("sum=%d",sum);
//	return 0;
//}
//int main()
//{
//	int k = 7;
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组arr元素个数
//	for (i = 0; i <sz; i++)
//	{
//		if (k == arr[i])//不要忘记多条语句用大括号哦
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)//讨论全部情况
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while(line<1000)
//{
//		printf("努力学习\n");
//		line++;	
//}
//	return 0;
//}
//int main()
//{
//	printf("进入大学\n你要努力学习吗\n");
//	int num1= 0;
//	printf("努力学习请按1\n");
//	printf("混日子请按0\n");
//	scanf("%d",&num1);
//	if (num1==1)
//		printf("事业有成");
//	else 
//		printf("回家种地");
//	return 0;
//}
//int main()
//{
//	int num1,num2,sum = 0;
// //   int num2 = 0;
//	//int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
// 
// 
//分支与循环1
// 
// 
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//int main()
//{
//	int age = 19;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf(" 成年\n");
//
//	return 0;
//}
//int main()                //与下面代码完全一致
//{
//	int age =0 ;
//	scanf("%d",&age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age <= 28)
//		printf("青年\n");
//	else if (age > 28 && age <= 50)
//		printf("壮年\n");
//	else if(age > 50 && age <= 90)
//		printf("老年\n");
//	else if(age>90 && age<=100)
//		printf("老不死\n");
//	return 0;
//}
//int main()                        
//{                                           //if或else控制多条语句必须用大括号
//	int age = 0;                              //也叫做代码块
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age >= 18 && age <= 28)
//		printf("青年\n");
//		else if (age > 28 && age <= 50)
//		printf("壮年\n");
//		else if (age > 50 && age <= 90)
//		printf("老年\n");
//		else if (age > 90 && age <= 100)
//		printf("老不死\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num1 = 4;
//	int num2 = 5;
//	if (num2 = 4)                    //一个等号是赋值，双等号才是判断相等
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int num1 = 4;
//	int num2 = 5;
//	if (5==num2)        
//		printf("hehe\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if(i%2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num1 = 1;
//	{
//		for (num1 < 100; num1 % 2 == 1; num1++)
//			printf("%d\n", num1);
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)                        //switch后面必须是整型表达式
//	{                                   //case后只能为整型常量表达式是
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;	
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)                        //switch后面必须是整型表达式
//	{                                   //case后只能为整型常量表达式是
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		n++;
//	case 2:
//		m++;
//	case 3:
//		switch (m)        //switch允许嵌套
//		{
//		case 1:
//			n++;
//		case 2:
//			m++, n++;
//			break;
//		}
//		printf("%d %d \n", m, n);
//	default:
//		break;
//	}
//	return 0;
//}
//#include<cstring>
//enum yongyu
//{
//	yes=1,
//	no=0
//};
////using namespace std;
//int main()
//{
//	int i = 0;
//	printf("大学你要努力学习吗\n ");
//	printf("yes/no\n");
//	scanf("%d",&i);
//	if (i == yes)
//		printf("考研拿到好offer，养得起家人\n");
//	else
//		printf("为柴米油盐发愁\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();
//	    putchar(ch);
//		printf("%c\n", ch);
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)         //ctrl+z 退出
//	{                                     //end of file 文件结束标志，值为-1
//		putchar(ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s",password);
//	printf("请确认Y/N");
//	while (getchar()!='\n');
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("输入成功");
//	else
//		printf("已取消");
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//void main()
//{
//	int x = 2, y = -1, z = 2;
//	if (x < y)
//		if (y < 0) z = 0;
//		else z += 1;
//	printf("%d\n",z);   
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//			m = i * m;
//			//printf("%d\n", m);
//	}
//	printf("%d\n", m);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		m = 1;
//		for (i = 1; i <= n; i++)
//		{
//			m = i * m;
//		}
//		sum = sum + m;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		m = m * n;
//		sum = sum + m;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}





































































