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
	char mine[ROWS][COLS] = {0};//?????׵?????
	char show[ROWS][COLS] = {0};//?Ų??׵?????

	//??ʼ??????
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	//??ӡ????(ֻ??ӡ9*9????)
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show,ROW,COL);

	//??????
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//?Ų???
	FindMine(mine, show,ROW, COL);

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("?????룺>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("?˳???Ϸ\n");
			break;
		default:
			printf("???????????????????룡\n");
			break;
		}

	} while (input);
}

int main()
{
	test();

	return 0;
}




