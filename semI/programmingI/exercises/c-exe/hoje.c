#include <stdio.h>

int main() {

	int idade, idade_dias;
	printf("Informe sua idade: ");
	scanf("%d", &idade);

	idade_dias = idade * 365;
	printf("A idade informada foi %d anos ou %d dias\n", idade, idade_dias);

	return 0;
}
