#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main() {
	srand(time(0));
	int num[5];

	int maior = INT_MIN;

	printf("Lista gerada: ");
	for(int i = 0; i < 5; i++) {
		int r = rand() % 100;

		if(r > maior)
			maior = r;

		num[i] = r;
		printf("%d ", r);
	}

	printf("\nO maior número da lista eh %d\n", maior);
}
