#include "board.h"
#include <string.h>

void initBoard(int board[][8], size_t size) {
    memset(board, EMPTY, size);
}