#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//
//描述
//首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值，结果保留一位小数。
//0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。
//
//数据范围： 1 \le n\ \le 2000 \1≤n ≤2000  ，输入的整数都满足 | val | \le 1000 \∣val∣≤1000
//输入描述：
//首先输入一个正整数n，
//然后输入n个整数。
//
//输出描述：
//输出负数的个数，和所有正整数的平均值。
//
//输入：
//11
//1 2 3 4 5 6 7 8 9 0 - 1
//输出：
//1 5.0

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int val[2000];
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int count = 0;
//        int tmp = 0;
//        int sum = 0;
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &val[i]);
//            if (val[i] < 0)
//            {
//                count += 1;
//            }
//            if (val[i] > 0)
//            {
//                tmp++;
//                sum += val[i];
//            }
//        }
//        double average = sum * 1.0 / tmp;
//        printf("%d ", count);
//        if (tmp == 0)
//        {
//            printf("0.0");
//        }
//        else
//        {
//            printf("%.1lf", average);
//        }
//    }
//    return 0;
//}


//
//有一个长度为 n 的非降序数组，比如[1, 2, 3, 4, 5]，将它进行旋转，
//即把一个数组最开始的若干个元素搬到数组的末尾，
//变成一个旋转数组，比如变成了[3, 4, 5, 1, 2]，或者[4, 5, 1, 2, 3]这样的。
//请问，给定这样一个旋转数组，求数组中的最小值。
//
//数据范围：1 \le n \le 100001≤n≤10000，数组中任意元素的值: 0 \le val \le 100000≤val≤10000
//要求：空间复杂度：O(1)O(1) ，时间复杂度：O(logn)O(logn)
//示例1
//输入：
//[3, 4, 5, 1, 2]
//返回值：
//1
//示例2
//输入：
//[3, 100, 200, 3]
//返回值：
//3

/**
 *
 * @param rotateArray int整型一维数组
 * @param rotateArrayLen int rotateArray数组长度
 * @return int整型
 */
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
{
    // write code here
    int i = 0;
    for (i = 0; i < rotateArrayLen; i++)
    {
        if (rotateArray[i - 1] > rotateArray[i])//只要出现降序就是最小值。否则就是没有交换，第一个是最小值
        {
            return rotateArray[i];
        }
    }
    return rotateArray[0];
}





