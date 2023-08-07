#include <stdio.h>

/*
* Function calculates the fatorial of a number
*/

int fat(int n) {
	int result = 1;
	for(int i = n; i > 0; i--)
		result*=i;

	return result;
}

/*
* Function calculates a Newton's binomy
*/

int binomy(int n ,int k) {
	return fat(n) / (fat(k) * fat(n-k));
}

/*
* Function which fills and prints the triangle at the same time
*/

void print_tri(int altura) {
	for(int i = 0; i < altura; i++) {

		for(int k = (altura)-(i); k >= 0; k--) printf(" ");

		for(int j = 0; j <= i; j++) {
			printf("%d ", binomy(i, j));
		}
		printf("\n");
	}
}

int main() {
	int altura;
	printf("Digite a altura do triangulo de pascal: ");
	scanf("%d", &altura);
	print_tri(altura);
}
