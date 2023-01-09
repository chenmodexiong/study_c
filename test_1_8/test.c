#define  _CRT_SECURE_NO_WARNINGS 1

//
////ð������
//
//#include<stdio.h>
////�ú�����������
////ֻ����������
//void bubble_sort(int arr[], int sz)
//{
//	for (int j = 0; j < sz-1; j++)
//	{
//		//һ��ð������
//		for (int i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}




//ð������

#include<stdio.h>
//�ú�����������
//ֻ����������
//������򸡵��͡��ṹ�塢�ַ�
//����qsort����������

//void qsort(void* base, size_t num, size_t size,int (*compar)(const void*, const void*));

//base:������Ԫ�ص�ַ
//num:�����С
//size:ÿһ��Ԫ�صĴ�С
// 
//�ȽϺ���(�Լ�ʵ��),�ص�:Ϊʲô������void*
//���qsort��������Ҳ��֪����Ҫ����ʲô����,
//
//void*�ĺô����ڿ��Է����κ����͵�ָ��
//�������ڿ�ָ�벻��ֱ����,

//int main()
//{
//	float f = 5.5f;
//	//int* p = &f;//���Ͳ�ƥ��ᱨ����
//	int i = 10;
//	void* pp = &f;//void*���Է����κ����͵�ָ��
//	//void* ppp = &i;
//	//printf("%f\n", *pp);
//}
//
// 
//ʹ��qsort��������
// 
//#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return	*(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort((void*)arr, (size_t)sz, (size_t)sizeof(arr[0]), cmp_int);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
////ʹ��qsort����ṹ��
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//	//�����ַ����Ƚ�strcmp
//	//���ն�Ӧλ���ϵ��ַ���С���Ƚ�
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test1()
//{
//	struct Stu s[3] = { {"zhangsan",33 }, {"lisi", 20},{ "wangwu", 50} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort((void*)s, (size_t)sz, (size_t)sizeof(s[0]), cmp_stu_by_age);
//	qsort((void*)s, (size_t)sz, (size_t)sizeof(s[0]), cmp_stu_by_name);
//
//	printf("%s %d\n%s %d\n%s %d\n", s->name, s->age, s[1].name, s[1].age,  s[2].name, s[2].age);
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}

//ʹ��ð������˼��ģ��һ��qsort

#include <string.h>
#include <stdio.h>

int cmp_int(const char* e1, const char* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char* buf1, char* buf2,size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void my_qsort(void* str, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for( i = 0; i < sz-1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz -1 - i; j++)
		{
			//�õ�Ҫ�Ƚϵ�����Ԫ��
			if (cmp(((char*)str+j*width),((char*)str+(j+1)*width))>0)
			{
				//����
				//���ڲ�֪��Ҫ���������ͣ�ֻ�ܴ�char*ָ���ȥ��һ���ֽ�һ���ֽڽ���
				Swap(((char*)str + j * width), ((char*)str + (j+1) * width), width);
			}
		}
	}
}

struct Stu 
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()
{
	struct Stu s[3] = {{"zhangsan",20},{"lisi",33},{"wangwu",50}};
	int sz = sizeof(s) / sizeof(s[0]);
	//my_qsort((void*)s, (size_t)sz, (size_t)sizeof(s[0]), cmp_stu_by_age);
	my_qsort((void*)s, (size_t)sz, (size_t)sizeof(s[0]), cmp_stu_by_name);

	for (int i = 0; i < sz; i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort((void*)arr, (size_t)sz, (size_t)sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

int main()
{
	//test1();//������������
	test2();//����ṹ��
	return 0;
}


//
//
//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////����ð����������ʹ���������������������ָ��������
//void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
//{
//	//����
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
////ʹ�������Լ�д��bubble_sort��������ṹ������
//void test4()
//{
//	struct Stu s[3] = { {"zhangsan",20}, {"lisi", 50}, {"wangwu", 33} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}




