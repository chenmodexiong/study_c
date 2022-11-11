#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
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

//��ӡ����
//������11*11������Ҫ��ӡ9*9
//��ӡ��ʱ����ôӵ�1�к��п�ʼ

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-------ɨ��------\n");
	int j = 0;
	//��ӡ�к�
	for (j = 0; j <= col; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("-------ɨ��------\n");

}

//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EasyCount;
	while (count)
	{
		//��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//������
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}

//�����׵�����

static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1]
		+ mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]
		- 8 * '0';
}

//�Ų���

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EasyCount)
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����!\n");
				DisplayBoard(mine, ROW, COL);
				break;
				Sleep(3000);
				system("cls");
			}
			else
			{
				int n = GetMineCount(mine, x, y);
				show[x][y] = n + '0'; //ע��˴����ַ���ǧ��Ҫֱ��д����
				DisplayBoard(show,ROW,COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ������������룺>");
		}
	}
	if (win == row * col - EasyCount)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Sleep(3000);
		system("cls");
	}
}