#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EasyCount 10

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS],int row,int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);