#define  _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

////��������һ��ѧ��
//struct Stu 
//{
//	char name[20];
//	int age;
//	char sex[10];
//}s1,s2;//ע�����ֺŲ���ʡ��
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//}Stu;
//
//int main()
//{
//	struct Stu s3;
//	return 0;
//}


//����1
//struct Node
//{
//	int data;
//	struct Node next;
//};
////���з�
//������ԣ���sizeof(struct Node)�Ƕ��٣�

//
////����2
//struct Node
//{
//	int data;
//	struct Node* next;
//};


//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//}s1 = {0,0};//��һ��
//
//struct Point s2 = { 0,0 };//�ڶ���
//
//int main()
//{
//	struct Point s3 = { 1,2 };//������
//	return 0;
//}


//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct S
//{
//	int num;
//	char a;
//	struct Point b;
//	float c;
//};
//
//int main()
//{
//	struct S s4 = { 1,'w',{3,4},3.14f };//��˳���ʼ��
//	struct S s5 = { .a = 'w',.b.x = 5,.b.y = 6,.c = 3.14f,.num = 7 };//����
//	return 0;
//}


////��ϰ1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////��ϰ2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(struct S1));
//	printf("%d\n", (int)sizeof(struct S2));
//	return 0;
//}


/*�޸�Ĭ�϶�����*/
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", (int)sizeof(struct S1));
//	return 0;
//}

//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	printf("%d\n", (int)sizeof(struct A));
//	return 0;
//}

//һ������
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//struct S s = { 0 };
//int main()
//{
//	s.a = 10;//�ռ䲻���ᷢ���ض�
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", s.a);
//}


//һ������
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//struct S s = { 0 };
//
//int main()
//{
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//�ռ�����ο��ٵģ�

//enum Day//����
//{
//	Mon,//ֵĬ�ϴ�0��ʼ
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//}��
//enum Color//��ɫ
//{
//	RED,
//	GREEN,
//	BLUE
//};

//��ʼ��

//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};

////��������������
//union UN
//{
//	char a;
//	int i;
//};
////�������������
//union UN un;
////�����������С����
//printf("%d\n", sizeof(un));

//union UN
//{
//	int i;
//	char a;
//};
//
//int main()
//{
//	union UN un;
//	printf("%d\n", sizeof(un));
//	printf("%p\n", &un);
//	printf("%p\n", &(un.a));
//	printf("%p\n", &(un.i));
//	return 0;
//}

//union UN
//{
//	char a;
//	int i;
//};
//
//int main()
//{
//	union UN un ;
//	printf("%d\n", sizeof(un));
//	return 0;
//}

union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}
