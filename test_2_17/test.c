#define  _CRT_SECURE_NO_WARNINGS 1


//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。
//你有办法在O(n)时间内完成吗？
//注意：本题相对书上原题稍作改动
//示例 1：
//输入：[3, 0, 1]
//输出：2
//示例 2：
//输入：[9, 6, 4, 2, 3, 5, 7, 0, 1]
//输出：8

//int missingNumber(int* nums, int numsSize)
//{
//    int ret = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret ^= nums[i];
//    }
//    for (int j = 0; j <= numsSize; j++)
//    {
//        ret ^= j;
//    }
//
//    return ret;
//}
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
//示例 1:
//	输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//	输出 : [5, 6, 7, 1, 2, 3, 4]
//	向右轮转 1 步 : [7, 1, 2, 3, 4, 5, 6]
//	向右轮转 2 步 : [6, 7, 1, 2, 3, 4, 5]
//	向右轮转 3 步 : [5, 6, 7, 1, 2, 3, 4]
//示例 2 :
//	输入：nums = [-1, -100, 3, 99], k = 2
//	输出：[3, 99, -1, -100]
//	解释 :
//	向右轮转 1 步 : [99, -1, -100, 3]
//	向右轮转 2 步 : [3, 99, -1, -100]
//当时的错误思路
// 
//void rotate(int* nums, int numsSize, int k)
//{
//    assert(nums);
//    int* str = (int*)malloc(3 * numsSize * sizeof(int));
//    if (str == NULL)
//        return;
//    memcpy(str, nums, numsSize * sizeof(int));
//
//    strncat(str, str, numsSize);
//    memmove(nums, str + k + 1, numsSize * sizeof(int));
//
//    free(str);
//    str = NULL;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("翻转个数:>%d", &k);
//    rotate(arr, 10, k);
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//错误：
//void rotate(int* nums, int numsSize, int k)
//{
//    int* str = (int*)malloc(numsSize * sizeof(int));
//    if (str == NULL)
//        return;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < numsSize-k; i++)
//    {
//        str[i+k] = nums[i];
//    }
//    for (i = numsSize - k; i < numsSize; i++)
//    {
//        str[i+k] = nums[i];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = str[i];
//    }
//    free(str);
//    str = NULL;
//}
//正确：
//void rotate(int* nums, int numsSize, int k)
//{
//    int* str = (int*)malloc(numsSize * sizeof(int));
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        str[(i + k) % numsSize] = nums[i];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = str[i];
//    }
//    free(str);
//    str = NULL;
//}
//
// 
// 
//void Swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}

void rotate(int* nums, int numsSize, int k)
{
    int i = 0;
    for (i=0;i< k % 10;i++)
    {
        //每次轮转的操作
        int temp = nums[numsSize - 1];//用临时变量保留末尾值
        for (int j = numsSize - 1; j > 0; j--)
        {
            nums[j] = nums[j - 1];//从后往前挪一位
        }
        nums[0] = temp;//第一位等于原来的末尾值
    }
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
    rotate(arr, 10, k);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}







