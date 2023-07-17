#include <stdio.h>

int main() {
	int yr, mn, dy;
	printf("Digite a sua idade [anos/meses/dias]: ");
	scanf("%d/%d/%d", &yr, &mn, &dy);

	int total = dy + (mn * 30) + (yr * 360);
	total*=86400;
	printf("O total de segundos é %d\n", total);

	return 0;
}
