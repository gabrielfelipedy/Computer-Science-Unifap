#include <ctype.h>
#include <string.h>
#include "stype.h"

int sisdigit(char* s) {
  for(int i = 0; i < strlen(s); i++) {
    if(!isdigit(s[i])) return 0;
  }

  return 1;
}

int siscntrl(char* s) {
  for(int i = 0; i < strlen(s); i++) {
    if(!iscntrl(s[i])) return 0;
  }

  return 1;
}

int sisprint(char* s) {
  for(int i = 0; i < strlen(s); i++) {
    if(!isprint(s[i])) return 0;
  }
  return 1;
}


