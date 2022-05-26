#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int valores[argc - 1];
  int aux;

  for(int i = 0; i < argc; i++)
  {
    valores[i] = atoi(argv[i]);
  }

  for(int i = 1; i < argc; i++)
  {
    for(int y = i; y < argc; y++)
    {
      if(valores[i] > valores[y])
      {
        aux = valores[i];
        valores[i] = valores[y];
        valores[y] = aux;        
      }
    }
  }
  for(int i = 1; i < argc; i++)
  {
    printf("Crescente: %d \n", valores[i]);
  }
  printf("\n");

  for(int i = 1; i < argc; i++)
  {
    for(int y = i; y < argc; y++)
    {
      if(valores[i] < valores[y])
      {
        aux = valores[i];
        valores[i] = valores[y];
        valores[y] = aux;        
      }
    }
  }
  for(int i = 1; i < argc; i++)
  {
   printf("Decrescente: %d \n", valores[i]);
  }
   printf("\n");
   return 0;
}