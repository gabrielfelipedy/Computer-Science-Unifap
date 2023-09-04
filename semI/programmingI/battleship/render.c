#include "board.h"
#include "render.h"
#include <stdio.h>

void renderBoard(char board[][TAM]) {
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%c ", board[i][j]);
        }
        putchar('\n');
    }
}