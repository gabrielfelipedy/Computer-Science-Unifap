#include <stdio.h>
#include <stdlib.h>

//defines the node of the list
typedef struct corretor {
  char nome[20];
  float val_venda;
  float comissao;
  struct corretor* next;

} Corretor;

float calcula_comissao(Corretor* c) {
  if(c->val_venda > 50000) {
    return c->val_venda * 0.12;
  }
  if(c->val_venda <= 50000 && c->val_venda >= 30000) {
    return c->val_venda * 0.095;
  }

  return c->comissao = c->val_venda * 0.07;
}

Corretor* create_node() {
  Corretor* new = (Corretor*)malloc(sizeof(Corretor));
  printf("\nDigite o nome do corretor: ");
  scanf("%s", new->nome);
  printf("Digite o valor do salário: R$ ");
  scanf("%f", &(new->val_venda));
  new->comissao = calcula_comissao(new);
  new->next = NULL;
  return new;
}

void add(Corretor** head) {

  Corretor *new = create_node();
  if(new == NULL) {
    printf("fail to create node");
    return;
  }
  
  if(*head == NULL) {
    *head = new;
    return;
  }

  Corretor* aux = *head;
  while(aux->next != NULL) aux = aux->next;
  
  aux->next = new;
}

void printl(Corretor* head) {

  if(head == NULL) {
    printf("Empty list");
    return;
  }

  Corretor *aux = head;
  printf("\n\n===INFORMATION===\n");
  while(aux != NULL) {
    printf("\nNome: %s\nSalário: R$ %.2f\nComissao: R$ %.2f\n", aux->nome, aux->val_venda, aux->comissao);
    aux = aux->next;
  }
}

float calcula_total_vendas(Corretor* head) {
  float total = 0;
  if(head == NULL) {
    printf("Empty list");
    return -1;
  }

  Corretor *aux = head;
  while(aux != NULL) {
    total+=aux->val_venda;
    aux = aux->next;
  }
  return total;
}

int main() {
  Corretor* head = NULL;

  for (int i = 0; i < 3; i++) {
    add(&head);
  }
  printl(head);

  float total_de_vendas = calcula_total_vendas(head);
  printf("\nO total das vendas da empresa foi de R$ %.2f\n\n", total_de_vendas);
  return 0;
}
