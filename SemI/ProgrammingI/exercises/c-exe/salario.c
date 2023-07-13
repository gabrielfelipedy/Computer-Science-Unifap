#include <stdio.h>
#include <ctype.h>

float calcula_aumento(float salario, char categoria) {

	categoria = toupper(categoria);

	if(categoria == 'A' ||		
	   categoria == 'C' ||
	   categoria == 'F' ||
	   categoria == 'H') {
		return salario * 1.1;
	}

	if(categoria == 'B' || 
	   categoria == 'D' || 
	   categoria == 'E' || 
	   categoria == 'I' || 
	   categoria == 'J' || 
           categoria == 'T') {
		return salario * 0.15;
	}

	if(categoria == 'K' || 
	   categoria == 'R') {
		return salario * 0.25;
	}


	if(categoria == 'L' || 
	   categoria == 'M' || 
	   categoria == 'N' || 
	   categoria == 'O' || 
	   categoria == 'P' || 
           categoria == 'Q' ||
	   categoria == 'S') {
		return salario * 0.35;
	}


	if(categoria == 'U' || 
	   categoria == 'V' || 
	   categoria == 'X' || 
	   categoria == 'Y' || 
	   categoria == 'W' || 
           categoria == 'Z') {
		return salario * 0.5;
	}


	return salario * 2;
}

void print_info(char* nome, float salario, char categoria) {
	printf("\n\nNome: %s\n", nome);
	printf("Salario: %.2f\n", salario);
	printf("Salario com aumento: %.2f\n\n", calcula_aumento(salario, categoria));	
}

int main() {
	
	char categoria;
	char nome[20];
	float salario;
	int aumento;

	printf("Digite o nome do funcionário: ");
	scanf("%s", nome);


	printf("Digite a categoria do funcionário: ");
	scanf(" %c", &categoria);

	printf("Digite o salario do funcionário: ");
	scanf("%f", &salario);

	print_info(nome, salario, categoria);
}
