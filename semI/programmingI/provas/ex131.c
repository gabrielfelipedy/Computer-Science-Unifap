#include <stdio.h>
#include <stdlib.h>

#define TAM_M 5

int** sum_matriz(int m1[][TAM_M], int m2[][TAM_M]) {

	int** aux = (int**)malloc(sizeof(int*) * TAM_M);


	for(int i = 0; i < TAM_M; i++) {
		aux[i] = (int*)malloc(sizeof(int) * TAM_M);
	}

	for(int i = 0; i < TAM_M; i++) {
		for(int j = 0; j < TAM_M; j++) {
			aux[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	return aux;
}

int main() {

	int matriz1[TAM_M][TAM_M], matriz2[TAM_M][TAM_M];

	printf("Digite a matriz 1: \n");
	for(int i = 0; i < TAM_M; i++) {
		for(int j = 0; j < TAM_M; j++) {
			scanf("%d", &matriz1[i][j]);
		}
	}

	printf("Digite a matriz 2: \n");
	for(int i = 0; i < TAM_M; i++) {
		for(int j = 0; j < TAM_M; j++) {
			scanf("%d", &matriz2[i][j]);
		}
	}

	int** soma = sum_matriz(matriz1, matriz2);
	printf("Soma das matrizes: \n");
	for(int i = 0; i < TAM_M; i++) {
		for(int j = 0; j < TAM_M; j++) {
			printf("%d ", soma[i][j]);
		}
		putchar('\n');
	}
}
