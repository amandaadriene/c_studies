#include <stdio.h>

int main()
{
  int matriz[5][5] = 
  {
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1}
  };

  for(int i = 0; i < 5; i++)
  {
    matriz[i][i] = 0;
    matriz[i][4 - i] = 0;
  }

  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      printf("%d ", matriz[i][j]);
    }

    printf("\n");
  }

  return 0;
}
