#include <stdio.h>

#define IMC_IDEAL_MAX 24.9
#define IMC_IDEAL_MIN 18.5

float abss(float value);
float calcula_imc(float peso, float altura);
void classifica_imc(float imc);
void mostra_peso_ideal(float imc, float altura, float peso);

int main()
{
  float altura, peso = 0, imc = 0;

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  imc = calcula_imc(peso, altura);
  classifica_imc(imc);
  mostra_peso_ideal(imc, altura, peso);
 
  return 0;
}

float calcula_imc(float peso, float altura)
{
  float imc = 0;

  imc = peso / (altura * altura);
  printf("Seu IMC é: %.2f \n", imc);

  return imc;
}

float abss(float value)
{
  if(value < 0.0)
  {
    return value * -1;
  }
  else
  {
    return value;
  }
}

void classifica_imc(float imc)
{
  if(imc < 18.5) 
  {
    printf("Você está abaixo do peso. \n");
  }
  else if(imc < 25)
  {
    printf("Você está no peso ideal. \n");
  }
  else if(imc < 30)
  {
    printf("Você está com sobrepeso. \n");
  }
  else if(imc < 40)
  {
    printf("Você está obeso. \n");
  }
  else
  {
    printf("Você está com obesidade grave. \n");
  }  
}

void mostra_peso_ideal(float imc, float altura, float peso)
{
  float peso_ideal = 0.0;
  char *perder = "perder";
  char *ganhar = "ganhar";
  char **mensagem;

  if(imc >= IMC_IDEAL_MAX)
  {
    peso_ideal = IMC_IDEAL_MAX * (altura * altura);
    mensagem = &perder;
  }
  else if(imc <= IMC_IDEAL_MIN)
  {
    peso_ideal = IMC_IDEAL_MIN * (altura * altura);
    mensagem = &ganhar;
  }
  else
  {
    return;
  }

  printf("Seu peso ideal é: %.2f Kg \n", peso_ideal);
  printf("Você deve %s %.2f Kg \n", *mensagem, abss(peso - peso_ideal));
}
