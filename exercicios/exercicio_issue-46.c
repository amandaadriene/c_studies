#include <stdio.h>

int main()
{
  float horas, valor, resultado, recebeu_real, recebeu_euro, recebeu_dolar;
  
  int moeda = 1.00;

  printf("Informe quantas horas trabalhou no mês: \n");
  scanf("%f", &horas);

  printf("Informe o valor de sua hora: \n");
  scanf("%f", &valor);

  printf("\n[1] Real\n");
  printf("[2] Dolar\n");
  printf("[3] Euro\n\n");
  printf("Informe qual a moeda que recebeu: \n");
  scanf("%d", &moeda);

  resultado = horas * valor;

  recebeu_real = resultado * 1.00; 

  recebeu_dolar = resultado * 4.80;

  recebeu_euro = resultado * 5.13;

  switch(moeda) 
  {
    case 1:
    printf("Você recebeu: R$ %.2f \n", recebeu_real);          
      break;
    case 2:
    printf("Você recebeu: R$ %.2f \n", recebeu_dolar);    
      break;
    case 3:
    printf("Você recebeu: R$ %.2f \n", recebeu_euro);    
      break;
    default:
      printf("Opção não existe!\n");
      break;
  }
  return 0;
}

