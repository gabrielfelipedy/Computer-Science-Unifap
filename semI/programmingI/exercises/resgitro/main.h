#ifndef _H_MAIN
#define _H_MAIN

#define MAX_STR 100
#define MAX_PERSONS 50

int currIndex = 0;

typedef char* string;

typedef struct {
    string bankCheck;
    string book;
    string name;
    string address;
    string id;
} person_t;

void readLine(const char* msg, char** str);
void readInt(const char* msg, int* n);
void clearStr(char* str);
void addPerson(person_t persons[]);
void handleOpt(int opt, person_t persons[]);
void printPerson(person_t persons[]);
void pause(const char* msg);

#endif