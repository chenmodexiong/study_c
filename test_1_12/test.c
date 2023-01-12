#define  _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <string.h>

//c�⺯����ʹ���ǳ���Ļ����᷵�ش�����
//strerror���Խ������뷭��Ϊ������Ϣ

//int main()
//{
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)//��ʧ��
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}

/*perror example*/

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)//��ʧ��
//	{
//		perror((char*)pf);
//		//printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}


/*memcpy example*/
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//ģ��ʵ��memcpy

#include <stdio.h>
#include <assert.h>
//�������ظ��ļ����
void* my_memcpy(void* des, const void* source, int num)
{
	assert(des && source);//�ж�ָ��Ϸ���
	void* ret = des;//��¼Ŀ����ʼ��ַ
	while (num--)
	{
		*(char*)des = *(char*)source;
		des = (char*)des + 1;//һ��ע�������д������Ҫд��*des++��ǿ������ת������ʱ�Ե�
		source = (char*)source + 1;//
	}
	return ret;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr1+2, arr1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//ģ��ʵ��memmove
//#include <assert.h>
//
//void* my_memmove(char* des, const char* source, size_t num)
//{
//	assert(des && source);
//	char* ret = des;
//	if (des < source)
//	{
//		//ǰ-->��
//		while (num--)
//		{
//			*((char*)des) = *((char*)source);
//			des = (char*)des + 1;
//			source = (char*)source + 1;
//		}
//	}
//	else
//	{
//		//��-->ǰ
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)source + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove((char*)(arr1+2), (const char*)arr1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
 

/*memcmp example*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 1,2,3 };
//	int arr3[] = { 1,2,9 };
//	printf("%d\n", memcmp(arr1, arr3,12));
//	printf("%d\n", memcmp(arr1, arr2,12));
//	printf("%d\n", memcmp(arr3, arr2,12));
//	return 0;
//}

///*memset example*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world!!";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


/*memset example*/
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[10] = { 0 };
	//����Ҫ��arrȫ����ʼ��Ϊ0,�ܲ���ʵ��
	memset(arr, 1, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}












