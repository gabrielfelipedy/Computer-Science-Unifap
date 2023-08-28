#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

#define MAX_STR 20

struct termios origin;

void moveCursor(int x, int y) {
    char buf[7];
    sprintf(buf, "\x1b[%d;%dH", x, y);
    write(STDOUT_FILENO, buf, 7);
}

void cursorStart() { write(STDOUT_FILENO, "\x1b[H", 3); }

void clearscr() { 
    write(STDOUT_FILENO, "\x1b[2J", 4); 
    cursorStart();
}

void disableRawMode() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &origin);
    clearscr();
}

void enableRawMode() {
    tcgetattr(STDIN_FILENO, &origin);
    atexit(disableRawMode);

    struct termios raw = origin;

    raw.c_lflag &= ~(ECHO | ICANON);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

void asyncRead(const char* msg) {
    int bufsz = MAX_STR;
    char* initStr = (char*)malloc(sizeof(char)*bufsz);
    
    int len = 0;
    int initPosCursor = strlen(msg) + 2;
    int initColumnCursor = 1;

    enableRawMode();

    while(1) {
        clearscr();
        printf("%s %s\n", msg, initStr);
        printf("Nome: \n");
        printf("Endereço: \n");

        moveCursor(initColumnCursor, initPosCursor++);

        char c;
        read(STDIN_FILENO, &c, 1);

        if(c == 10) { //10 = enter
            printf("Enter pressed\n");
            initStr[len] = '\0';
            return;
        }

        initStr[len++] = c;

        if(len >= bufsz) {
            bufsz += MAX_STR;
            initStr = (char*)realloc(initStr, bufsz);
        }
    }
}

int main() {
    asyncRead("Type something:");
}