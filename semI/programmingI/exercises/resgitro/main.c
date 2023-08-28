#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearStr(char* str) { str[strcspn(str,"\n")] = '\0'; }

void readLine(char** str) {
    *str = (char*)malloc(sizeof(char)*MAX_STR);
    fgets(*str, MAX_STR, stdin);
    clearStr(*str);
}

void fill(person_t* p) {
    printf("Type the bank check of the pupil: ");
    readLine(&(p->bankCheck));

    printf("Type the book: ");
    readLine(&(p->book));

    printf("Type the name: ");
    readLine(&(p->name));

    printf("Type the address: ");
    readLine(&(p->address));

    printf("Type the ID: ");
    readLine(&(p->id));
}

void printPerson(person_t p) {
    printf("\n\nPERSON INFORMATION\n\n");
    printf("Bank check: %s\n", p.bankCheck);
    printf("Book: %s\n", p.book);
    printf("Name: %s\n", p.name);
    printf("Address: %s\n", p.address);
    printf("ID: %s\n", p.id);
}

int main(void)
{
    person_t new;
    fill(&new);
    printPerson(new);

    return 0;
}
