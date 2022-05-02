#include <stdio.h>

int main()
{
  int numero, resto ;

  printf("Digite o numero desejado:");
  scanf("%d", &numero);

  resto = numero % 2;

  if(resto == 0)
  {
     printf(" Esse numero é par!\n");
  }
  else
  {
    printf(" Esse numero é impar!\n");
  }

  return 0;
}

