#ifndef _H_RENDER
#define _H_RENDER

#include "board.h"

void clearscr();
void renderBoard(char board[][TAM]);
void printPart(char draw[5][15], int part);

#endif