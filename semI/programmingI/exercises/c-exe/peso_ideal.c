#include <stdio.h>

float calcula_peso_ideal(float altura) {
	return (72.7 * altura) - 58;
}

int main() {

	float altura, peso_ideal;
	printf("Informe a sua altura: ");
	scanf("%f", &altura);

	peso_ideal = calcula_peso_ideal(altura);
	printf("O seu peso ideal eh %.2f\n", peso_ideal);
	return 0;
}
