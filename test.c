#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

int main()
{
	
	do
	{
		//菜单-->开始，退出
		Menu();
		scanf("%d", &IO);
		switch (IO)
		{
		case 1:
			//初始化棋盘
			Inboard(board,ROW,COL);
			all_times++;
			while (1)
			{
				char munwin = 'C';
				//玩家下棋
				printf("玩家下棋\n");
				Player_move(board, ROW, COL);
				//判断胜负
				Is_win(board,ROW,COL);/////////////////////////////////////////////////////////////
				if (munwin == '*')
				{
					//玩家赢
					win_times = win_times + Player_win();
					break;
				}
				//电脑下棋
				printf("电脑下棋\n");
				Computer_move(board,ROW,COL);
				//判断胜负
				Is_win(board, ROW, COL);
				if (munwin == '#')
				{
					//电脑赢
					fai_times = fai_times + Computer_win();
					break;
				}

				if (munwin == 'Q')
				{
					//平局
					no_win();
					break;
				}
				if (munwin == 'C')
				{
					//go
				}
			}
			break;
	    case 2:
			//看看状态
			printf("目前状态:\n");
			printf("总局数:%d\n",all_times);
			printf("胜局数:%d\n",win_times);
			printf("败局数:%d\n",fai_times);
			break;
		case 0:
			printf("下次再来哦~~\n");
			break;
		default:
			printf("不可以这样哦~~\n");
			break;
		}

	} while (IO!=0);

	return 0;
}