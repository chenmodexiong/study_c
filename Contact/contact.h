#pragma once

#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 20

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

//联系人信息
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

typedef struct Contact
{
	PeoInfo date[MAX];//存放信息的数组
	int sz;//当前已经存放人的数量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//显示通讯录信息
void ShowContact(const Contact* pc);

//查找联系人
void SearchContact(const Contact* pc);

//修改联系人
void ModifyContact(Contact* pc);

//排序联系人(按照名字排序)
void SortContact(Contact* pc);


















