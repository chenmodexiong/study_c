#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*********    1.play   ********\n");
	printf("*********    0.exit   ********\n");
	printf("******************************\n");
}

void game()
{
	char board[ROW][COL];
	//��ʼ������
	init_board(board,ROW,COL);
	//��ӡ����
	print_board(board, ROW, COL);
	

}

void test()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
					break;
			default:
				printf("�������\n");
				break;

		}
	} while (input);

}


int main()
{
	test();

	return 0;
}

