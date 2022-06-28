#include <stdio.h>

void celsius_fahrenheit();
void fahrenheit_celsius();
void celsius_kelvin();
void kelvin_celsius();
void fahrenheit_kelvin();
void kelvin_fahrenheit();

int main()
{ 
  int opcao;

  do
  {
    printf("\n|-----------------------|\n");
    printf("| Escolha a temperatura |\n");
    printf("|-----------------------|\n");
    printf("| [1] °C -> F           |\n");
    printf("| [2] F -> °C           |\n");
    printf("| [3] °C -> K           |\n");
    printf("| [4] K -> °C           |\n");
    printf("| [5] F -> K            |\n");
    printf("| [6] K -> F            |\n");
    printf("| [0] SAIR              |\n");
    printf("|-----------------------|\n");
    printf("\n Escolha uma opção: \n");
    scanf("%d", &opcao); 

    switch(opcao) 
    {
      case 1:
        celsius_fahrenheit();  
        break;
      case 2:
        fahrenheit_celsius();
        break;
      case 3:
        celsius_kelvin();
        break;
      case 4:
        kelvin_celsius();
        break;
      case 5:
        fahrenheit_kelvin();
        break;
      case 6:
        kelvin_fahrenheit();
        break;
      case 0:
        printf("SAIR\n");
        break;
      default:
        printf("Opção não existe!\n");
        break;
    }
  } while(opcao != 0);
  
  return 0;
}

void celsius_fahrenheit()
{
  float celsius, fahrenheit;

  printf("Digite a temperatura em °C:\n");
  scanf("%f", &celsius);

  fahrenheit = celsius * 1.8 + 32;

  printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);
}

void fahrenheit_celsius()
{
  float celsius, fahrenheit;

  printf("Digite a temperatura em °F:\n");
  scanf("%f", &fahrenheit);

  celsius= (fahrenheit - 32) * 5/9;
 
  printf("A temperatura em Celsius é: %.2f\n", celsius);
}

void celsius_kelvin()
{
  float celsius, kelvin;

  printf("Digite a temperatura em °C:\n");
  scanf("%f", &celsius);

  kelvin = celsius + 273.15;
 
  printf("A temperatura em Kelvin é: %.2f\n", kelvin);
}

void kelvin_celsius()
{
  float kelvin, celsius;

  printf("Digite a temperatura em °K:\n");
  scanf("%f", &kelvin);

  celsius = kelvin - 273.15;
 
  printf("A temperatura em Celsius é: %.2f\n", celsius);
}

void fahrenheit_kelvin()
{
  float fahrenheit, kelvin;

  printf("Digite a temperatura em °F:\n");
  scanf("%f", &fahrenheit);

  kelvin = (fahrenheit - 32) * 5/9 + 273.15; 
 
  printf("A temperatura em Kelvin é: %.2f\n", kelvin);
}

void kelvin_fahrenheit()
{
  float fahrenheit, kelvin;

  printf("Digite a temperatura em °k:\n");
  scanf("%f", &kelvin);

  fahrenheit = (kelvin - 273.15) * 9/5 + 32;
 
  printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);
}