#include <stdio.h>

int main()
{ 
  int matriz[3][3], contador = 0;

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("[%d][%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }      
  }

  for(int linha = 0; linha < 3; linha++)
  {
    for(int coluna = 0; coluna < 3; coluna++)
    {
      if(matriz[linha][coluna] > 10)
      {
        contador++;
      }
    }
  }
  printf("A quantidade é: %d\n", contador);
} 