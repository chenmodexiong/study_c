#define  _CRT_SECURE_NO_WARNINGS 1


//��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�
//����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
//����������
//�������룬ÿ���������һ��������ʾ�����̡�
//���������
//���ÿ�����룬�����Genius����


//��һ��д��
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

//��2��д��
//int main()
//{
//	int n = 0;
//	//����д������Ϊscanf��ȡʧ�ܷ���EOF,EOF��-1��
//	// ���԰�λȡ����Ľ����0,0Ϊ�٣�������ѭ��ֹͣ��
//	while (~scanf("%d", &n))
//		{
//			if (n >= 140)
//				printf("Genius");
//		}
//	return 0;
//}

//����
//KiKi��֪�����Ŀ��Գɼ��Ƿ�������������жϡ�
//�Ӽ�������һ��������ʾ�ĳɼ�������жϳɼ��Ƿ���90~100֮�䣬������������Perfect����
//����������
//�������룬ÿ���������һ��������ʾ�ĳɼ���90~100����
//���������
//���ÿ�����룬�����Perfect��

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


//KiKi��֪�����Ŀ��Է����Ƿ�ͨ����������жϡ�
//�Ӽ�����������һ��������ʾ�ķ���������жϸ÷����Ƿ��ڼ���Χ�ڣ��������
//�����������ڵ���60�֣��������Pass�������������Fail����
//����������
//�������룬ÿ���������һ��������ʾ�ķ�����0~100����
//���������
//���ÿ�����룬�����Pass����Fail����

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

//KiKi��֪��һ����������ż�ԣ�������жϡ�
//�Ӽ�����������һ����������Χ - 231~231 - 1��������ж�������ż�ԡ�
//����������
//�������룬ÿ���������һ��������
//���������
//���ÿ�����룬���������������Odd������ż����Even����
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



//KiKi�μ������ġ���ѧ������Ŀ��ԣ�������ж������е���߷֡�
//�Ӽ���������������������ʾ�ķ���������ж����е���߷֡�
//���ݷ�Χ�� 0 \le n \le 100 \0��n��100
//����������
//����һ�а�������������ʾ�ķ�����0~100�����ÿո�ָ���
//���������
//���Ϊһ�У������������е���߷֡�

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
//        //��������Ϊ��߷�
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

//�ڶ���д��
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



//����
//KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o), U(u)��ΪԪ����
//����������ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
//����������
//�������룬ÿ������һ����ĸ��
//���������
//���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel����
//���������ĸ�Ƿ�Ԫ���������Consonant����

//����1
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
//        getchar();//���ÿ���ַ����һ��\n
//    }
//    return 0;
//}


//����2
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	//��%c��ǰ��дһ���ո��������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
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


//����3
#include <stdio.h>
int main()
{
	char ch = 0;
	char arr[] = "AEIOUaeiou";
	//��%c�ĺ�߷���һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
	//����Ϊ�´����¿հ��ַ�������
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










