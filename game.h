#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Menu(void);
void Inboard(char board[ROW][COL], int row,int col);
void Printboard(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);
void Computer_move(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);
int Player_win(void);
int Computer_win(void);
void no_win(void);

int IO;
int all_times;
int win_times;
int fai_times;
char board[ROW][COL];