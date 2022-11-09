#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

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
	init_board(board,ROW,COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret=is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ��Ӯ��\n");
		Sleep(2000);
		system("cls");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		Sleep(2000);
		system("cls");
	}
	else if(ret=='Q')
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
			printf("�������\n");
		}

	} while (input);

}


int main()
{
	test();

	return 0;
}

