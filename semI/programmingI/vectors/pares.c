#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TAM_VET 6

void print_vet(int *vet, int size) {
	for(int i = 0; i <= size; i++) {
		printf("%d ", vet[i]);
	}
	putchar('\n');
}

int main() {
	srand(time(0));

	int num[TAM_VET];
	int *pares = malloc(0);
	int *impares = malloc(0);

	int cp=0, ci=0;

	for(int i = 0; i < TAM_VET; i++) {
		int r = rand() % 20;

		if(r % 2 == 0) {
			printf("O número %d é par\n", r);
			pares = realloc(pares, sizeof(int) * (cp+1));
			*(pares+cp) = r;
			cp++;
		}
		else {
			printf("O número %d é impar\n", r);
			impares = realloc(impares, sizeof(int) * (ci+1));
			*(impares+ci) = r;
			ci++;
		}

		num[i] = r;
	}

	printf("\n\n\n\n");
	printf("Lista completa: ");
	print_vet(num, TAM_VET-1);

	printf("Lista pares: ");
	print_vet(pares, cp-1);


	printf("Lista impares: ");
	print_vet(impares, ci-1);

	free(pares);
	free(impares);
}
