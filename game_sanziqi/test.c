#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("***************************\n");
	printf("********  1.play  *********\n");
	printf("********  0.exit  *********\n");
	printf("***************************\n");
	printf("请输入:>");
}

void game()
{
	char ret = 0;
	char board[ROW][COL];
	init_board(board,ROW,COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//判断输赢
		ret=is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你赢了\n");
		Sleep(2000);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		Sleep(2000);
		system("cls");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
		Sleep(2000);
		system("cls");
	}
}
//判断输赢
//玩家赢，返回*
//电脑赢，返回#
//平局，返回Q
//游戏继续，返回C

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
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
			printf("输入错误\n");
		}

	} while (input);

}


int main()
{
	test();

	return 0;
}

