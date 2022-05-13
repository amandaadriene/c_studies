#include<stdio.h>

int tamanho_string(char a[]);

int main()
{
  char a[] = "e chega de disputar essa rua com a monica, eu poderei comprar ruas, bairros inteiros";
  char frase[tamanho_string(a)];
  int j = 0;

  for(int i = 0; i < tamanho_string(a); i++) 
  {
    if(a[i] == 'r' && a[i + 1] != ' ')
    {
      frase[j] = 'l';
      if(a[i + 1] == 'r')
        i++;
    } else {
      frase[j] = a[i];
    }
    
    j++;
  }
  frase[j] = '\0';

  printf("%s\n", frase);

  return 0;
}

int tamanho_string(char a[])
{
  int contador = 0;

  while(a[contador] != '\0')
  {
    contador++;
  }

  return contador;
}

