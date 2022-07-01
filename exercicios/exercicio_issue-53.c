#include <stdio.h>

int verifica_ano_bissexto(int ano);

int main()
{
  int mes, dias = 31, ano;

  printf("Digite o mês [1 - 12]:");
  scanf("%d", &mes);

  printf("Digite o ano: ");
  scanf("%d", &ano);

  switch(mes) 
  {
    case 1:
    break;
    case 2:
    if(verifica_ano_bissexto(ano)) 
    {
      dias-=2;
    }
    else
    {
      dias-=3;
    }   
    case 3:
    break;
    case 4:
      dias--;
    break;
    case 5:
    break;
    case 6:
      dias--;
    break;
    case 7:
    break;
    case 8:
    break;
    case 9:
    dias--;
    break;
    case 10:
    break;
    case 11:
    dias--;
    break;
    case 12:
    break;
    default:
    printf("Opção não existe!");
    break;
  } 

    if(verifica_ano_bissexto(ano)) 
    {
      printf("Esse é um ano bissexto e tem 366 dias.\n");
    }
    else
    {
      printf("Esse não é um ano bissexto e tem 365 dias.\n");
    }
    printf ("O mês %d tem %d dias. \n", mes, dias);

return 0;
}

int verifica_ano_bissexto(int ano)
  {
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
      return 1;
    }
    else 
    {
      return 0;
    }
  }