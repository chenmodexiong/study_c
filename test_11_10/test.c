#define  _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//打印棋盘

//void PrintBoard(char board[ROW][COL],int row,int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}
//

//优化后

void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < row; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < row - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋

void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	printf("请输入要下棋的坐标：>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		//考虑坐标的合法性
		//合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标是否被占用
			if(board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入：>");
			}
		}
		//不合法
		else
		{
			printf("坐标非法,请重新输入：>");
		}
	}
}

//电脑下棋

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	while (1)
	{
		int x = rand() % row ;
		int y = rand() % col ;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


//判断棋盘是否满了

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


//判断输赢

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//判断三行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//判断三列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//两条对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//是否平局？
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	//没有电脑赢或者玩家赢，游戏继续
	return 'C';
}

void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	PrintBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);
		PrintBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你获胜了\n");
		Sleep(2000);
		system("cls");
	}
	if (ret == '#')
	{
		printf("很遗憾，电脑赢了\n");
		Sleep(2000);
		system("cls");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
		Sleep(2000);
		system("cls");
	}
}


void menu()
{
	printf("*****************************\n");
	printf("********     1.play    ******\n");
	printf("********     0.exit    ******\n");
	printf("*****************************\n");
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("输入非法，请重新输入\n");
			break;
		}

	} while (input);

}


int main()
{
	test();
	return 0;
}




