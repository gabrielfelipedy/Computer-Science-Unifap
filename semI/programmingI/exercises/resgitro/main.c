#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pause(const char* msg) {
    printf(msg);
    printf("\nPress any key to continue... ");
    getchar();
}

void clearStr(char* str) { str[strcspn(str,"\n")] = '\0'; }

void readLine(const char* msg, char** str) {
    printf(msg);
    *str = (char*)malloc(sizeof(char)*MAX_STR);
    fgets(*str, MAX_STR, stdin);
    clearStr(*str);
}

void readInt(const char* msg, int* n) {
    printf(msg);
    scanf("%d", n);
    while(getchar() != '\n');
}

void addPerson(person_t persons[]) {
    person_t new;

    readLine("\nType the bank check of the pupil: ", &(new.bankCheck));
    readLine("Type the book: ", &(new.book));
    readLine("Type the name: ", &(new.name));
    readLine("Type the address: ", &(new.address));
    readLine("Type the ID: ", &(new.id));

    persons[currIndex++] = new;

    pause("\nCADASTRADO COM SUCESSO!\n");
}

void printPerson(person_t persons[]) {
    if(currIndex == 0) {
        pause("\nNo films on the system\n");
        return;
    }

    int index;
    readInt("\nType the index of the person (1 -  starts): ", &index);

    if(index < 1 || index > currIndex) {
        pause("\nInvalid option\n");
        return;
    }

    person_t p = persons[index-1];

    printf("\n\nPERSON INFORMATION\n\n");
    printf("Bank check: %s\n", p.bankCheck);
    printf("Book: %s\n", p.book);
    printf("Name: %s\n", p.name);
    printf("Address: %s\n", p.address);
    printf("ID: %s\n", p.id);

    pause("");
    getchar();
}

void handleOpt(int opt, person_t persons[]) {
    switch (opt)
    {
    case 1:
        addPerson(persons);
        break;
    case 2:
        printPerson(persons);
        break;

    case 3:break;
    
    default:
        pause("\nInvalid option\n");
        break;
    }
}

int main(void)
{
    person_t persons[MAX_PERSONS];

    int opt;
    do {
        const char* msg = "\x1b[H\x1b[2J\x1bH\nDigite a opção: \n\n1 - Adicionar nova pessoa\n2 - Exibir uma pessoa\n3 - Sair\n\n>$ ";

        readInt(msg, &opt);
        handleOpt(opt, persons);
    } while(opt != 3);

    return 0;
}