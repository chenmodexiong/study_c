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

//sprintf -- ����ʽ������ת����һ���ַ��� 
//sscanf  -- ��һ���ַ�����ʽ�����ݶ�ȡ


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


//stdin  --��׼������
//stdout --��׼�����
//stderr --��׼������

//int main()
//{
//	int ch=fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


//fwrite -- �����Ƶ����뺯��
//fread  -- �����Ƶ��������

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
//	//����������
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//char* pc = "abcdef 12345";
//	//char* p = "����";
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
//	//���������
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//sscanf  -- ��һ���ַ����л�ԭ�ظ�ʽ������
//sprintf -- ����ʽ�����ݷŵ�һ���ַ�����
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
//  sprintf -- ����ʽ�����ݷŵ�һ���ַ�����
//	struct S s1 = { .name = "zhangsan",.age = 18,.score = 95.5 };
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f", s1.name, s1.age, s1.score);
//	printf("%s\n", buf);
//
//	//sscanf  -- ��һ���ַ����л�ԭ�ظ�ʽ������
//	struct S s2 = { 0 };
//	sscanf(buf, "%s %d %f", s2.name, &s2.age, &s2.score);
//	printf("%s %d %f\n", s2.name, s2.age, s2.score);
//
//	return 0;
//}

//�ļ������д

//fseek -- �������λ�ã�ָ��ָ���λ�ã�
//SEEK_SET	Beginning of file
//SEEK_CUR	Current position of the file pointer
//SEEK_END	End of file*
// 
//ftell -- ���������ʼλ�õ�ƫ����
//rewind -- ����ָ��ָ����ʼλ��

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
//	//ftell -- ���������ʼλ�õ�ƫ����
//	int num = ftell(pf);
//	printf("%d\n", num);
//	//rewind -- ����ָ��ָ����ʼλ��
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
//    fputs("abcdef", pf);//�Ƚ�����������������
//    printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//    Sleep(10000);
//    printf("ˢ�»�����\n");
//    fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//    printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//    Sleep(10000);
//    fclose(pf);
//    //ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//    pf = NULL;
//    return 0;
//}























