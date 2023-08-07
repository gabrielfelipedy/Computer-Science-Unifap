#include <stdio.h>
#include <stdbool.h>

int main() {
	float sum = 0;
	int qtde = 0;
	while(true) {
		int temp;
		printf("Informe a média do aluno: ");
		scanf("%d", &temp);

		if(temp == 0) break;

		sum += temp;
		qtde++;
	}

	float total = sum / qtde;
	printf("A total dos alunos é %.2f\n", total);
}
