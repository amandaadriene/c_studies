#include <stdio.h>
int main()
{
  int numero[10] = { -8, 4, 0, 23, 10, 11, 6, 7, -10, 15};
  int i, maior = -999999, menor;

    for(i=0; i < 10; i++) 
    {
     if (numero[i] > maior)
     {
       maior = numero[i];
     }
   }
   for(i=0; i < 10; i++) 
   {
     if (numero[i] < menor)
     {
       menor = numero[i];
     }
   }
    printf(" O menor numero é: %d\n\n", menor);
    printf(" O maior numero é: %d\n\n", maior);
     
  return 0;
}

