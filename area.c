#include <stdio.h>
int main () {
  float altura, base, areatriangulo, arearetangulo, areaquadrado, raio, areacirculo, pi=3.14;
  
  printf("Declare a base do triangulo: ");
  scanf("%f", &base);
  printf("Declare a altura do triangulo: ");
  scanf("%f", &altura);
  areatriangulo = (base*altura)/2;
  printf( "Area do triangulo é igual a: %.2f. \n", areatriangulo);

  printf("Declare a base do retangulo: ");
  scanf("%f", &base);
  printf("Declare a altura do retangulo: ");
  scanf("%f", &altura);
  arearetangulo = base*altura;
  printf( "Area do triangulo é igual a: %.2f. \n", arearetangulo);


  printf("Declare a base do quadrado: ");
  scanf("%f", &base);
  printf("Declare a altura do quadrado: ");
  scanf("%f", &altura);
  areaquadrado = base*altura;
  printf( "Area do quadrado é igual a: %.2f. \n", areaquadrado);


  printf("Declare o raio do  circulo: ");
  scanf("%f", &raio);  
  areacirculo = pi*raio*raio;
  printf( "Area do quadrado é igual a: %.2f. \n", areacirculo);


  return 0;

}



//Calcular a área do círculo.