#define _CRT_SECURE_NO_WARNINGS  1





#include"game.h"

void intboard(char arr[ROW][COL], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < b; j++)
		{
			arr[i][j] =' ';
		}
	}
}
void display(char arr[ROW][COL], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < b; j++)
		{
			/*if ((j = 0) || (j = 2))
			{
				printf("|");
			}*/
			printf(" %c ", arr[i][j]);

			if (j < b - 1)
				printf("|");
		}
		printf("\n");
		int i = 0;
		for (i = 0; i < b; i++)
		{
			/*if ((i = 0) || (i = 2))
			{
				printf("|");
			}*/
			printf("---");
			
			if (i < b - 1)
				printf("|");
		}
		printf("\n");
	}
}
void player_move(char arr[ROW][COL], int a, int b)
{
	
	while (6)
	{
		int x = 0;
		int y = 0;
		printf("请输入坐标>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (' ' == arr[x - 1][y - 1])
			{
				arr[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("此坐标已经被占用，请重新输入>");

			}


		}
		else
		{
			printf("输入坐标有误，请重新输入>");
		}	
	}
}


void computer_move(char arr[ROW][COL], int a, int b)
{
	int x = 0;
	int y = 0;
	while (6)
	{
		x =(int) rand() % a;
		y =(int) rand() % b;
		if (' ' == arr[x][y])
		{
			arr[x][y] = 'y';
			break;
		}
		else
		{

		}


	}


}
int player_win(char arr[ROW][COL], int a, int b)
{
	int i = 0;

	for (i = 0; i < a; i++)
	{
		if (arr[i][0] == arr[i][1]&&arr[i][1] == arr[i][2]&&arr[i][0]!= ' ')
			return arr[i][0];
	}
	int j = 0;
	for (j = 0; j < b; j++)
	{
		if (arr[0][j] == arr[1][j]&&arr[1][j] == arr[2][j]&&arr[0][j]!=0)
			return arr[0][j];
	}
	if (arr[0][0] == arr[1][1] == arr[2][2] != ' ')

		return arr[0][0];
	
	if (arr[0][2]==arr[1][1]==arr[2][0]!=' ')


		return arr[0][2];

}