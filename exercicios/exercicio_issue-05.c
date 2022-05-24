#include <stdio.h>

int main()
{
  int fatorial = 1, numero, i = 0;

  printf ("Digite um número:");
  scanf("%d", &numero);

  for(i = numero; i > 1; i--)
  {
  fatorial = fatorial * i;
  }

  printf("Fatorial de %d é: %d \n",numero, fatorial);

  return 0;
}