#include <stdio.h>
#include <stdio_ext.h>

int main()
{ 

  // a b c d s
  //char opcao = 's';
  // for(int i = 0; i <= 10; i++)
  // {
  //   printf("FOR: %d\n", i);
  // }

  // while(opcao != 's')
  // {
  //   printf("Opção escolhida: %c\n", opcao);
  //   printf("Nova opção: ");
  //   scanf("%c", &opcao);
  //   __fpurge(stdin);
  // }

  // do {
  //   printf("Opção escolhida: %c\n", opcao);
  //   printf("Nova opção: ");
  //   scanf("%c", &opcao);
  //   __fpurge(stdin);
  // } while(opcao != 's');

  int i = 0;

  // while(i <= 10) {
  //   printf("%d\n", i);
  //   i++;
  // }

  do {
    printf("%d\n", i);
    i++;
  } while(i <= 10);

  return 0;
}
