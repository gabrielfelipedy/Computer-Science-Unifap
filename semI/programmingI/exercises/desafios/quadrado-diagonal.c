#include <stdio.h>
#include <stdbool.h>

#define MAX_TAM 50

void print_square(int length) {

	putchar('\n');

	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++) {

			bool cond1 = (i == 0 || i == length - 1);
			bool cond2 = (j == 0 || j == length - 1);
			
      bool cond3 = (i == j);

			bool master = cond1 || cond2 || cond3;

			printf("%c ", (master) ? '*' : ' ');
			
		}
		putchar('\n');
	}	
}

int main() {
	int length=1;

	do {
		if(length < 0)
			printf("Não pode valores negativos\n");
		else if(length > MAX_TAM) 
			printf("Valor muito grande\n");

		printf("Digite o lado do quadrado: ");
		scanf("%d", &length);
	}
	while(length <= 0 || length > MAX_TAM);

	print_square(length);
}