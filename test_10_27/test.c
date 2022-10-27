#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void game()
{
	int k = 0;
	int ret = 0;
	ret=rand(time)%100 + 1;
	while (1)
	{
		printf("请猜数字:>\n");
		scanf("%d", &k);
		if (k < ret)
			printf("猜小了\n");
		else if (k > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你,猜对了\n");
			Sleep(1000);
			system("cls");
			break;
		}		
	}
}
void menu()
{
	printf("*****************************\n");
	printf("*********  1.play  **********\n");
	printf("*********  0.exit  **********\n");
	printf("*****************************\n");
}
int main()
{
	srand(time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char arr[] = {""};
//	printf("电脑将在60秒后关机,请输入:我是猪取消关机\n");
//	system("shutdown -s -t 60");
//again:
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			printf("小乖乖,这就取消关机\n");
//			system("shutdown -a");
//		}
//		else
//			printf("真的不说吗,快要关机了哦\n");
//		goto again;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//again:
//	printf("hello world\n");
//	goto again;
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    int time = 0;
//    scanf("%d", &n);
//    if (n < 12)
//    {
//        time = 2;
//        printf("%d\n", time);
//    }
//    else if (n >= 12)
//    {
//        time = (n / 12) * 4 + 2;
//        printf("%d\n", time);
//    }
//    return 0;
//}
 //int main()
 //{
 //    int n = 0;
 //    scanf("%d", &n);
 //    long long sum = 0;
 //    int i = 0;
 //    for (i = 1; i <= n; i++)
 //    {
 //        sum += i;
 //    }
 //    printf("%lld\n", sum);

 //    return 0;
 //}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= i; n++)
//	{
//		sum += n;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<time.h>
////
////rand是专门用来生成随机数的函数;
////在使用rand之前需要用srand来设置随机数生成起点;
////srand只需要调用一次即可,不需要频繁调用;
////
//void game()
//{
//	int k = 0;
//	int ret = 0;
//	k = rand(time)%100+1;
//	while (1)
//	{
//
//		printf("请猜数字:>\n");
//		scanf("%d", &ret);
//		if (ret > k)
//			printf("猜大了\n");
//		else if (ret < k)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你,猜对了\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("menu:\n");
//	printf("*******************************\n");
//	printf("********   1.play    **********\n");
//	printf("********   0.exit    **********\n");
//	printf("*******************************\n");
//}
//int main()
//{
//	int i = 0;
//	srand(time(NULL));
//	do 
//	{
//		menu();
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	} while (i);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char i = 0;
//	int k = 0;
//	int flag = 0;
//	int ch = 0;
//	char arr[20] = {""};
//	for (k = 0; k < 3; k++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", arr);
//		//数组名本身就是地址,不需要&;
//			if (strcmp(arr, "12345678") == 0)
//			{
//				printf("登录成功\n");
//				flag = 1;
//				break;
//			}
//			else
//				printf("输入错误\n");
//	}
//	if (flag==0)
//		printf("三次密码均输入错误,退出程序\n");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = {"*****************************\0"};
//	char arr2[] = {"**hahahaha英凯是猪hahahahaha**\0"};
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("**hahahaha英凯是猪hahahahaha**");
//	return 0;
//}
//int main()
//{
//	printf("好好学习,天天编程\n");
//	return 0;
//}

















