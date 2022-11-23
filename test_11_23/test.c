#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8};
//	
//	printf("%d\n", arr[1]);
//	
//	return 0;
//}
//
// 


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”




//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 1000000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 计算出i是几位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp>9)//153
//		{
//			tmp /= 10;
//			n++;//1 2 3
//		}
//		//2. 计算i的十进制的每一位的n次方之和，判断是否等于i本身
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}