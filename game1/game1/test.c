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
	InitBoard (board, ROW, COL);//��ʼ��
	Displayboard(board, ROW, COL);	//��ӡ����

	while (1)
	{
		Playmove(board, ROW, COL);//�����
		Displayboard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret = Iswin (board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ!\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ!\n");
	}
	else if (ret == 'q')
	{
		printf("ƽ��!\n");
	}
}



void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ!\n");
				break;
			default:
					printf("ѡ�����������ѡ��!\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;

}