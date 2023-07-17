#include <stdio.h>

int main() {
	float nota1, nota2;
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);

	float media = (nota1 + nota2) / 2;
	if(media >= 7) {
		printf("Aproved with %.2f\n", media);
	}

	else {
		printf("Reproved! with %.2f\n", media);
	}

	return 0;
}	
