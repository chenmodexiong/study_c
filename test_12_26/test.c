#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//��֤��Ƴ�˹���������κ�һ������m������������д��m����������֮�͡�
//���磺
//1 ^ 3 = 1
//2 ^ 3 = 3 + 5
//3 ^ 3 = 7 + 9 + 11
//4 ^ 3 = 13 + 15 + 17 + 19
//����һ��������m��m��100������m������д��m����������֮�͵���ʽ�����

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



//�Ȳ����� 2��5��8��11��14��������
//���� 2 ��ʼ�� 3 Ϊ����ĵȲ����У�
//�����Ȳ�����ǰn���
//
//
//���ݷ�Χ�� 1 \le n \le 1000 \1��n��1000
//����������
//����һ��������n��
//
//���������
//���һ����Ӻ��������


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


