#define _CRT_SECURE_NO_WARNINGS  1

#include"game.h"


void menu()
{
	printf("***************************\n");
	printf("********1.����Ϸ **********\n");
	printf("********2.�˳���Ϸ*********\n");
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
			printf("���Ӯ\n");
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
		printf("ѡ��1����Ϸ��ѡ��0�˳���Ϸ\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}

	} while (input);

		return 0;
}