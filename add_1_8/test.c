#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//�����������壺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
//sizeof(arr)
//&arr
//ֻ���������������������ʾ�������顣�������������Ԫ�ص�ַ��

//
//int main()
//{
//	//һά����
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));// 4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//��ַ��С4/8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4/8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));// 4/8
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//
//	return 0;
//}


//�ַ�����
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//printf("%d\n", strlen(arr));//���ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//strlen('a')->strlen(97),-err���Ƿ�����
//	//printf("%d\n", strlen(arr[1]));//ͬ�ϣ��Ƿ�����
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));// 4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//-err �Ƿ�����
//	//printf("%d\n", strlen(arr[1]));//-err �Ƿ�����
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}

//
//int main()
//{
//	const char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//ָ���С4/8
//	//printf("%d\n", sizeof(p + 1));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1));//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//-err
//	////printf("%d\n", strlen(p[0]));//-err
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p + 1));//���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}
//

//��ά����
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4/8  
	//ע��a[0]��һ�е��������������ǵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4/8
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4/8
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16

	return 0;
}


////������1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));         
//	return 0;
//}
////����Ľ����ʲô��


//������2��
// 
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	//�ṹ�����͵�ָ��+1����һ���ṹ��Ĵ�С
//	//0x00100000 + 1
//	//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);
//	//����+1����+1
//	//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//����ָ��+1����4���ֽ�
//	//0x00100004
//	return 0;
//}


//������3:

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//����+1������+1
//	//������ԭ����ַ���ֻ����1���ֽ�
//  //4,200000
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


////������4:

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//ע�ⶺ�ű��ʽ������ǳ�ʼ��Ҫ�ô����š�
//	// 1 3
//	// 5 0
//	// 0 0
//	int* p;
//	p = a[0];//�����һ�еĵ�ַ
//	printf("%d", p[0]);
//	return 0;
//}


////������5:

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//ff ff ff fc   
//	//-4
//	return 0;
//}

//������6:

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10,5
//	return 0;
//}

//������7:

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//����8

//++ -- �����Ĳ����������ò�Ҫ����
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	//POINT
//	printf("%s\n", *-- * ++cpp + 3);
//	//ER
//	printf("%s\n", *cpp[-2] + 3);
//	//ST
//	printf("%s\n", cpp[-1][-1] + 1);
//	//*(*(cpp-1)-1)+1
//	//EW
//	return 0;
//}


