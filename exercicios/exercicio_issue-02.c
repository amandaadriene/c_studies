#include <stdio.h>

int ler_idade(void);
void verifica_maior_idade (int idade);

int main(void) {
  int valor_idade;
  
  valor_idade = ler_idade();
  verifica_maior_idade(valor_idade);

  return 0;
}

int ler_idade (void) {
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  return idade;
}

void verifica_maior_idade (int idade) {
  if(idade >= 18)
  {
    printf("Você é maior de idade!\n");
  }
  else
  {
    printf("Você é menor de idade!\n");
  }
} 


