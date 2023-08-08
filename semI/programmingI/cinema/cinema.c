#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define FILL 50
#define CHAI 20

#define FREE  0
#define OCPI  1

int total_faturado = 0;
int qtde_vendidos = 0;

void print_seats(int arr[][CHAI]) {

	int number = 1;

	for(int i = 0; i < FILL; i++) {
		for(int j = 0; j < CHAI; j++) {
			if(arr[i][j] == 0) {
				printf("\x1b[32m%d\x1b[m ", number);
			}
			else if(arr[i][j] == 1) {
				printf("\x1b[31m%d\x1b[m ", number);
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

	if(fileira >= 0 && fileira <= 6) preco = 10;
	else if(fileira > 6 && fileira <= 14) preco = 20;
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
	seats[fileira][coluna-1] = 1;
	printf("Compra realizada com sucesso\n");
}

void print_relatory() {

	printf("\n\n**** RELATÓRIO DE VENDAS ****\n\n\n");

	printf("Foram vendidos %d ingressos\n", qtde_vendidos);
	printf("A soma do lucro dos ingressos vendidos foi de R$ %d,00\n", total_faturado);
}

int main() {

	int seats[FILL][CHAI];
	memset(seats, FREE, sizeof(seats));

	char conti;
	do {

		int seat;
		printf("\nEscolha um assento (0 = livre, 1 = ocupado):\n\n\n");
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
