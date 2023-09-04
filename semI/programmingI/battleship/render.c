#include "board.h"
#include "render.h"
#include "ui.h"

#include <stdio.h>

void clearscr()
{
    printf("\x1b[2J");
    printf("\x1b[H");
}

void renderBoard(char board[][TAM]) {
    for(int i = 0; i < TAM; i++) {

        printf("%c\t", 'A' + i);

        for(int j = 0; j < TAM; j++) {
            char * color = (board[i][j] == 'E') ? "\x1b[31m" : (board[i][j] == 'A' ? "\x1b[35m" : (board[i][j] == 'N' ? "\x1b[32m" : "")); 

            printf("%s%c%s ", color, board[i][j], "\x1b[m");
        }
        putchar('\n');
    }

    printf("\n\n\t");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", i);
    }
    putchar('\n');
}