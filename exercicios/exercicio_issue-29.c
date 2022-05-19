#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int valores[10];

  for(int i = 1; i < argc; i++)
  {
    valores[i - 1] = atoi(argv[i]);
  }

  for(int i = 0; i < argc - 1; i++)
  {
    if(valores[i] > 0)
      printf("%d ", valores[i]);
  }

  return 0;
}
