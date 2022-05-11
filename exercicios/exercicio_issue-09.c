#include <stdio.h>

int main()
{ 
  int ano, tm_year,idade;
 
  printf( " Declare o ano que você nasceu: ");
  scanf("%d", &ano);
  idade = 2022 - ano;
  printf("Você tem: %d\n", idade);

  return 0;
}
