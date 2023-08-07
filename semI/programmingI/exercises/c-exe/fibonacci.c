#include <stdio.h>

int main() {
	int n1=0, n2=1;
	int lim;
	printf("Digite quantos números da sequencia quer exibir: ");
	scanf("%d", &lim);

	for(int i = 0; i < lim; i++) {
		if(i%2 == 0) {
			printf("%d ", n1);
			continue;
		}

		printf("%d ", n2);
		n1+=n2;
		n2+=n1;
	}

	putchar('\n');
	return 0;
}
