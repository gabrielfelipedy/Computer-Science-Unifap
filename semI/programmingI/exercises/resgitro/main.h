#ifndef _H_MAIN
#define _H_MAIN

#define MAX_STR 100

typedef char* string;

typedef struct {
    string bankCheck;
    string book;
    string name;
    string address;
    string id;
} person_t;

void readLine(char** str);
void clearStr(char* str);
void fill(person_t* p);

#endif