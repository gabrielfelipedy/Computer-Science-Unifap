#include <stdio.h>
#include <stdbool.h>

void print_square(int opt, int length) {

	putchar('\n');

	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++) {
			bool cond1 = (i == 0 || i == length - 1);
			bool cond2 = (j == 0 || j == length - 1);
			bool cond3 = (j == i);
			bool master = (cond1 || 
				     ((opt == 1) || 
				      (opt == 2 && cond2) || 
				      (opt == 3 && (cond3 || cond2))));

			if(opt == 1)
				printf("* ");

			else {
				printf("%c ", (master) ? '*' : ' ');
			}
		}
		putchar('\n');
	}	
}

int main() {
	int opt, length;
	printf("Type the length of the square: ");
	scanf("%d", &length);
	printf("Choose an option:\n1) Fiiled square\n2) Empty square\n3) Square with diagonal\n\nWrite: ");
	scanf("%d", &opt);
	print_square(opt, length);
}
