#include <stdio.h>

int main()
{
  float saldo = 2000, valor;

  printf("Digite o valor da transação: ");
  scanf("%f", &valor);

  if(valor <= 0)
  {
    printf("Valor deve ser positivo!");

    return 0;
  }

  if(saldo > 0 && valor < saldo)
  {
    printf("Transação efetuada com sucesso!");
  }
  else if(saldo < 0)
  {
    printf("Seu saldo está negativo: %.2f", saldo);
  }
  else
  {
    printf("Você não tem saldo!");
  }

  return 0;
}
