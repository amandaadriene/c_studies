#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int valores[argc - 1];

  for(int i = 0; i < argc - 1; i++)
  {
    valores[i] = atoi(argv[i]);
  }

  for(int i = 0; i < argc - 1; i++)
  {
    for (int x = i + 1; x < argc - 1; x++)
    {
      if(valores[i] == valores[x])
        printf("%d ", valores[i]);
    }
  }
  printf("\n");
  return 0;
}