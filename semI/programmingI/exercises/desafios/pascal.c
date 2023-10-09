#include <stdio.h>

/*
* This function fills the triangle with the correct values
*/

void fill_trian(int alt, int trian[][alt]) {
  for(int i = 0; i < alt; i++) {
    for(int j = 0; j <= i; j++) {

      if(j == 0 || j == i)
        trian[i][j] = 1;
      else
        trian[i][j] = trian[i-1][j-1] + trian[i-1][j];
    }
  }
}

/*
* This function prints the matriz
*/

void print_trian(int alt, int trian[][alt]) {
 for(int i = 0; i < alt; i++) {

    for(int k = alt-i; k >= 0; k--) printf("   ");

    for(int j = 0; j <= i; j++)
      printf("%5d ", trian[i][j]);
  
    putchar('\n');
  }
}

int main() {
  int alt = 1;
  do {
    if(alt < 0)
			printf("Não pode valores negativos\n");
		else if(alt > 20) 
			printf("Valor muito grande\n");

    printf("Digite a altura do triângulo de pascal (entre 1 e 20): ");
    scanf("%d", &alt);
  } while(alt > 20 || alt <= 0);

  int trian[alt][alt];

  fill_trian(alt, trian);
  print_trian(alt, trian);
 }