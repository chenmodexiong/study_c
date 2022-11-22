#define  _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int * * ppa = &pa;
//	**ppa = 50;
//	printf("%d\n", a);
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = {5, 6, 7, 8};
//	int arr3[4] = { 9,10,11,12 };
//	int* arr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//
//#include<stdio.h>
//
//struct Stu
//{
//	char name;
//	char sex;
//	int age;
//	float score;
//}s4,s5;//全局的结构体变量
//
//
//int main()
//{
//	struct Stu s1, s2, s3;//局部的结构体变量
//	return 0;
//}


//
//#include<stdio.h>
//
//struct Stu
//{
//	char name[20];
//	char sex[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan","male",18,95.5};
//	struct Stu s4 = { "如花","female",20,60.0 };
//	printf("%s %s %d %.1f\n", s., s.sex, s.age, s.score);
//	return 0;
//}


//
//#include<stdio.h>
//
//struct S
//{
//	int a;
//	char b;
//};
//struct Stu
//{
//	char name[20];
//	struct S;
//	int age;
//};
//
//int main()
//{
//	struct Stu p = { "旺财",{28,'c'},18 };
//	printf("%s %d %c %d\n", p.name, p.a, p.b, p.age);
//	return 0;
//}

//
//#include<stdio.h>
//
//struct Stu
//{
//	char name;
//	int age;
//};

//void Print(struct Stu p1)
//{
//	printf("%s %d\n", p1.name, p1.age);
//}

//
//#include<stdio.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Print(struct Stu* sp)
//{
//	printf("%s %d\n", (*sp).name, (*sp).age);
//	printf("%s %d\n", sp->name, sp->age);
//}
//
//int main()
//{
//	struct Stu p = { "如花",18 };
//	Print(&p);//传址调用
//
//	return 0;
//}


//
//#include<stdio.h>
//
//struct s
//{
//	int a;
//	char b[20];
//};
//struct Stu
//{
//	char name[20];
//	struct s;
//	int age;
//};
//void Print(struct Stu* sp)
//{
//	printf("%s %d %d %s\n", sp->b, sp->a, sp->age, sp->name);
//}
//int main()
//{
//	struct Stu p = { "旺财",{28,'c'},18 };
//	Print(&p);
//	return 0;
//}

//#include<stdio.h>
//struct s
//{
//	float score;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct s;
//};
//
//void Print1(struct Stu p1)
//{
//	printf("%s %d %.1f\n", p1.name, p1.age, p1.score);
//}
//
//void Print2(struct Stu* p2)
//{
//	printf("%s %d %.1f\n", p2->name, p2->age, p2->score);
//}
//
//int main()
//{
//	struct Stu p = { "李华",18,{90.5} };
//	Print1(p);
//	Print2(&p);
//
//	return 0;
//}
