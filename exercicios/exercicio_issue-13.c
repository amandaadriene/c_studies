#include <stdio.h>
#include <string.h>

int tamanho_palavra(char palavra[]);
void inverte(char palavra[], char inversa[], int tamanho);

int main()
{  
  char palavra[100];

  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  int tamanho = tamanho_palavra(palavra);
  int contador = 0;
  char inversa[tamanho];

  inverte(palavra, inversa, tamanho);

  for(int i = 0; i < tamanho; i++) 
  {
    if(palavra[i] == inversa[i]) 
    {
      contador++;
    }
  }

  if(contador == tamanho) 
  {
    printf("A palavra %s é palindromo!", palavra);
  } 
  else 
  {
    printf("A palavra %s não é palindromo!", palavra);
  }

  return 0;
}

int tamanho_palavra(char palavra[])
{
  int size = 0;

  while(palavra[size] != '\0')
  {
    size++;
  }
  
  return size;
}

void inverte(char palavra[], char inversa[], int tamanho)
{
  int j = tamanho - 1;

  for(int i = 0; i < tamanho; i++) 
  {
    inversa[j] = palavra[i];
    j--;
  }
}
