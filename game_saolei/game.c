#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
//由于是11*11的棋盘要打印9*9
//打印的时候最好从第1行和列开始

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-------扫雷------\n");
	int j = 0;
	//打印列号
	for (j = 0; j <= col; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷------\n");

}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EasyCount;
	while (count)
	{
		//生成随机下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//布置雷
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}

//计算雷的数量

static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1]
		+ mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]
		- 8 * '0';
}

//排查雷

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EasyCount)
	{
		printf("请输入要排查的坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了!\n");
				DisplayBoard(mine, ROW, COL);
				break;
				Sleep(3000);
				system("cls");
			}
			else
			{
				int n = GetMineCount(mine, x, y);
				show[x][y] = n + '0'; //注意此处是字符，千万不要直接写数字
				DisplayBoard(show,ROW,COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入：>");
		}
	}
	if (win == row * col - EasyCount)
	{
		printf("恭喜你，排雷成功\n");
		Sleep(3000);
		system("cls");
	}
}