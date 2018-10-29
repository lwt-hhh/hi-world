#define _CRT_SECURE_NO_WARNINGS  1

#include"game.h"


void menu()
{
	printf("***************************\n");
	printf("********1.玩游戏 **********\n");
	printf("********2.退出游戏*********\n");
	printf("***************************\n");


}
void game()
{
	char arr[ROW][COL] = { 0 };
	intboard(arr, ROW, COL);
	display(arr,ROW,COL);
	while (6)
	{
		player_move(arr, ROW, COL);
		display(arr, ROW, COL);
		char ret;
		ret = player_win(arr, ROW, COL);
		if (ret == 'x')
		{
			printf("玩家赢\n");
			break;
		}
		
		computer_move(arr, ROW, COL);
		
		printf("\n");
		display(arr, ROW, COL);
		
	}

}

int main()
{
    srand((unsigned int)time (NULL));
	int input;
	do
	{
		menu();
		printf("选择1玩游戏，选择0退出游戏\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}

	} while (input);

		return 0;
}