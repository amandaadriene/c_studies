#include <stdio.h>
#include <math.h>

int main()
{
  int numero,potencia;

  scanf("%d",&numero);
  potencia = pow(numero,3);

  printf("%d \n", potencia);

  return 0;
}