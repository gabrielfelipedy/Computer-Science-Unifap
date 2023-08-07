#include <stdio.h>
#include <stdlib.h>

int main() {

	int num;
	scanf("%d", &num);

	int *vet = (int*)malloc(sizeof(int)*num);
	int soma = 0;

	for(int i = 0; i < num; i++) {
		scanf("%d", vet+i);
		soma+=*(vet+i);
	}

	double media = (double)soma / num;
	printf("%.2lf\n", media);
	free(vet);
}
