#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct S
//{
//	int n;
//	char arr[];//柔型数组成员
//};
//
//int main()
//{
//	柔型数组空间的开辟
//	struct S* pc = (struct S*)malloc(sizeof(int) + 10 * sizeof(char));
//	if (pc == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	使用
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", pc->arr[i]);
//	}
//	释放空间
//	free(pc);
//	pc = NULL;
//	return 0;
//}



//
//struct S
//{
//	int n;
//	char* str;
//};
//
//int main()
//{
//	struct S* pc = (struct S*)malloc(sizeof(struct S));
//	if (pc == NULL)
//	{
//		perror("malloc->pc");
//		return 1;
//	}
//	char* ps = (char*)malloc(10 * sizeof(char));
//	if (ps == NULL)
//	{
//		perror("malloc->ps");
//		return 1;
//	}
//	pc->str = ps;
//	ps = NULL;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pc->str + i));
//	}
//	free(ps);
//	ps = NULL;
//	free(pc);
//	pc = NULL;
//	return 0;
//}
//










