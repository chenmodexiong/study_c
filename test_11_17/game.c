#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include"game.h"
//
////��ʼ������
//void init_board(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void print_board(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("-------ɨ��--------\n");
//	for (j = 0; j <= col; j++)
//	{
//		printf("%d ",j);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ",i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ",board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------ɨ��--------\n");
//}
//
//
////������
//void set_mine(char board[ROWS][COLS], int row, int col)
//{
//	int count = Easycount;
//	while (count)
//	{
//		//��������±�
//		int x = rand() % row + 1;
//		int y = rand() % col + 1;
//		if (board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			count--;
//		}
//	}
//}
//
////�����׵ĸ���
//static int get_mine_count(char mine[ROWS][COLS],int x,int y)
//{
//	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
//		mine[x][y - 1] + mine[x][y+1] + mine[x + 1][y - 1] + mine[x + 1][y] 
//		+ mine[x + 1][y + 1] - 8 * '0';
//}
//
//
////�Ų���
//void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win<row*col-Easycount)
//	{
//		printf("������Ҫ�Ų������:>");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (mine[x][y] == '1')
//			{
//				print_board(mine, ROW, COL);
//				printf("���ź����㱻ը����\n");
//				printf("���ź����㱻ը����\n");
//				printf("���ź����㱻ը����\n");
//				Sleep(3000);
//				system("cls");
//				break;
//			}
//			else
//			{
//				int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';//�������ַ����飬һ��Ҫת�����ַ��ٷŽ�ȥ
//				print_board(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//		{
//			printf("����Ƿ�������������:>");
//		}
//	}
//	if (win == (row * col - Easycount))
//	{
//		printf("��ϲ�㣬���׳ɹ�����\n");
//		printf("��ϲ�㣬���׳ɹ�����\n");
//		printf("��ϲ�㣬���׳ɹ�����\n");
//		Sleep(2000);
//		system("cls");
//	}
//}
//
//
//











