#ifndef _H_BOARD
#define _H_BOARD

#include <stddef.h>

#define TAM 10

void initBoard(char board[][TAM], size_t size);
void putShips(char board[][TAM]);

#endif