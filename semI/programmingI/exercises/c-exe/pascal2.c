#include <stdio.h>

/*
 * This code works well, but it's not separate into functions
 * this is made on pascal3.c and pascal4.c
 */

int main() {
	int alt;
	printf("Digite a altura do triangulo de pascal: ");
	scanf("%d", &alt);
	int trian[alt][alt];

  /*
   * Fills the matriz with the correct numbers
   */

	for(int i = 0; i < alt; i++) {
		for(int j = 0; j <= i; j++) {
			if(j == 0 || j == i)
				trian[i][j] = 1;
			else {
				trian[i][j] = trian[i-1][j-1] + trian[i-1][j];
			}
		}
	}

  /*
   * Prints the matriz
   */

	for(int i = 0; i < alt; i++) {
		for(int k = (alt-i); k >= 0; k--) putchar(' ');
		for(int j = 0; j <= i; j++) {
			printf("%d ", trian[i][j]);
		}
		putchar('\n');
	}
}
