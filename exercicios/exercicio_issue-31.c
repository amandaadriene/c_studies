#include <stdio.h>

int conta_numeros_positivos(int array[10]);
int conta_numeros_negativos(int array[10]);
void imprime_array(int array[], int tamanho, char label[]);

int main()
{
  int vetor[10] = {-8, -4, 0, 23, 10, 11, -6, 7, -10, 15};
  int index_positivo = 0;
  int index_negativo = 0;

  int positivo[conta_numeros_positivos(vetor)];
  int negativo[conta_numeros_negativos(vetor)];

  for(int i = 0; i < 10; i++)
  {
    if (vetor[i] >= 0)
    {
      positivo[index_positivo] = vetor[i];
      index_positivo++;
    }
    else 
    {
      negativo[index_negativo] = vetor[i];
      index_negativo++;
    }
  }

  imprime_array(positivo, conta_numeros_positivos(vetor), "Positivo");
  imprime_array(negativo, conta_numeros_negativos(vetor), "Negativo");
  
  return 0;
}

int conta_numeros_positivos(int array[10])
{
  int contador = 0;

  for(int i = 0; i < 10; i++)
  {
    if(array[i] >= 0)
      contador++;
  }

  return contador;
}

int conta_numeros_negativos(int array[10])
{
  int contador = 0;

  for(int i = 0; i < 10; i++)
  {
    if(array[i] < 0)
      contador++;
  }

  return contador;
}

void imprime_array(int array[], int tamanho, char label[])
{
  printf("%s: ", label);

  for(int i = 0; i < tamanho; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
}
