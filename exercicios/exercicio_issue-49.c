#include <stdio.h>

int main()
{
  int valores[15] = { -8, 4, 0, 23, 10, 11, 6, 7, -10, 1, 2, 5, 55, 87, 3};

  int numero, posicao = -1;

  printf("Digite um número inteiro para ser buscado no vetor: \n");
  scanf("%d", &numero);

  for(int i=0; i < 15; i++)
  { 
    if (valores[i] == numero)
    {
      posicao = i;
    }   
  }
  if (posicao > -1) 
  {
    printf("Foi encontrado o numero %d, na posição %d no vetor. \n", numero,posicao);
  }
  else 
  {
    printf("Não encontrado. \n");
  }
  return 0;
}