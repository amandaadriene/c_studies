#include <stdio.h>
int main () {
  float altura, base, areatriangulo, arearetangulo;

  
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
  printf( "Area do triangulo é igual a: %f\n", arearetangulo);

  return 0;

  

}



//Calcular a área de um retângulo, quadrado, triângulo e o círculo.