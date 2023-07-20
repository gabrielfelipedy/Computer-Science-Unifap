#include <stdio.h>

void losango(int larg) {

	int cons;

	if(larg % 2 == 0)
		cons = 2;	
	else
		cons = 1;

	for(int i = cons; i < larg; i+=2) {

		for(int k = (larg-i)/2; k >= 1; k--) putchar(' ');

		for(int j = 1; j <= i; j++) {
			printf("x");
		}
		putchar('\n');
	}

	for(int i = larg; i >= cons; i-=2) {

		for(int k = (larg-i)/2; k >= 1; k--) putchar(' ');

		for(int j = 1; j <= i; j++) {
			printf("x");
		}
		putchar('\n');
	}
}

int main() {
	int larg;
	printf("Digite a largura central do losango: ");
	scanf("%d", &larg);
	losango(larg);
}
