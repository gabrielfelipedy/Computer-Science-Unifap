#ifndef _H_PIECES
#define _H_PIECES

#include <stddef.h>

// 1 peao 2 cavalo 3 bispo 4 torre 5 dama 6 rei

enum {
    PAWN = 1,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING
};

void initPieces(int board[][8]);

#endif
