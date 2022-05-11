#include <stdio.h>

int main()
{
  char opcao;

  printf("[a] Pizza\n");
  printf("[b] Lanche\n");
  printf("[c] Hot dog\n\n");
  printf("Escolha a opção do cardápio: ");
  scanf("%c", &opcao);

  switch(opcao) {
    case 'a':
      printf("Você escolheu pizza!\n");
      break;
    case 'b':
      printf("Você escolheu lanche!\n");
      break;
    case 'c':
      printf("Você escolheu hot dog!\n");
      break;
    default:
      printf("Opção não existe!\n");
      break;
  }

  return 0;
}
