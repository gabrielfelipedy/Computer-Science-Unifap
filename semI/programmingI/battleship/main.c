#include "board.h"
#include "globconst.h"
#include "render.h"
#include "shoot.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TODO: Play user against the machine
//TODO: Improve IA
//Render UI


int main()
{
    srand(time(NULL));

    char board[TAM][TAM];
    char enemy[TAM][TAM];

    initBoard(board, sizeof(board));
    initBoard(enemy, sizeof(enemy));

    putShips(board);
    putShips(enemy);

    int boardShips = SHIPS;
    int enemyShips = SHIPS;

    clearscr();

    printf("Boardo of IA 01:\n\n");
    renderBoard(board);
    printf("\nBoard of IA 02:\n\n");
    renderBoard(enemy);

    printf("\nPress any key to start ... ");
    getchar();

    int i = 0;
    do {
        clearscr();
        if(i % 2 == 0) {
            printf("\nVez da IA 01\n\n");
            if(shoot(enemy) == 1) {
                enemyShips--;
            }
            renderBoard(enemy);
            printf("\nTotal de acertos: %d\n\n", SHIPS-enemyShips);
        }
        else {
            printf("\nVez da IA 02\n\n");
            if(shoot(board) == 1) {
                boardShips--;
            }
            renderBoard(board);
            printf("\nTotal de acertos: %d\n\n", SHIPS-boardShips);
        }

        i++;
        getchar();
    } while(enemyShips > 0 && boardShips > 0);

    printf("O Ganhador foi %s\n", (boardShips == 0) ? "IA 02" : "IA 01");
}