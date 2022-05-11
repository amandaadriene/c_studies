#include <stdio.h>

int main()
{
  int numeros[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
  for(int i = 0; i < 12; i++)
  {
    switch(numeros[i]) 
    {
      case 0:
        printf("Zero\n");
        break;
      case 1:
        printf("Um\n");
        break;
      case 2:
        printf("Dois\n");
        break;
      case 3:
        printf("Três\n");
        break;
      case 4:
        printf("Quatro\n");
        break;  
      case 5:
        printf("Cinco\n");
        break; 
      case 6:
        printf("Seis\n");
        break; 
      case 7:
        printf("Sete\n");
        break; 
      case 8:
        printf("Oito\n");
        break; 
      case 9:
        printf("Nove\n");
        break;  
      case 10:
        printf("Dez\n");
        break; 
    }    
  }   
  return 0;
}