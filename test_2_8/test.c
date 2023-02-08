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

//sprintf -- 将格式化数据转换成一个字符串 
//sscanf  -- 将一个字符串格式化数据读取


//int main()
//{
//	char buf[20] = { 0 };
//	sprintf(buf, "%d %c %s", 20, 'a', "zhangsan");
//	printf("%s\n", buf);
//	int i = 0;
//	char c = 0;
//	char arr[20] = { 0 };
//	sscanf(buf, "%d %c %s",&i,&c,&arr);
//	printf("%d %c %s\n", i, c, arr);
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


//fwrite -- 二进制的输入函数
//fread  -- 二进制的输出函数

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s={"zhangsan",20,95.5};
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制输入
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//char* pc = "abcdef 12345";
//	//char* p = "张三";
//	//fwrite(pc, sizeof(char), 20, pf);
//	//fwrite(p, sizeof(char), 6, pf);
//	//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制输出
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//sscanf  -- 从一个字符串中还原回格式化数据
//sprintf -- 将格式化数据放到一个字符串中
//
//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//  sprintf -- 将格式化数据放到一个字符串中
//	struct S s1 = { .name = "zhangsan",.age = 18,.score = 95.5 };
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f", s1.name, s1.age, s1.score);
//	printf("%s\n", buf);
//
//	//sscanf  -- 从一个字符串中还原回格式化数据
//	struct S s2 = { 0 };
//	sscanf(buf, "%s %d %f", s2.name, &s2.age, &s2.score);
//	printf("%s %d %f\n", s2.name, s2.age, s2.score);
//
//	return 0;
//}

//文件随机读写

//fseek -- 调整光标位置（指针指向的位置）
//SEEK_SET	Beginning of file
//SEEK_CUR	Current position of the file pointer
//SEEK_END	End of file*
// 
//ftell -- 返回相对起始位置的偏移量
//rewind -- 调整指针指向起始位置

//int main()
//{
//	FILE* pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//ftell -- 返回相对起始位置的偏移量
//	int num = ftell(pf);
//	printf("%d\n", num);
//	//rewind -- 调整指针指向起始位置
//	rewind(pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//    fputs("abcdef", pf);//先将代码放在输出缓冲区
//    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//    Sleep(10000);
//    printf("刷新缓冲区\n");
//    fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//    Sleep(10000);
//    fclose(pf);
//    //注：fclose在关闭文件的时候，也会刷新缓冲区
//    pf = NULL;
//    return 0;
//}























