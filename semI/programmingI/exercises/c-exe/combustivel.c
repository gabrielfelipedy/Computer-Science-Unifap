#include <stdio.h>

int main() {
	float tempo_gasto, velocidade_media;

	printf("\nInforme o tempo gasto (em horas): ");
	scanf("%f", &tempo_gasto);
	printf("Informe a velocidade media (em km/h): ");
	scanf("%f", &velocidade_media);

	float distancia = tempo_gasto * velocidade_media;
	float litros_usados = distancia / 12.0;

	printf("\n\n====DADOS DA VIAGEM====\n\n");

	printf("Velocidade media: %.2fkm/h\n", velocidade_media);
	printf("Tempo gasto na viagem: %.2fh\n", tempo_gasto);
	printf("Distancia percorrida: %.2fkm\n", distancia);
	printf("Litros gastos: %.2fl\n\n", litros_usados);
}	
