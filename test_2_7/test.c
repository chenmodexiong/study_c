#define  _CRT_SECURE_NO_WARNINGS 1


//fopen -- 打开文件方式 -- 'r' 'w' 'a'
//fclose -- 关闭文件

#include <stdio.h>

//fgetc --字符输入函数 
//fputc --字符输出函数

//int main()
//{
//	//打开文件 -- 写的方式
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen:");
//		return;
//	}
//	//使用文件
//	int ret = fputc('c', pf);
//	printf("%c\n",ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	//打开文件 -- 读的方式
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen:");
//		return;
//	}
//	//使用文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgets -- 文本行输入函数
//fputs -- 文本行输出函数

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写一行数据
//	fputs("hello world\n", pf);
//	fputs("hello\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读一行数据
//	char buf[10] = { 0 };
//	char* pc=fgets(buf, 5, pf);//末尾会自动放一个\0
//	printf(pc);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fscanf --  格式化输入函数
//fprintf -- 格式化输出函数

//int main()
//{
//	FILE* pf=fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//
//	fprintf(pf,"%s %d %d", "zhangsan", 18, 95);
//
//	//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//}Stu;
//
//int main()
//{
//	Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %d", s.name, &(s.age), &(s.score));
//	
//	printf("%s %d %d\n", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//stdin  --标准输入流
//stdout --标准输出流
//stderr --标准错误流

//int main()
//{
//	int ch=fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}



