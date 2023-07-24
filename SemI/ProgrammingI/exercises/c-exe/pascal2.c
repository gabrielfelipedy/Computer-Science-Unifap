#include <stdio.h>

int main() {
	int alt;
	printf("Digite a altura do triangulo de pascal: ");
	scanf("%d", &alt);
	int trian[alt][alt];

	for(int i = 0; i < alt; i++) {
		for(int j = 0; j <= i; j++) {
			if(j == 0 || j == i)
				trian[i][j] = 1;
			else {
				trian[i][j] = trian[i-1][j-1] + trian[i-1][j];
			}
		}
	}

	for(int i = 0; i < alt; i++) {
		for(int k = (alt-i); k >= 0; k--) putchar(' ');
		for(int j = 0; j <= i; j++) {
			printf("%d ", trian[i][j]);
		}
		putchar('\n');
	}

}
