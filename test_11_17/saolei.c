
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

//��ʼ������
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
	printf("-------ɨ��--------\n");
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
	printf("-------ɨ��--------\n");
}


//������
void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = Easycount;
	while (count)
	{
		//��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//�����׵ĸ���
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y]
		+ mine[x + 1][y + 1] - 8 * '0';
}


//�Ų���
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - Easycount)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				print_board(mine, ROW, COL);
				printf("���ź����㱻ը����\n");
				printf("���ź����㱻ը����\n");
				printf("���ź����㱻ը����\n");
				Sleep(3000);
				system("cls");
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//�������ַ����飬һ��Ҫת�����ַ��ٷŽ�ȥ
				print_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������������:>");
		}
	}
	if (win == (row * col - Easycount))
	{
		printf("��ϲ�㣬���׳ɹ�����\n");
		printf("��ϲ�㣬���׳ɹ�����\n");
		printf("��ϲ�㣬���׳ɹ�����\n");
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
	//��������
	char mine_board[ROWS][COLS] = { 0 };
	char show_board[ROWS][COLS] = { 0 };
	//��ʼ������
	init_board(mine_board, ROWS, COLS, '0');
	init_board(show_board, ROWS, COLS, '*');
	//��ӡ����
	//print_board(mine_board, ROW, COL);
	print_board(show_board, ROW, COL);
	//������
	set_mine(mine_board, ROW, COL);
	//print_board(mine_board, ROW, COL);
	//�Ų���
	find_mine(mine_board, show_board, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("����������������룡\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}














