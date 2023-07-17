#include <stdio.h>

int main() {

	int n;
	float a = 0;

	printf("Type the value of n: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		a += (float)(n-i) / (i+1);
		//printf("%d/%d  r: %f", (n-i), (i+1), a);
	}

	printf("Result: %.2f\n", a);
}
