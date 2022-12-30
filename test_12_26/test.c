#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//例如：
//1 ^ 3 = 1
//2 ^ 3 = 3 + 5
//3 ^ 3 = 7 + 9 + 11
//4 ^ 3 = 13 + 15 + 17 + 19
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。

//#include <stdio.h>
//
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    int start = m * m - m + 1;
//    int i = 0;
//    for (i = 0; i < m - 1; i++)
//    {
//        printf("%d+", start);
//        start += 2;
//    }
//    printf("%d", start);
//    return 0;
//}



//等差数列 2，5，8，11，14。。。。
//（从 2 开始的 3 为公差的等差数列）
//输出求等差数列前n项和
//
//
//数据范围： 1 \le n \le 1000 \1≤n≤1000
//输入描述：
//输入一个正整数n。
//
//输出描述：
//输出一个相加后的整数。


#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int start = 2;
    int end = start + 3 * (n - 1);
    int ret = n * (start + end) / 2;
    printf("%d\n", ret);
}


