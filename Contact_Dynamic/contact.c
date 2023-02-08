#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu(void)
{
	printf("********************************************\n");
	printf("****** 1.add(���)      2.del(ɾ��)    ******\n");
	printf("****** 3.search(����)   4.modify(�޸�) ******\n");
	printf("****** 5.show(��ʾ)     0.exit(�˳�)   ******\n");
	printf("********************************************\n");
}

int check_capacity(Contact* pc)
{
	assert(pc);
	if (pc->sz == pc->capacity)
	{
		//����
		printf("��ϵ������\n");
		int num = 0;
		printf("������Ҫ���ӵ���ϵ�˸���:>");
		scanf("%d", &num);
		PeoInfo* ptr=(PeoInfo*)realloc(pc->date,(pc->capacity + num) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("check_capacity::realloc");
			return -1;
		}		
		pc->capacity += num;
		pc->date = ptr;
	}
	return 1;
}

//��̬��
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	memset(pc->date, 0, sizeof(pc->date));
//	pc->sz = 0;
//}

//��̬��
void InitContact(Contact* pc)
{
	assert(pc);
	PeoInfo* ptr = (PeoInfo*)calloc(DEFAULT_MIN,sizeof(PeoInfo));
	if (ptr == NULL)
	{
		perror("InitContact::calloc");
		return;
	}
	pc->date = ptr;
	ptr = NULL;
	pc->sz = 0;
	pc->capacity = DEFAULT_MIN;

	//�����ļ�����ϵ����Ϣ
	LoadContact(pc);

}

int FindByName(const Contact* pc,char* name)
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}
	return EOF;
}

//��̬�İ汾
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	//����һ���˵���Ϣ
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//
//	pc->sz++;
//}

//��̬��
void AddContact(Contact* pc)
{
	assert(pc);	
	int ret=check_capacity(pc);
	if (ret == -1)
	{
		return;
	}
	printf("����������:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("����������:>");
	scanf("%d", &pc->date[pc->sz].age);
	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("�������ַ:>");
	scanf("%s", pc->date[pc->sz].addr);
	printf("������绰:>");
	scanf("%s", pc->date[pc->sz].tele);
	pc->sz++;
	printf("��ӳɹ�\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	printf("%-10s %-5s %-5s %-10s %-10s\n", "����","����","�Ա�","��ַ","�绰");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-10s %-5d %-5s %-10s %-10s\n", pc->date[i].name, pc->date[i].age, 
			pc->date[i].sex, pc->date[i].addr, pc->date[i].tele);
	}
}

void DelContact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ����������:>");
	scanf("%s", &name);
	//�ҵ�Ҫɾ������
	int ret=FindByName(pc,name);
	if (EOF == ret)
	{
		printf("û���ҵ�Ҫɾ������\n");
		return;
	}
	//ɾ��
	memmove(pc->date + ret, pc->date + (ret + 1), sizeof(PeoInfo) * (pc->sz - ret - 1));
	pc->sz--;
	printf("ɾ���ɹ�\n");
	ShowContact(pc);
}

void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("������Ҫ���ҵ���:>");
	scanf("%s", name);
	int ret=FindByName(pc, name);
	if (EOF == ret)
	{
		printf("û���ҵ�Ҫ���ҵ���\n");
		return;
	}
	int pos = ret;
	printf("%-10s %-5s %-5s %-10s %-10s\n", "����", "����", "�Ա�", "��ַ", "�绰");
	printf("%-10s %-5d %-5s %-10s %-10s\n", pc->date[pos].name, pc->date[pos].age,
			pc->date[pos].sex, pc->date[pos].addr, pc->date[pos].tele);
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ���ϵ��:>");
	scanf("%s", name);
	int ret=FindByName(pc, name);
	if (EOF == ret)
	{
		printf("û���ҵ�Ҫ�޸ĵ���\n");
		return;
	}
	//�޸�
	int pos = ret;
	printf("����������:>");
	scanf("%s", pc->date[pos].name);
	printf("����������:>");
	scanf("%d", &pc->date[pos].age);
	printf("�������Ա�:>");
	scanf("%s", pc->date[pos].sex);
	printf("�������ַ:>");
	scanf("%s", pc->date[pos].addr);
	printf("������绰:>");
	scanf("%s", pc->date[pos].tele);
	printf("�޸ĳɹ�\n");
	//�޸���ɴ�ӡһ��
	printf("%-10s %-5s %-5s %-10s %-10s\n", "����", "����", "�Ա�", "��ַ", "�绰");
	printf("%-10s %-5d %-5s %-10s %-10s\n", pc->date[pos].name, pc->date[pos].age,
		pc->date[pos].sex, pc->date[pos].addr, pc->date[pos].tele);
}

void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->date);
	pc->date = NULL;
	pc->sz = 0;
	pc->capacity = 0;
	pc = NULL;
}


void SaveContact(Contact* pc)
{
	assert(pc);
	FILE* pf = fopen("Contact.txt", "wb");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->date + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
	printf("����ɹ�\n");
}

void LoadContact(Contact* pc)
{
	assert(pc);
	FILE* pf = fopen("Contact.txt", "rb");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	//������
	PeoInfo tmp = {0};
	int i = 0;
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		//����
		check_capacity(pc);
		pc->date[i] = tmp;
		pc->sz++;
		i++;
	}
	fclose(pf);
	pf = NULL;
}


