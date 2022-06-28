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
  for(int i = 0; i < 4; i++)
  {
    i++;
    for(int j = 0; j < 5; j++)
    {
      matriz[i][j] = 9;
    }    
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