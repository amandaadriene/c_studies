#include <stdio.h>
#include <math.h>

int main(void)
{
  double hipotenusa, cateto_oposto, cateto_adjacente, valor_hipotenusa;

  printf("Digite o Cateto oposto: ");
  scanf("%lf", &cateto_oposto);

  printf("Digite o Cateto Adjacente: ");
  scanf("%lf", &cateto_adjacente);

  hipotenusa = (cateto_oposto * cateto_oposto) + (cateto_adjacente * cateto_adjacente);
  
  printf(" O valor da hipotenusa é: %.2f \n", sqrt(hipotenusa));
 
  return 0;
}