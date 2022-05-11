#include <stdio.h>

void menu(void);
void qualquercoisa(int numero);
int ler_idade(void);

int main(void) {
  int valor_idade;

  menu();
  qualquercoisa(45);
  valor_idade = ler_idade();
  printf("idade: %d\n", valor_idade);

  return 0;
}

void qualquercoisa(int numero) {
  printf("Variavel passada no argumento: %d\n\n", numero);
  printf("|----Menu---|\n");
  printf("| [1] Soma  |\n");
  printf("| [2] Multi |\n");
  printf("| [3] Div   |\n");
  printf("| [4] Sair  |\n");
}

void menu(void) {
  printf("Função do menu\n");
}

int ler_idade(void) {
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  return idade;
}

// Função que possui retorno é um função mesmo
// Função que não possui retorno é procedimento
