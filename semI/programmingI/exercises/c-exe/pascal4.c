#include <stdio.h>
#include <stdlib.h>

/*
 * This exercise has the same goal as execise 3
 * But here, we're going to use pointer notation instead of array notation
 */

/*
 *This function dinamically allocs a pointer of pointers like a matriz
 */

int** alocar(int alt) {

  int ** matriz = (int**)malloc(alt * sizeof(int *));

  if(matriz == NULL) {
    printf("Error, malloc function at line 6\n");
    return NULL;
  }

  //we also need to aloc each line of matriz
  for(int i = 0; i < alt; i++) {
    *(matriz+i) = (int*)malloc(alt * sizeof(int));

    if(*(matriz+i) == NULL) {
      printf("Error, malloc function at line 14\n");
      return NULL;
    }
  }

  return matriz;
}

/*
 * Free the memory alocated
 */

void liberar(int** matriz, int alt) {
  for(int i = 0; i < alt; i++)
    free(*(matriz+i));

  free(matriz);
}

/*
 * Fills the triangle with the correct values
 */

void fill_trian(int ** trian, int alt) {
  for(int i = 0; i < alt; i++) {
    for(int j = 0; j <= i; j++) {
      if(j == 0 || j == i) {
        *(*(trian+i)+j) = 1;
        continue;
      }
       *(*(trian+i)+j)  =  *(*(trian+(i-1))+(j-1)) +  *(*(trian+(i-1))+j);
    }
  }
}

/*
 * Prints the triangle
 */

void print_trian(int ** trian, int alt) {
 for(int i = 0; i < alt; i++) {
    for(int k = alt-i; k >= 0; k--) putchar(' ');
    for(int j = 0; j <= i; j++) {
      printf("%d ", *(*(trian+i)+j));
    }
    putchar('\n');
  }
}

int main() {
  int alt;
  printf("Digite a altura do triângulo de pascal: ");
  scanf("%d", &alt);
  int ** trian = alocar(alt);
  fill_trian(trian, alt);
  print_trian(trian, alt);
 }
