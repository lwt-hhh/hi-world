
#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#include<string.h>
#include<time.h>

#define ROW 3
#define COL 3


void intboard(char arr[ROW][COL], int a, int b);
void display(char arr[ROW][COL], int a, int b);

void player_move(char arr[ROW][COL], int a, int b);

void computer_move(char arr[ROW][COL], int a, int b);
int player_win(char arr[ROW][COL], int a, int b);
int computer_win(char arr[ROW][COL], int a, int b);






#endif
