#include <stdio.h>

int main()
{
  int quantidade_compra;

  float valor_total;

  printf("Quantos produtos deseja comprar? \n");
  scanf("%d", &quantidade_compra);

  float precos[quantidade_compra];
  int quantidades[quantidade_compra];
  float descontos[quantidade_compra];

  for(int i = 0; i < quantidade_compra; i++)
  {
    printf("Preencha os dados do produto %d\n", i + 1);

    printf("Digite o preço: \n");
    scanf("%f", &precos[i]);

    printf("Digite a quantidade: \n");
    scanf("%d", &quantidades[i]);

    printf("Digite o desconto: \n");
    scanf("%f", &descontos[i]);
  }
  
  for(int i = 0; i < quantidade_compra; i++)
  {
    valor_total += (quantidades[i] * precos[i]) - descontos[i];
  }

  printf("O total é : %.2f\n", valor_total);
    
  return 0;
}