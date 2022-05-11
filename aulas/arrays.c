#include <stdio.h>

int main()
{
  char nome[7];

  nome[0] = 'a';
  nome[1] = 'm';
  nome[2] = 'a';
  nome[3] = 'n';
  nome[4] = 'd';
  nome[5] = 'a';
  nome[6] = '\0';

  for(int i = 0; i < 9; i++) {
    printf("Letra: %d\n", nome[i]);
  }

  printf("%s\n", nome);

  return 0;
}
