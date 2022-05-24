#include <stdio.h>

int main()
{
  float preco_morango, preco_abacaxi, quantidade_morango, quantidade_abacaxi, total_morango, total_abacaxi,total;

  preco_morango = 7.50;
  preco_abacaxi = 5.60;

  printf("Deseja comprar quantos kilos de morango? ");
  scanf("%f", &quantidade_morango);

  printf("Deseja comprar quantos kilos de abacaxi? ");
  scanf("%f", &quantidade_abacaxi);

  if( quantidade_morango > 5) 
  {
    total_morango = (preco_morango - 2.20) * quantidade_morango;
  }
  else
  {
    total_morango = preco_morango * quantidade_morango;
  }

  if( quantidade_abacaxi > 5) 
  {
    total_abacaxi = (preco_abacaxi - 1.30) * quantidade_abacaxi;
  }
  else
  {
    total_abacaxi = preco_abacaxi * quantidade_abacaxi;
  }

  if((total_morango + total_abacaxi > 19.00) && (quantidade_abacaxi + quantidade_morango < 5))
  {
    total = (total_morango + total_abacaxi) * 0.92;
  }
  else
  {
    total = total_morango + total_abacaxi;
  }

  printf ("Você irá pagar: %.2f\n", total);
  
  return 0;
}