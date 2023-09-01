#include "board.h"
#include "pieces.h"
#include "render.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 peao 2 cavalo 3 bispo 4 torre 5 dama 6 rei

int board[8][8];

int main() {
    initBoard(board, sizeof(board));
    initPieces(board, sizeof(board) / 8);
    renderScreen(board);
    return 0;
}