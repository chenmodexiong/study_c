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
char is_win(char board[ROW][COL],int row,int col);


