#include <stdio.h>

int main() {
	int codigo, qtde;
	float preco, total;

	printf("Digite o código do produto: ");
	scanf("%d", &codigo);

	switch(codigo) {
		case 100:
		case 103:
			preco = 1.10;
			break;
		case 101:
		case 104:
			preco = 1.30;
			break;
		case 102:
			preco = 1.50;
			break;
		case 105:
			preco = 1.00;
			break;
		default:
			preco = -1;
			break;
	}

	if(preco == -1) {
		printf("Invalid code\n");
		return -1;
	}

	printf("Digite a quantidade de produtos: ");
	scanf("%d", &qtde);
	total = qtde * preco;
	printf("O total a ser pago é R$ %.2f\n", total);

	return 0;
}
