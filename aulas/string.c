#include <stdio.h>

int tamanho_string(char a[]);

int main(void)
{
  char a[] = "amanda e elton";

  // printf("%s\n\n", a);
  // printf("Tamanho: %i\n\n", tamanho_string(a));

  // for(int i = 0; i < tamanho_string(a); i++) {
  //   printf("%c\n", a[i]);
  // }

  // Substitui a ultima letra da palavara por R
  for(int i = 0; i < tamanho_string(a); i++) {
    char proximo_caractere = a[i + 1];

    if(proximo_caractere == ' ' || proximo_caractere == '\0') {
      a[i] = 'R';
    }
  }

  printf("%s\n", a);

  return 0;
}

int tamanho_string(char a[])
{
  int size = 0;

  while(a[size] != '\0')
  {
    size++;
  }

  return size;
}