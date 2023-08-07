#include <stdio.h>

/*
* This function fills the triangle with the correct values
*/

void fill_trian(int alt, int trian[alt][alt]) {
  for(int i = 0; i < alt; i++) {
    for(int j = 0; j <= i; j++) {
      if(j == 0 || j == i) {
        trian[i][j] = 1;
        continue;
      }
      trian[i][j] = trian[i-1][j-1] + trian[i-1][j];
    }
  }
}

/*
* This function prints the matriz
*/

void print_trian(int alt, int trian[alt][alt]) {
 for(int i = 0; i < alt; i++) {
    for(int k = alt-i; k >= 0; k--) putchar(' ');
    for(int j = 0; j <= i; j++) {
      printf("%d ", trian[i][j]);
    }
    putchar('\n');
  }
}

int main() {
  int alt;
  printf("Digite a altura do triângulo de pascal: ");
  scanf("%d", &alt);
  int trian[alt][alt];
  fill_trian(alt, trian);
  print_trian(alt, trian);
 }
