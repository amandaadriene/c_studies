#include<stdio.h>
#include<stdio_ext.h>

int tamanho(char string[]);
int repeticao_letra(char palavra[], char caracter, int quantidade);

int main ()
{
  char palavra [100];  
  char caracter;
  int repeticao, tamanho_palavra;
      
  printf("Digite uma palavra: \n");
  scanf("%s", palavra);
  __fpurge(stdin);
  
  printf("Digite a letra: \n");
  scanf("%c", &caracter);  

  tamanho_palavra = tamanho(palavra);
  repeticao = repeticao_letra(palavra, caracter,tamanho_palavra);

  printf("Existem %d letras %c na palavra %s \n", repeticao, caracter, palavra);

  return 0;
}

int tamanho(char string[])
{
  int quantidade_caracter = 0;
    for (int i =0; string[i] != '\0'; i++) 
    {
      quantidade_caracter++;
    }
  return quantidade_caracter;
}

int repeticao_letra(char palavra[], char caracter, int quantidade)
{
  int quantidade_repeticao_letra = 0;

  for (int i = 0; i < quantidade; i++)
  {
   if (palavra[i] == caracter)
   {
     quantidade_repeticao_letra++;
   }
  }
  return quantidade_repeticao_letra;
}
