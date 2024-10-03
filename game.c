#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
IO = 0;
all_times = 0;
win_times = 0;
fai_times = 0;

void Menu(void)
{
	printf("****************************\n");
	printf("** 1.开始游戏  2.看看状态 **\n");
	printf("** 0.退出游戏             **\n");
	printf("****************************\n");
	printf("你想要什么呢~~：");
	
}

void Inboard(char board[ROW][COL], int row, int col)
{
	//初始化内容
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';///////////////////////////////////////////////////////////////////////////////////////////
		}
	}
	Printboard(board, row, col);
}

void Printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//生成棋盘
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col && i < row - 1; j++)
		{
			printf("---");
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

void Player_move(char board[ROW][COL], int row, int col)
{
	int player_row = 0;
	int player_col = 0;
	while (1)
	{
		scanf("%d %d", &player_row, &player_col);
		if (player_row >=1 && player_row  <= row && player_col >=1 && player_col  <= col)
		{
			if (board[player_row - 1][player_col - 1] == ' ')
			{
				board[player_row - 1][player_col - 1] = '*';
				break;
			}
			else
			{
				printf("被占用\n");
			}
		}
		else
		{
			printf("不可以这样哦~~\n");
		}
	}
	Printboard(board, row, col);
}

void Computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			printf("电脑下在了 %d %d \n",x,y);
			board[x][y] = '#';
			break;
		}
	}
	Printboard(board, row, col);
}

char Is_win(char board[ROW][COL], int row, int col)
{
	int i;
	//行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][i] != ' ')
		return board[1][1];
	//平局或go
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}

	return 'Q';
}

int Player_win(void)
{
	printf("玩家赢\n");
	return 1;
}

int Computer_win(void)
{
	printf("电脑赢\n");
	return 1;
}

void no_win(void)
{
	printf("平局\n");
}