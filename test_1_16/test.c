#define  _CRT_SECURE_NO_WARNINGS 1


//malloc
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("malloc");
//		return 1;
//	}
//	//����1~10
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	//��ӡ1~10
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//����ռ��һ��Ҫ�ǵ��ͷŲ��ҽ�ָ����Ϊ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//����10�����ʹ�С
//	int* p = (int*)malloc(10*INT_MAX);
//	//�������ʧ�ܴ�ӡ������Ϣ
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ӡ���ٺõĿռ�����
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//����10�����Ϳռ�
//	int* p = (int*)calloc(10, sizeof(int));
//	//�������ʧ�ܴ�ӡ������Ϣ
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//��ӡ�ռ������
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	//����10�����Ϳռ�
//	int* p = (int*)calloc(10, sizeof(int));
//	//�������ʧ�ܴ�ӡ������Ϣ
//	if (p == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("calloc");
//	}
//	//��������Ҫ���ݵ�20�����Ϳռ�
//	int* str = (int*)realloc(p, 20 * sizeof(int));
//	if (str != NULL)
//	{
//		p = str;
//		str = NULL;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//��NULLָ��Ľ����ò���
// 
// 
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//����һ��Ҫע���ж��Ƿ��ǿ�ָ��
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//�Զ�̬���ٿռ��Խ�����
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		*(p + i) = 0;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
// 
// 
//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int* p=&a;
//	free(p);
//	return 0;
//}


//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
// 
// 
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 25; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//��ͬһ�鶯̬�ڴ����ͷ�
// 
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}


//�����ͷŶ�̬���ٵĿռ䣬����ڴ�й©
// 
// 
//#include <stdio.h>
////test�����ڲ�������malloc�����������˿��ٿռ����ʼ��ַ���ǵ��ͷ�
//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//	return p;
//}
//int main()
//{
//	int* ptr=test();
//	free(ptr);
//	ptr = NULL;
//	while (1);
//}


//���ڴ�۲�
#include <stdlib.h>
int main()
{
	while (1)
	{
		malloc(1);
	}
}

