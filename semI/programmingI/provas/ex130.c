#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM_GAB 13

bool assert(int gab[], int choice[]) {
	for(int i = 0; i < TAM_GAB; i++) {
		if(gab[i] != choice[i]) return false;
	}
	return true;
}

void verify_assert(int gab[]) {
	int aux[TAM_GAB];
	printf("Digite os números do concorrente: \n");

	for(int i = 0; i < TAM_GAB; i++)
		scanf("%d", &aux[i]);

	if(assert(gab, aux)) {
		printf("PARABENS, voce ganhou\n");
	}
	else {
		printf("Poxa, voce errou\n");
	}
}

int main() {

	int gab[TAM_GAB];
	printf("Digite o gabarito: \n");

	for(int i = 0; i < TAM_GAB; i++) {
		scanf("%d", &gab[i]);
	}

	char go_on = 'n';

	do {
		verify_assert(gab);

		printf("Deseja continuar [s/n]? ");
		getchar();
		scanf("%c", &go_on);
		go_on = tolower(go_on);

	} while(go_on == 's');
	putchar('\n');
	return 0;
}
