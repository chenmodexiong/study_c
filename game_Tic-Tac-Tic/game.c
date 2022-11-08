#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
#include<stdio.h>

void init_board(char board[ROW][COL], int row, int col)
{
	//一行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//一列
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//每一个格子初始都是空格
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//最初的写法
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//if (i < row - 1)
		//{
		//	printf("---|---|---\n");
		//}
		//优化后
		int j = 0;
		for(j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			printf("|");
		}
		printf("\n");
		if (j < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---|");
				printf("|");
			}
			printf("\n");
		}
	}
}













