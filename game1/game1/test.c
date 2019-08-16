#define _CRT_SECURE_NO_WARNINGS 1

 #include "game.h"


void menu()
{
	printf("************************\n");
	printf("******    1.play   *****\n");
	printf("******    0.exit   *****\n");
	printf("************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 }; 
	InitBoard (board, ROW, COL);//初始化
	Displayboard(board, ROW, COL);	//打印棋盘

	while (1)
	{
		Playmove(board, ROW, COL);//玩家走
		Displayboard(board, ROW, COL);//打印棋盘
		//判断输赢
		ret = Iswin (board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢!\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢!\n");
	}
	else if (ret == 'q')
	{
		printf("平局!\n");
	}
}



void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do 
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏!\n");
				break;
			default:
					printf("选择错误，请重新选择!\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;

}