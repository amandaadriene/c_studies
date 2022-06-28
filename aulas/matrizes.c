#include <stdio.h>

void soma_cubo(int cubo[3][3][3]);
void soma_area(int matriz[3][4]);

//colocou cubo pois é um array dentro de outro array, dentro de outro array, por isso que ficou separado. 
//pois a area é somente uma matriz, array dentro de um array.

int main()
{
  int area[3][4] = {
    {5, 6, 1, 3},
    {3, 4, 9, 0},
    {2, 3, 1, 5}
  };

  int cubo[3][3][3] = {
    {
      {0, 0, 0},
      {1, 4, 6},
      {5, 6, 7}
    },
    {
      {2, 7, 9},
      {9, 9, 0},
      {10, 45, 77}
    },
    {
      {34, 55, 66},
      {66, 88, 99},
      {4, 5, 6}
    }
  };

  // cubo[2][0][0] == 34

  soma_cubo(cubo);
  soma_area(area);

  return 0;
}

void soma_cubo(int cubo[3][3][3]) {
  int soma = 0;

  printf("Somando Cubo\n\n");

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
        soma += cubo[i][j][k];
      }

      printf("Soma na [%d][%d]: %d\n", i, j, soma);
      soma = 0;
    }
  }
}

void soma_area(int matriz[3][4]) {
  int soma = 0;

  printf("Somando Area\n\n");

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      soma += matriz[i][j];
    }

    printf("Soma na [%d]: %d\n", i, soma);
    soma = 0;
  }
}
