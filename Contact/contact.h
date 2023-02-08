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

//��ϵ����Ϣ
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
	PeoInfo date[MAX];//�����Ϣ������
	int sz;//��ǰ�Ѿ�����˵�����
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//��ʾͨѶ¼��Ϣ
void ShowContact(const Contact* pc);

//������ϵ��
void SearchContact(const Contact* pc);

//�޸���ϵ��
void ModifyContact(Contact* pc);

//������ϵ��(������������)
void SortContact(Contact* pc);


















