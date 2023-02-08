#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("*************************************\n");
	printf("********   1.add    2.del     *******\n");
	printf("********   3.search 4.modify  *******\n");
	printf("********   5.show   6.sort    *******\n");
	printf("********   0.exit   7.clear   *******\n");
	printf("*************************************\n");
}

typedef enum Options
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	CLEAR
}Options;

int main()
{
	int input = 0;
	Contact con;//创建通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		case CLEAR:
			system("cls");
			break;
		default:
			printf("输入错误\n");
			break;
		}
		
	} while (input);

	return 0;
}








