#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM 20

void piramide(int altura) {
	if(altura < 2) {
		perror("Altura invalida");
		exit(-1);
	}

	for(int i = 1; i <= altura; i++) {

		for(int l = (altura*2)-(2*i); l >= 0; l--) printf("   ");

		for(int j = 1; j <= i; j++) {
			printf("%5d ", j);

			if(j == i) {
				for(int k = j-1; k >= 1; k--) {
					printf("%5d ", k);
				}
			}
		}

		putchar('\n');
	}
}

int main() {
	
	int alt = 1;
	do {
		if(alt < 0)
			printf("Não pode valores negativos\n");
		else if(alt > MAX_TAM) 
			printf("Valor muito grande\n");

		printf("Digite a altura (entre 1 e 20): ");
		scanf("%d", &alt);
	} while(alt <= 0 || alt > MAX_TAM);
	piramide(alt);
}