#include <stdio.h>
#include <stdbool.h>

#define MAX_TAM 50

void print_trian(int opt, int length) {

	putchar('\n');

	for(int i = 0; i < length; i++) {
		for(int j = 0; j <= i; j++) {

			bool master = (j == 0 || j == i || i == length - 1);

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

		printf("Digite a altura do triangulo: ");
		scanf("%d", &length);
	}
	while(length <= 0 || length > MAX_TAM);

	while(1) {
		printf("\nEscolha uma opção:\n1) Triangulo preenchido\n2) Triangulo vazado\n\nEscolha: ");
		scanf("%d", &opt);

		if(opt != 1 && opt != 2) printf("\nValor inválido\n");
		else break;
	}

	print_trian(opt, length);
}