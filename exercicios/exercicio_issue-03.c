#include<stdio.h>

int main()
{ 
char aumento;
float salario, aumento10, aumento20, aumento30;

  printf("Qual o seu salário? ");
  scanf("%f", &salario);
  
  printf("[a] Aumento de  10%% \n");
  printf("[b] Aumento de  20%% \n");
  printf("[c] Aumento de  30%% \n");
  printf("Escolha a opção do plano: ");
  scanf("%c", &aumento);

  switch (aumento) {
    case 'a':
      aumento10 = (salario*0.10) + salario; 
      printf("Seu novo salário é: %.2f\n", aumento10);
      break;

    case 'b':
      aumento20 = (salario*0.20) + salario; 
      printf("Seu novo salário é: %.2f\n", aumento20);
      break;

    case 'c':
      aumento30 = (salario*0.30) + salario; 
      printf("Seu novo salário é: %.2f\n", aumento30);
      break;

    default:
        printf("Opção indisponivel!\n");
        break;
  }

  return 0;
}
