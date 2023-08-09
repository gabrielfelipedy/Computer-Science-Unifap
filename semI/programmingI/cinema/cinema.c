#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define FILL 50 //num de fileiras
#define CHAI 20 //num de cadeiras p/ fileira

#define FREE  0 //assento livre é zero
#define OCPI  1 //assento ocupado é um

int total_faturado = 0;
int qtde_vendidos = 0;

void print_seats(int arr[][CHAI]) {
	int number = 1;

	for(int i = 0; i < FILL; i++) {
		for(int j = 0; j < CHAI; j++) {

			char space[3]; //corrige os espacos entre os numeros
			if(number > 0 && number < 10) sprintf(space, "   ");
			else if(number >= 10 && number < 100) sprintf(space, "  ");
			else sprintf(space, " ");

			if(arr[i][j] == 0) {
				printf("\x1b[32m%d\x1b[m%s", number, space);
			}
			else if(arr[i][j] == 1) {
				printf("\x1b[31m%d\x1b[m%s", number, space);
			}

			number++;
		}
		putchar('\n');
	}
}

void buy_seat(int seat, int seats[][CHAI]) {
	if(seat <= 0 || seat > 1000) {
		printf("Esse assento não existe!\n");
		return;
	}

	int fileira = seat / 20;
	seat -= fileira * 20;

	int coluna = seat;

	if(seats[fileira][coluna-1] == OCPI) {
		printf("O assento já está ocupado\n");
		return;
	}

	int preco = 0;

	//Verifica o preco conforme a fileira
	if(fileira >= 0 && fileira <= 9) preco = 10;
	else if(fileira >= 10 && fileira <= 38) preco = 20;
	else preco = 100;

	char confirm;
	printf("O preco é de R$ %d,00. Deseja confirmar (s/n)? ", preco);
	getchar();
	scanf("%c", &confirm);
	confirm = tolower(confirm);

	if(confirm != 's') {
		printf("Compra cancelada!\n");
		return;
	}

	total_faturado+=preco;
	qtde_vendidos++;
	seats[fileira][coluna-1] = OCPI;
	printf("Compra realizada com sucesso\n");
}

void print_relatory() {
	printf("\n\n**** RELATÓRIO DE VENDAS ****\n\n\n");

	printf("Foram vendidos %d ingressos\n", qtde_vendidos);
	printf("A soma do lucro dos ingressos vendidos foi de R$ %d,00\n", total_faturado);
}

int main() {
	int seats[FILL][CHAI]; //matriz com todos os assentos
	memset(seats, FREE, sizeof(seats)); //preenche a matriz com 0s

	char conti;
	do {

		int seat;
		printf("\nEscolha um assento:\n\n\n");
		print_seats(seats);

		printf("\n\n$> ");
		scanf("%d", &seat);

		buy_seat(seat, seats);

		if(qtde_vendidos == FILL * CHAI) {
			printf("Todos os ingressos foram vendidos\n");
			conti = 'n';
		} else {
			printf("Deseja comprar mais ingressos? ");
			getchar();
			scanf("%c", &conti);
			conti = tolower(conti);
		}

	} while(conti == 's');

	print_relatory();
}
