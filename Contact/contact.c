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
		printf("通讯录已满\n");
		return;
	}
	//增加一个人的信息
	printf("请输入姓名:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入地址:>");
	scanf("%s", pc->date[pc->sz].addr);
	printf("请输入电话:>");
	scanf("%s", pc->date[pc->sz].tele);

	pc->sz++;
	printf("添加成功\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-15s\t%-4s\t%-5s\t%-10s\t%-10s\n", "姓名", "年龄", "性别","地址","电话");

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
		printf("通讯录为空\n");
	}
	printf("请输入要删除的人姓名:>");
	scanf("%s", name);
	int i = 0;
	//找到要删除的人
	int ret = FindByName(pc,name);
	if (ret == -1)
	{
		printf("没有找到要删除的人\n");
	}
	//删除
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}


void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找的人姓名:>");
	scanf("%s", name);
	int ret=FindByName((Contact*)pc, name);
	if (ret == -1)
	{
		printf("查找的人不存在\n");
	}
	else
	{
		int i = ret;
		printf("%-15s\t%-4s\t%-5s\t%-10s\t%-10s\n", "姓名", "年龄", "性别", "地址", "电话");
		printf("%-15s\t%-4d\t%-5s\t%-10s\t%-10s\n", pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].addr, pc->date[i].tele);
	}
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("请输入要修改的人名字:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("没有找到要修改的人\n");
		return;
	}
	//修改
	int pos = ret;
	printf("请重新输入姓名:>");
	scanf("%s", pc->date[pos].name);
	printf("请重新输入年龄:>");
	scanf("%d", &pc->date[pos].age);
	printf("请重新输入性别:>");
	scanf("%s", pc->date[pos].sex);
	printf("请重新输入地址:>");
	scanf("%s", pc->date[pos].addr);
	printf("请重新输入电话:>");
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
	printf("名字:1 年龄:2\n");
}

int (*SortList[3])(const void*, const void*) = {0, &SortByName,&SortByAge };

void SortContact(Contact* pc)
{
	assert(pc);
	Menu();
	printf("请输入要按照什么排序:>");
	int option = 0;
	scanf("%d", &option);
	qsort(pc->date, pc->sz, sizeof(pc->date[0]), *SortList[option]);
	//排序成功打印一次
	ShowContact(pc);

}





