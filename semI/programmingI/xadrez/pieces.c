#include "pieces.h"
#include <stddef.h>
#include <string.h>

void initPieces(int board[][8], size_t size) {

    for(int i = 0; i < 8; i++) {
        board[0][i] = ROOK;
    }

    for(int i = 0; i < 8; i++) {
        board[1][i] = PAWN;
    }
    for(int i = 0; i < 8; i++) {
        board[6][i] = PAWN;
    }

    for(int i = 0; i < 8; i++) {
        board[7][i] = ROOK;
    }
}