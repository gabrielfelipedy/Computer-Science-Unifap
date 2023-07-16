#include <stdio.h>

int main()
{
  int codigo, quantidade;
  float preco;

  printf("Digite o código do produto: ");
  scanf("%d", &codigo);

  switch (codigo) {
    case 1001:
    case 987:
      preco = 5.32;
      break;
    case 1324:
    case 7623:
      preco = 6.45;
      break;
    case 6548:
      preco = 2.37;
      break;
    default:
      preco = -1;
  }

  if(preco == -1) {
    printf("Código inválido\n");
    return -1;
  }

  printf("Digite a quantidade de produtos: ");
  scanf("%d", &quantidade);

  printf("\nPreço total devido: R$ %.2f\n", quantidade * preco);

  return 0;
}
