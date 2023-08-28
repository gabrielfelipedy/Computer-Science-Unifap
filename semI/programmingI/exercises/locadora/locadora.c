#include "locadora.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int readInt(void) {
	int n;
	scanf("%d", &n);
	while(getchar() != '\n');

	return n;
}

float readFloat(void) {
	float n;
	scanf("%f", &n);
	while(getchar() != '\n');

	return n;
}

char* readLine(void) {
	int bufsize = STR_BUF_SZ;
        char* buff = (char*)malloc(sizeof(char)*bufsize);

        if(!buff) {
                fprintf(stderr, "malloc error\n");
                return NULL;
        }

        int pos = 0;
        while(1) {
                int c = getchar();

                if(c == EOF || c == '\n') {
                        buff[pos] = '\0';
			return buff;
                }

                buff[pos++] = c;

                if(pos >= bufsize) {
                        bufsize += STR_BUF_SZ;
                        buff = realloc(buff, bufsize);
                        if(!buff) {
                                fprintf(stderr, "malloc error\n");
                                return NULL;
                        }
                }
        }
}

void addFilm(void) {
	film_t new;

	printf("\nType the title of the film: ");
	new.title = readLine();

	printf("Type the name of the director: ");
	new.director = readLine();

	printf("Type the year of release: ");
	new.yearOfRelease = readInt();

	printf("Type the rating: ");
	new.rating = readFloat();

	printf("Type the quantity of copys: ");
	new.qtde = readInt();

	films[totalFilms++] = new;
	
	printf("\nAdded sucessfully\n\n");
}

void showFilms(void) {
	if(!totalFilms) {
		fprintf(stderr, "\nNo films on storage!\n\n");
		return;
	}

	printf("\n**** LIST OF FILMS ****\n\n");
	
	for(int i = 0; i < totalFilms; i++) {
		printf("%d - %s\n", i+1, films[i].title);
	}
	printf("\n***********************\n\n");
}

void explainFilm(void) {
	if(!totalFilms) {
		fprintf(stderr, "\nNo films on storage\n\n");
		return;
	}

	showFilms();
	printf("Type the index of the film: \n");
	printf("> ");

	int index = readInt();
	index--;

	if(index < 0 || index >= totalFilms) {
		fprintf(stderr, "\nNo film in this index\n\n");
	}
	else {
		printf("\n**** FILM DATA ****\n\n");

		printf("Title: %s\n", films[index].title);
		printf("Director: %s\n", films[index].director);
		printf("Year of release: %d\n", films[index].yearOfRelease);
		printf("Rating: %.1f\n", films[index].rating);
		printf("Quantity avaliable: %d\n\n", films[index].qtde);
	}
}

void printHeader(void) {
	printf("\x1b[2J"); //clear the screen
	printf("\x1b[H"); //pos the cursor to the left-top corner

	printf("******************\n");
	printf("**** LOCADORA ****\n");
	printf("******************\n\n");
}

int chooseOpt(void) {
	printf("1 - Add film\n");
	printf("2 - Show all films\n");
	printf("3 - Show a film's data\n");
	printf("4 - Quit\n\n");
	printf("> ");
	
	return readInt();
}

void handle(int opt) {
	switch(opt) {
		case 1:
			addFilm();
			break;
		case 2:
			showFilms();
			break;
		case 3:
			explainFilm();
			break;
		case 4:
			break;
		default:
			printf("Invalid option!\n");
			break;
	}
}

int main(void) {
	int opt;
	printHeader();

	do {
		opt = chooseOpt();
		handle(opt);	

	} while(opt != 4);

	return 0;
}
