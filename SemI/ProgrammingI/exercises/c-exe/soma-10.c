#include <stdio.h>

void fill_array(int * numeros, int length) {
	int * aux = numeros;
	for(int i = 0; i < length; i++) {
		printf("Digite um número: ");
		scanf("%d", aux++);
	}
}

void sum_array(int * array, int length, int * result) {
	int * aux = array;
	for(int i = 0; i < length; i++) {
		*result += *aux++;
	}
}

int main() {
	int soma = 0;
	int numeros[10];
	int length = sizeof(numeros) / sizeof(numeros[0]);

	fill_array(numeros, length);
	sum_array(numeros, length, &soma);
	printf("A soma dos números é %d\n", soma);
}
