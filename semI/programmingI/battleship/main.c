#include "board.h"
#include "globconst.h"
#include "render.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char board[TAM][TAM];
    char enemy[TAM][TAM];

    initBoard(board, sizeof(board));
    initBoard(enemy, sizeof(enemy));

    printf("Empty board:\n\n");
    renderBoard(board);

    putShips(board);

    printf("Filled board:\n\n");
    renderBoard(board);
}