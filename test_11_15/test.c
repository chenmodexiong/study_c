#define  _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//
//int main()
//{
//	int i = 10 && 0;
//	printf("i=%d\n",i);
//	
//	int j = 10 && 2;
//	printf("j=%d\n", j);
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}
////程序输出的结果是什么？


//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = (a > b ? a : b);
//	printf("%d\n",m);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	//代码1
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	//c是多少？
//	printf("%d\n",c);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//
//struct Stu
//{
//	char Name[20];
//	char Gen[20];
//	int num;
//};
//
//int main()
//{
//	struct Stu a = { "如花","female",18 };
//	struct Stu* pStu = &a;
//	//printf("%s %s %d\n", a.Name,a.Gen,a.num);
//	printf("%s %s %d\n",pStu->);
//	return 0;
//}
//


//
//#include<stdio.h>
//
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011  - 存放的a
//	//
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111  - 存放的b 
//	//
//	char c = a + b;
//	//00000011  - a
//	//01111111  - b 
//	//整型提升
//	//00000000000000000000000000000011 
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010 - c
//	//10000010 - 存放的c
//	printf("%d",c);
//	//以%d的形式打印10进制，也要整型提升
//	//10000010 - 存放的c
//	//11111111111111111111111110000010 - c的补码
//	//11111111111111111111111110000001 - c的反码
//	//10000000000000000000000001111110 - c的原码
//	//c=-126
//	return 0;
//}



#include<stdio.h>
////实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


//
////实例2
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}
\


//
//#include<stdio.h>
//
//int main()
//{
//	int cocks = 0;
//	int hens = 0;
//	int chicks = 0;
//	while (cocks <= 20)
//	{
//		hens = 0;
//		while (hens <= 33)
//		{
//			chicks = 100 - cocks - hens;
//			if (5.0 * cocks + 3.0 * hens + chicks / 3.0 == 100.0)
//			{
//				printf("公鸡%d只，母鸡%d只,小鸡%d只\n", cocks, hens, chicks);
//			}
//			hens++;
//		}
//		cocks++;
//	}
//	return 0;
//}



#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}
