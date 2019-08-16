

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>




#define  ROW  3
#define  COL  3


void InitBoard(char board[ROW][COL], int row, int col);
void Playmove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);