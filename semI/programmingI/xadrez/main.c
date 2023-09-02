#include "board.h"
#include "pieces.h"
#include "render.h"
#include "stype.h"

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int piece;
  char origin[3];
  char dest[3];
} move_t;

int board[8][8];

void flush() { while(getchar() != '\n'); }

void substr(char* origin, int start, int len, char* dest) {
  memcpy(dest, origin+start, len);
}

bool isValid(move_t m) {
  if(m.piece < 1 || m.piece > 6) return false;

  if(sisdigit(m.origin) || sisdigit(m.dest)) return false;
  if(siscntrl(m.origin) || siscntrl(m.dest)) return false;
  if(!sisprint(m.origin) || !sisprint(m.dest)) return false;

  return true;
}

int main() {
    initBoard(board, sizeof(board));
    initPieces(board);

    printf("Welcome to chess game!!\n");

    do {
      renderScreen(board);

      char buf[6];
      printf("Type a movement (example: e4 f6): ");
      fgets(buf, 6, stdin);

      flush();

      move_t m;
      m.piece = PAWN;
      substr(buf, 0, 2, m.origin);
      substr(buf, 3, 2, m.dest);

      m.origin[2] = '\0';
      m.dest[2] = '\0';

      if(!isValid(m)) {
        printf("Invalid move\n");
        getchar();
        continue;
      }

      printf("You choose the movement %s %s ", m.origin, m.dest);
      getchar();

    } while(true);

    return 0;
}
