#pragma once

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 20
#define TELE_MAX 12
#define PEPO_MAX 100
#define DEFAULT_MIN 3

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW
};

//��ϵ����Ϣ
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

//��̬��
//typedef struct Contact
//{
//	PeoInfo date[PEPO_MAX];//�����ϵ�˵���Ϣ
//	int sz;//�Ѿ������ϵ�˵ĸ���
//}Contact;

//��̬��
typedef struct Contact
{
	PeoInfo* date;//ָ������ϵ�˵���Ϣ��ָ��
	int sz;//�Ѿ������ϵ�˵ĸ���
	int capacity;//��ǰ�������
}Contact;

//��ӡ�˵�
void menu(void);

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//Ѱ����ϵ��
int FindByName(const Contact* pc, char* name);

//�����ϵ��
void AddContact(Contact* pc);

//��ʾ��ϵ��
void ShowContact(const Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//������ϵ��
void SearchContact(const Contact* pc);

//�޸���ϵ��
void ModifyContact(Contact* pc);

//��鵱ǰ����
int check_capacity(Contact* pc);

//����ͨѶ¼
void DestroyContact(Contact* pc);

//����ͨѶ¼��Ϣ
void SaveContact(Contact* pc);

//������ϵ����Ϣ��ͨѶ¼
void LoadContact(Contact* pc);
