#include "pieces.h"
#include <stddef.h>
#include <string.h>

void initPieces(int board[][8]) {
  board[0][0] = ROOK;
  board[0][1] = KNIGHT;
  board[0][2] = BISHOP;
  board[0][3] = QUEEN;
  board[0][4] = KING;
  board[0][5] = BISHOP;
  board[0][6] = KNIGHT;
  board[0][7] = ROOK;
  
  for(int i = 0; i < 8; i++) {
    board[1][i] = PAWN;
    board[6][i] = PAWN;
  }

  board[7][0] = ROOK;
  board[7][1] = KNIGHT;
  board[7][2] = BISHOP;
  board[7][3] = QUEEN;
  board[7][4] = KING;
  board[7][5] = BISHOP;
  board[7][6] = KNIGHT;
  board[7][7] = ROOK;
}
