#include <stdio.h>
#include <stdlib.h>

void piramide(int altura) {
	if(altura < 2) {
		perror("Altura invalida");
		exit(-1);
	}

	for(int i = 1; i <= altura; i++) {

		for(int l = (altura*2)-(2*i); l >= 0; l--) putchar(' ');

		for(int j = 1; j <= i; j++) {
			printf("%d ", j);

			if(j == i) {
				for(int k = j-1; k >= 1; k--) {
					printf("%d ", k);
				}
			}
		}

		putchar('\n');
	}
}

int main() {
	
	int alt;
	printf("Digite a altura: ");
	scanf("%d", &alt);
	piramide(alt);
}
