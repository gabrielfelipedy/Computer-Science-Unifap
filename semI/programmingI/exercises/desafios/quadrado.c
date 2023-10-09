#include <stdio.h>
#include <stdbool.h>

#define MAX_TAM 50

void print_square(int opt, int length) {

	putchar('\n');

	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++) {
			bool cond1 = (i == 0 || i == length - 1);
			bool cond2 = (j == 0 || j == length - 1);
			bool cond3 = (j == i);
			bool master = (cond1 || 
				     ((opt == 1) || 
				      (opt == 2 && cond2) || 
				      (opt == 3 && (cond3 || cond2))));

			if(opt == 1)
				printf("* ");

			else {
				printf("%c ", (master) ? '*' : ' ');
			}
		}
		putchar('\n');
	}	
}

int main() {
	int opt=1, length=1;

	do {
		if(length < 0)
			printf("Não pode valores negativos\n");
		else if(length > MAX_TAM) 
			printf("Valor muito grande\n");

		printf("Digite a tamanho do lado do quadrado: ");
		scanf("%d", &length);
	}
	while(length <= 0 || length > MAX_TAM);

	while(1) {
		printf("\nEscolha uma opção:\n1) Quadrado preenchido\n2) Quadrado vazado\n\nEscolha: ");
		scanf("%d", &opt);

		if(opt != 1 && opt != 2) printf("\nValor inválido\n");
		else break;
	}

	print_square(opt, length);
}