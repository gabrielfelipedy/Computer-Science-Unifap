#include <stdio.h>

#define MAX_TAM 50

void losango(int larg) {

	int cons;

	if(larg % 2 == 0)
		cons = 2;	
	else
		cons = 1;

	for(int i = cons; i < larg; i+=2) {

		for(int k = (larg-i)/2; k >= 1; k--) putchar(' ');

		for(int j = 1; j <= i; j++) {
			printf("x");
		}
		putchar('\n');
	}

	for(int i = larg; i >= cons; i-=2) {

		for(int k = (larg-i)/2; k >= 1; k--) putchar(' ');

		for(int j = 1; j <= i; j++) {
			printf("x");
		}
		putchar('\n');
	}
}

void main() {
	int larg = 1;
	do {
		if(larg < 0)
			printf("Não pode valores negativos\n");
		else if(larg > MAX_TAM) 
			printf("Valor muito grande\n");

		printf("Digite a largura central do losango (entre 1 e 20): ");
		scanf("%d", &larg);

	} while(larg <= 0 || larg > MAX_TAM);

	losango(larg);
}