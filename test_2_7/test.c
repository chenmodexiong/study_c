#define  _CRT_SECURE_NO_WARNINGS 1


//fopen -- ���ļ���ʽ -- 'r' 'w' 'a'
//fclose -- �ر��ļ�

#include <stdio.h>

//fgetc --�ַ����뺯�� 
//fputc --�ַ��������

//int main()
//{
//	//���ļ� -- д�ķ�ʽ
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen:");
//		return;
//	}
//	//ʹ���ļ�
//	int ret = fputc('c', pf);
//	printf("%c\n",ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	//���ļ� -- ���ķ�ʽ
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen:");
//		return;
//	}
//	//ʹ���ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgets -- �ı������뺯��
//fputs -- �ı����������

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//дһ������
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
//	//��һ������
//	char buf[10] = { 0 };
//	char* pc=fgets(buf, 5, pf);//ĩβ���Զ���һ��\0
//	printf(pc);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fscanf --  ��ʽ�����뺯��
//fprintf -- ��ʽ���������

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


//stdin  --��׼������
//stdout --��׼�����
//stderr --��׼������

//int main()
//{
//	int ch=fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}



