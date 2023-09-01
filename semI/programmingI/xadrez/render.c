#include "board.h"
#include "render.h"
#include <stdio.h>

/* This is the layer responsble for to render the board for the user
 in a friendlly way
 */

void clearscr(void) {
    printf("\x1b[2J");
    printf("\x1b[H");
}

void renderScreen(int board[][8]) {
    clearscr();

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            printf("%d ", board[i][j]);
        }
        putchar('\n');
    }
}