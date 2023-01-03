#define  _CRT_SECURE_NO_WARNINGS 1


//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。
//输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
//输入描述：
//多组输入，每行输入包括一个整数表示的智商。
//输出描述：
//针对每行输入，输出“Genius”。


//第一种写法
// 
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    while (scanf("%d", &i) != EOF)
//    {
//        if(i>140)
//            printf("Genius\n");
//    }
//    return 0;
//}

//第2种写法
//int main()
//{
//	int n = 0;
//	//这种写法是因为scanf读取失败返回EOF,EOF是-1，
//	// 所以按位取反后的结果是0,0为假，可以让循环停止。
//	while (~scanf("%d", &n))
//		{
//			if (n >= 140)
//				printf("Genius");
//		}
//	return 0;
//}

//描述
//KiKi想知道他的考试成绩是否完美，请帮他判断。
//从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。
//输入描述：
//多组输入，每行输入包括一个整数表示的成绩（90~100）。
//输出描述：
//针对每行输入，输出“Perfect”

//#include <stdio.h>
//
//int main()
//{
//    int grades = 0;
//    while (scanf("%d", &grades) != EOF)
//    {
//        if (grades >= 90 && grades <= 100)
//        {
//            printf("Perfect");
//        }
//    }
//
//    return 0;
//}


//KiKi想知道他的考试分数是否通过，请帮他判断。
//从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格，
//即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
//输入描述：
//多组输入，每行输入包括一个整数表示的分数（0~100）。
//输出描述：
//针对每行输入，输出“Pass”或“Fail”。

//#include <stdio.h>
//
//int main()
//{
//    int grades = 0;
//    while (~scanf("%d", &grades))
//    {
//        if (grades >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//    }
//    return 0;
//}

//KiKi想知道一个整数的奇偶性，请帮他判断。
//从键盘任意输入一个整数（范围 - 231~231 - 1），编程判断它的奇偶性。
//输入描述：
//多组输入，每行输入包括一个整数。
//输出描述：
//针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
//
//#include <stdio.h>
//
//int main()
//{
//    int digit = 0;
//    while (~scanf("%d", &digit))
//    {
//        if (digit % 2 != 1)
//        {
//            printf("Even\n");
//        }
//        else
//        {
//            printf("Odd\n");
//        }
//    }
//    return 0;
//}



//KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。
//从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
//数据范围： 0 \le n \le 100 \0≤n≤100
//输入描述：
//输入一行包括三个整数表示的分数（0~100），用空格分隔。
//输出描述：
//输出为一行，即三个分数中的最高分。

//
//#include <stdio.h>
//
//int main()
//{
//    int Chinese = 0;
//    int Math = 0;
//    int Endlish = 0;
//    while (~scanf("%d %d %d", &Chinese, &Math, &Endlish))
//    {
//        //假设语文为最高分
//        if (Chinese < Math)
//        {
//            int tmp = Chinese;
//            Chinese = Math;
//            Math = tmp;
//        }
//        if (Chinese < Endlish)
//        {
//            int tmp = Chinese;
//            Chinese = Endlish;
//            Endlish = tmp;
//        }
//        if (Math < Endlish)
//        {
//            int tmp = Math;
//            Math = Endlish;
//            Endlish = tmp;
//        }
//        printf("%d\n", Chinese);
//    }
//    return 0;
//}

//第二种写法
//
//#include <stdio.h>
//
//int main()
//{
//    int score[3] = { 0 };
//    while (~scanf("%d %d %d", &score[0], &score[1], &score[2]))
//    {
//        int max = 0;
//        for (int i = 0; i < 3; i++)
//        {
//            if (score[i] > max)
//            {
//                max = score[i];
//            }
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}



//描述
//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o), U(u)称为元音，
//其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
//输入描述：
//多组输入，每行输入一个字母。
//输出描述：
//针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，
//如果输入字母是非元音，输出“Consonant”。

//方法1
//
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char ch = 0;
//    char arr[] = "AEIOUaeiou";
//    while (((ch = getchar()) != EOF))
//    {
//        int i = 0;
//        for (i = 0; i < strlen(arr); i++)
//        {
//            if (ch == arr[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == strlen(arr))
//        {
//            printf("Consonant\n");
//        }
//        getchar();//清掉每个字符后的一个\n
//    }
//    return 0;
//}


//方法2
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	//在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
//	while (scanf(" %c", &ch) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//	}
//	return 0;
//}


//方法3
#include <stdio.h>
int main()
{
	char ch = 0;
	char arr[] = "AEIOUaeiou";
	//在%c的后边发给一个'\n'，其实在输入时候就会消化掉这个\n字符
	//不会为下次留下空白字符的隐患
	while (scanf("%c\n", &ch) != EOF)
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch == arr[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
			printf("Consonant\n");
	}
	return 0;
}










