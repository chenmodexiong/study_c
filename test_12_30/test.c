#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//
//����
//��������Ҫ�������������n��Ȼ������n�����������Ϊn�������и����ĸ�������������������ƽ��ֵ���������һλС����
//0��������������Ҳ���Ǹ�������������㡣���û����������ƽ��ֵΪ0��
//
//���ݷ�Χ�� 1 \le n\ \le 2000 \1��n ��2000  ����������������� | val | \le 1000 \�Oval�O��1000
//����������
//��������һ��������n��
//Ȼ������n��������
//
//���������
//��������ĸ�������������������ƽ��ֵ��
//
//���룺
//11
//1 2 3 4 5 6 7 8 9 0 - 1
//�����
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
//��һ������Ϊ n �ķǽ������飬����[1, 2, 3, 4, 5]������������ת��
//����һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ��
//���һ����ת���飬��������[3, 4, 5, 1, 2]������[4, 5, 1, 2, 3]�����ġ�
//���ʣ���������һ����ת���飬�������е���Сֵ��
//
//���ݷ�Χ��1 \le n \le 100001��n��10000������������Ԫ�ص�ֵ: 0 \le val \le 100000��val��10000
//Ҫ�󣺿ռ临�Ӷȣ�O(1)O(1) ��ʱ�临�Ӷȣ�O(logn)O(logn)
//ʾ��1
//���룺
//[3, 4, 5, 1, 2]
//����ֵ��
//1
//ʾ��2
//���룺
//[3, 100, 200, 3]
//����ֵ��
//3

/**
 *
 * @param rotateArray int����һά����
 * @param rotateArrayLen int rotateArray���鳤��
 * @return int����
 */
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
{
    // write code here
    int i = 0;
    for (i = 0; i < rotateArrayLen; i++)
    {
        if (rotateArray[i - 1] > rotateArray[i])//ֻҪ���ֽ��������Сֵ���������û�н�������һ������Сֵ
        {
            return rotateArray[i];
        }
    }
    return rotateArray[0];
}





