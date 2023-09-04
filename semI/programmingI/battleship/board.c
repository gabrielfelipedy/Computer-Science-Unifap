#include "board.h"
#include "globconst.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>


void initBoard(char board[][TAM], size_t size) {
    memset(board, '~', size);
}

void putShips(char board[][TAM]) {
    srand(time(NULL));

    for (int i = 0; i < SHIPS; i++)
    {
        int x, y;
        do
        {
            x = rand() % TAM;
            y = rand() % TAM;
        } while (board[x][y] == 'N');

        board[x][y] = 'N';
    }
}