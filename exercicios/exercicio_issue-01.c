#include <stdio.h>

int ler_idade(void);
void verifica_aposentadoria(int idade);

int main(void) {
  int valor_idade;

  verifica_aposentadoria(valor_idade);

  return 0;
}

int ler_idade(void) {
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  return idade;
}

void verifica_aposentadoria(int idade) {
  if(idade > 65)
  {
    printf(" Você pode se aposentar!\n");
  }
  else 
  {
    printf("Você não pode aposentar!\n");
  }
}