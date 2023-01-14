#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
		return;
	}
	//����һ���˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pc->sz].age));
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
	int i = 0;
	printf("%-15s\t%-4s\t%-5s\t%-10s\t%-10s\n", "����", "����", "�Ա�","��ַ","�绰");

	for (i = 0; i < pc->sz; i++)
	{
		printf("%-15s\t%-4d\t%-5s\t%-10s\t%-10s\n", pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].addr, pc->date[i].tele);
	}
}

int FindByName(Contact* pc,char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void DelContact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	printf("������Ҫɾ����������:>");
	scanf("%s", name);
	int i = 0;
	//�ҵ�Ҫɾ������
	int ret = FindByName(pc,name);
	if (ret == -1)
	{
		printf("û���ҵ�Ҫɾ������\n");
	}
	//ɾ��
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}


void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ���ҵ�������:>");
	scanf("%s", name);
	int ret=FindByName((Contact*)pc, name);
	if (ret == -1)
	{
		printf("���ҵ��˲�����\n");
	}
	else
	{
		int i = ret;
		printf("%-15s\t%-4s\t%-5s\t%-10s\t%-10s\n", "����", "����", "�Ա�", "��ַ", "�绰");
		printf("%-15s\t%-4d\t%-5s\t%-10s\t%-10s\n", pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].addr, pc->date[i].tele);
	}
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("������Ҫ�޸ĵ�������:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("û���ҵ�Ҫ�޸ĵ���\n");
		return;
	}
	//�޸�
	int pos = ret;
	printf("��������������:>");
	scanf("%s", pc->date[pos].name);
	printf("��������������:>");
	scanf("%d", &pc->date[pos].age);
	printf("�����������Ա�:>");
	scanf("%s", pc->date[pos].sex);
	printf("�����������ַ:>");
	scanf("%s", pc->date[pos].addr);
	printf("����������绰:>");
	scanf("%s", pc->date[pos].tele);

}


int SortByName(const void* e1,const void* e2)
{
	return strcmp(((Contact*)e1)->date->name, ((Contact*)e2)->date->name);
}

int SortByAge(const void* e1, const void* e2)
{
	return ((Contact*)e1)->date->age - ((Contact*)e2)->date->age;
}


void Menu()
{
	printf("����:1 ����:2\n");
}

int (*SortList[3])(const void*, const void*) = {0, &SortByName,&SortByAge };

void SortContact(Contact* pc)
{
	assert(pc);
	Menu();
	printf("������Ҫ����ʲô����:>");
	int option = 0;
	scanf("%d", &option);
	qsort(pc->date, pc->sz, sizeof(pc->date[0]), *SortList[option]);
	//����ɹ���ӡһ��
	ShowContact(pc);

}





