
#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define Easycount 10

void init_board(char board[ROWS][COLS], int rows, int cols, char set);

void print_board(char board[ROWS][COLS], int rows, int cols);

void set_mine(char board[ROWS][COLS], int row, int col);

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//初始化棋盘
void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void print_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------扫雷--------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷--------\n");
}


//布置雷
void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = Easycount;
	while (count)
	{
		//生成随机下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//计算雷的个数
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y]
		+ mine[x + 1][y + 1] - 8 * '0';
}


//排查雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - Easycount)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				print_board(mine, ROW, COL);
				printf("很遗憾，你被炸死了\n");
				printf("很遗憾，你被炸死了\n");
				printf("很遗憾，你被炸死了\n");
				Sleep(3000);
				system("cls");
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//这里是字符数组，一定要转换成字符再放进去
				print_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入:>");
		}
	}
	if (win == (row * col - Easycount))
	{
		printf("恭喜你，排雷成功！！\n");
		printf("恭喜你，排雷成功！！\n");
		printf("恭喜你，排雷成功！！\n");
		Sleep(2000);
		system("cls");
	}
}




#include<stdio.h>

#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("********   1.play  *********\n");
	printf("********   0.exit  *********\n");
	printf("****************************\n");
}

void game()
{
	//创建棋盘
	char mine_board[ROWS][COLS] = { 0 };
	char show_board[ROWS][COLS] = { 0 };
	//初始化棋盘
	init_board(mine_board, ROWS, COLS, '0');
	init_board(show_board, ROWS, COLS, '*');
	//打印棋盘
	//print_board(mine_board, ROW, COL);
	print_board(show_board, ROW, COL);
	//布置雷
	set_mine(mine_board, ROW, COL);
	//print_board(mine_board, ROW, COL);
	//排查雷
	find_mine(mine_board, show_board, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
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














