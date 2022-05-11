#include <stdio.h>
#include <stdio_ext.h>

int main ()
{
  int opcao = -1;
  char sair;

  do 
  {
    printf("[1] Frango a passarinho\n");
    printf("[2] Pizza\n");
    printf("[3] Temaki\n");
    printf("[4] Arroz doce\n");
    printf("[0] Sair\n\n");   
    printf("Escolha a opção do cardápio: ");
    scanf("%d", &opcao);
    __fpurge(stdin);

    switch(opcao) {
      case 1:
        printf("Frango a passarinho:R$ 14.00\n\n");
        break;
      case 2:
        printf("Pizza: R$ 35.00\n\n");
        break;
      case 3:
        printf("Temaki: R$ 18.00\n\n");
        break;
      case 4:
        printf("Arroz doce: R$ 5.00\n\n");
        break;
        case 0:
        break;
      default:
        printf("Opção invalida!\n\n");
        break;
    }  
    if(opcao >= 1 && opcao <= 4)
    {
      printf("Deseja escolher outra opção [S/N]: \n\n");
      scanf("%c", &sair);
      __fpurge(stdin);

      if(sair != 'S' && sair != 's')
      {
        break;
      }
    }
    opcao = -1;
  } while(opcao != 0);
      
  return 0;
}