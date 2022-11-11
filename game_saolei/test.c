#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*************************\n");
	printf("*******   1.play   ******\n");
	printf("*******   0.exit   ******\n");
	printf("*************************\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};//布置雷的棋盘
	char show[ROWS][COLS] = {0};//排查雷的棋盘

	//初始化棋盘
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	//打印棋盘(只打印9*9即可)
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show,ROW,COL);

	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show,ROW, COL);

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}

	} while (input);
}

int main()
{
	test();

	return 0;
}




