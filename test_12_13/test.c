#define  _CRT_SECURE_NO_WARNINGS 1



//дһ��strlen��ѭ�����ݹ顢ָ��������ַ�ʽ��

//��һ��ѭ����ʽ

#include<stdio.h>
#include<assert.h>
#include<string.h>

int my_strlen(char* str)
{
	assert(str);//��ָ֤��ĺ�����
	int count = 0;//������
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "hello world!!";
	printf("%d\n", my_strlen(arr));
	printf("%d\n", (int)strlen(arr));//��֤
	return 0;
}



//дһ��strlen��ѭ�����ݹ顢ָ��������ַ�ʽ��

//�ڶ��ֵݹ鷽ʽ

#include<stdio.h>
#include<assert.h>
#include<string.h>

int my_strlen(char* str)
{
	assert(str);//�ж�ָ�������
	if (*str != '\0')
		return 1 + my_strlen(str+1);
	else
		return 0;
}

int main()
{
	char arr[] = "hello world!!\n";
	printf("%d\n", my_strlen(arr));
	printf("%d\n", (int)strlen(arr));//��֤
	return 0;
}


//дһ��strlen��ѭ�����ݹ顢ָ��������ַ�ʽ��

//�����ַ�ʽָ�����

#include<stdio.h>
#include<assert.h>
#include<string.h>

int my_strlen(char* str)
{
	assert(str);
	char* start = str;//��¼��ʼλ��
	while (*str != '\0')
	{
		str++;
	}
	return (int)(str - start);
}

int main()
{
	char arr[] = "hello world!!\n";
	printf("%d\n", my_strlen(arr));
	printf("%d\n", (int)strlen(arr));
	return 0;
}



