#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);

	int vet[num];
	int soma = 0;

	for(int i = 0; i < num; i++) {
		scanf("%d", &vet[i]);
		soma+=vet[i];
	}

	double media = (double)soma / num;
	printf("%.2lf\n", media);
}
