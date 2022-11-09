#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include<stdio.h>
//
////��һ�������������ð������
//
//void sort(int* arr,int sz)
//{
//	int i = 0;
//	//ȷ������
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð������
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

//������Դ��



#pragma once

#include<stdio.h>
#define ROW 3
#define COL 3
#include<time.h>
#include<stdlib.h>
#include<windows.h>

//��ʼ�����̣�
void init_board(char board[ROW][COL], int row, int col);
//��ӡ���̣�
void print_board(char board[ROW][COL], int row, int col);
//�������
void player_move(char board[ROW][COL], int row, int col);
//��������
void computer_move(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char is_win(char board[ROW][COL], int row, int col);



#define  _CRT_SECURE_NO_WARNINGS 1

#define  _CRT_SECURE_NO_WARNINGS 1

//#include"game.h"

void init_board(char board[ROW][COL], int row, int col)
{
	//��
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//�����������ַ���
			//˫�������ַ�����
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
	printf("�������:\n");
	while (1)
	{
		printf("���������������:>");
		scanf("%d %d", &x, &y);
		//����Ϸ�
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}
		}
		//����Ƿ�
		else
		{
			printf("����Ƿ�,����������\n");
		}

	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("��������:\n");
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
		//�ж�����
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		//�ж�����
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�ж������Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�Ƿ�ƽ�֣�
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
	//û����һ��ߵ���Ӯ����Ϸ������
	return 'C';
}

//
////�Ż���
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

//�Ż�ǰ
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
	printf("������:>");
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
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("�����۸�����\n");
		Sleep(2000);
		system("cls");
		system("shutdown -s -t 5");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		Sleep(2000);
		system("cls");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
		Sleep(2000);
		system("cls");
	}
}
//�ж���Ӯ
//���Ӯ������*
//����Ӯ������#
//ƽ�֣�����Q
//��Ϸ����������C

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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
		}

	} while (input);

}


int main()
{
	test();

	return 0;
}




