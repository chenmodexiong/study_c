#define  _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

//��ʼ������
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


//��ӡ����

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

//�Ż���

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

//�������

void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	printf("������Ҫ��������꣺>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		//��������ĺϷ���
		//�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�����Ƿ�ռ��
			if(board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã����������룺>");
			}
		}
		//���Ϸ�
		else
		{
			printf("����Ƿ�,���������룺>");
		}
	}
}

//��������

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
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


//�ж������Ƿ�����

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


//�ж���Ӯ

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//�ж�����
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//�ж�����
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�Ƿ�ƽ�֣�
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	//û�е���Ӯ�������Ӯ����Ϸ����
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
		printf("��ϲ���ʤ��\n");
		Sleep(2000);
		system("cls");
	}
	if (ret == '#')
	{
		printf("���ź�������Ӯ��\n");
		Sleep(2000);
		system("cls");
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
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
		printf("�����룺>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����Ƿ�������������\n");
			break;
		}

	} while (input);

}


int main()
{
	test();
	return 0;
}




