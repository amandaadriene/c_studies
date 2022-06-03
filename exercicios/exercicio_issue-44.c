#include <stdio.h>

int main()
{
  int quantidade, proximo, inicio = 1, final = 1;

  printf("Digite a quantidade de algarismos: ");
  scanf("%d", &quantidade);

  printf("Sequência: ");

  for (int i = 0; i < quantidade; i++)
  {
    printf("%d ", inicio);
    proximo = inicio + final;
    inicio = final;
    final = proximo;
  }

  printf("...\n");

  return 0;
}