#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

int main()
{
	
	do
	{
		//�˵�-->��ʼ���˳�
		Menu();
		scanf("%d", &IO);
		switch (IO)
		{
		case 1:
			//��ʼ������
			Inboard(board,ROW,COL);
			all_times++;
			while (1)
			{
				char munwin = 'C';
				//�������
				printf("�������\n");
				Player_move(board, ROW, COL);
				//�ж�ʤ��
				Is_win(board,ROW,COL);/////////////////////////////////////////////////////////////
				if (munwin == '*')
				{
					//���Ӯ
					win_times = win_times + Player_win();
					break;
				}
				//��������
				printf("��������\n");
				Computer_move(board,ROW,COL);
				//�ж�ʤ��
				Is_win(board, ROW, COL);
				if (munwin == '#')
				{
					//����Ӯ
					fai_times = fai_times + Computer_win();
					break;
				}

				if (munwin == 'Q')
				{
					//ƽ��
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
			//����״̬
			printf("Ŀǰ״̬:\n");
			printf("�ܾ���:%d\n",all_times);
			printf("ʤ����:%d\n",win_times);
			printf("�ܾ���:%d\n",fai_times);
			break;
		case 0:
			printf("�´�����Ŷ~~\n");
			break;
		default:
			printf("����������Ŷ~~\n");
			break;
		}

	} while (IO!=0);

	return 0;
}