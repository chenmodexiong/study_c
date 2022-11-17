#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include"game.h"
//
////初始化棋盘
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
//	printf("-------扫雷--------\n");
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
//	printf("-------扫雷--------\n");
//}
//
//
////布置雷
//void set_mine(char board[ROWS][COLS], int row, int col)
//{
//	int count = Easycount;
//	while (count)
//	{
//		//生成随机下标
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
////计算雷的个数
//static int get_mine_count(char mine[ROWS][COLS],int x,int y)
//{
//	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
//		mine[x][y - 1] + mine[x][y+1] + mine[x + 1][y - 1] + mine[x + 1][y] 
//		+ mine[x + 1][y + 1] - 8 * '0';
//}
//
//
////排查雷
//void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win<row*col-Easycount)
//	{
//		printf("请输入要排查的坐标:>");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (mine[x][y] == '1')
//			{
//				print_board(mine, ROW, COL);
//				printf("很遗憾，你被炸死了\n");
//				printf("很遗憾，你被炸死了\n");
//				printf("很遗憾，你被炸死了\n");
//				Sleep(3000);
//				system("cls");
//				break;
//			}
//			else
//			{
//				int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';//这里是字符数组，一定要转换成字符再放进去
//				print_board(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//		{
//			printf("坐标非法，请重新输入:>");
//		}
//	}
//	if (win == (row * col - Easycount))
//	{
//		printf("恭喜你，排雷成功！！\n");
//		printf("恭喜你，排雷成功！！\n");
//		printf("恭喜你，排雷成功！！\n");
//		Sleep(2000);
//		system("cls");
//	}
//}
//
//
//












