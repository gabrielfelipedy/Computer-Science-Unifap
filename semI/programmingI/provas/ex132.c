#include <stdio.h>
#include <stdlib.h>

#define TAM_M 5

int** transport(int m[][TAM_M]) {
	int ** aux = (int**)malloc(sizeof(int*) * TAM_M);
	for(int i = 0; i < TAM_M; i++)
		aux[i] = (int*)malloc(sizeof(int) * TAM_M);

	for(int i = 0; i < TAM_M; i++) {
		for(int j = 0; j < TAM_M; j++) {
			aux[i][j] = m[j][i];
		}
	}

	return aux;
}

int main() {

	int matriz[TAM_M][TAM_M];
	printf("Escreva a matriz: \n");

	for(int i = 0; i < TAM_M; i++) {
		for(int j = 0; j < TAM_M; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	int** transp = transport(matriz);

	printf("Matriz transporta: \n");
	for(int i = 0; i < TAM_M; i++) {
		for(int j = 0; j < TAM_M; j++) {
			printf("%d ", transp[i][j]);
		}
		putchar('\n');
	}
}


