#define  _CRT_SECURE_NO_WARNINGS 1


//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret=%d\n",ret);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	--i;
//	if (i > sizeof(int))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//




#include <stdio.h>

// int main()
// {
//     int n=0;
//     int m=0;
//     scanf("%d %d",&n,&m);
//     int i=0;
//     int j=0;
//     int num=0;
//     int sum=0;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",&num);
//             if(num>0)
//             {
//                 sum+=num;
//             }
//         }
//     }
//     printf("%d\n",sum);
//     return 0;
// }

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int num = 0;
//    int sum = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &num);
//            arr[i][j] = num;
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int num = 0;
//    int sum = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &num);
//            arr[i][j] = num;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//#include <stdio.h>
//
//void print(int n)
//{
//    if (n > 5)
//    {
//        print(n / 6);
//    }
//    printf("%d", n % 6);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}
//


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = { 0 };
//    int num = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    scanf("%d", &num);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != num)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
//
//
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[n];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//
//#include"game.h"
//
//void menu()
//{
//	printf("****************************\n");
//	printf("********   1.play  *********\n");
//	printf("********   0.exit  *********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	//创建棋盘
//	char mine_board[ROWS][COLS] = { 0 };
//	char show_board[ROWS][COLS] = { 0 };
//	//初始化棋盘
//	init_board(mine_board, ROWS, COLS, '0');
//	init_board(show_board, ROWS, COLS, '*');
//	//打印棋盘
//	//print_board(mine_board, ROW, COL);
//	print_board(show_board, ROW, COL);
//	//布置雷
//	set_mine(mine_board, ROW, COL);
//	//print_board(mine_board, ROW, COL);
//	//排查雷
//	find_mine(mine_board,show_board,ROW,COL);
//}
//
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}
//
//
//
//
//














