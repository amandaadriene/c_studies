#include <stdio.h>

// Comentario simples

/*
 * Comentário 
 * de
 * multilinhas
 */

int main()
{
  char nome[20];
  char sexo;
  int idade, ano;
  float peso;

  printf("Informe seu nome: ");
  fgets(nome, 20, stdin);
  printf("Informe seu sexo: ");
  scanf("%c", &sexo);
  printf("Informe sua idade: ");
  scanf("%d", &idade);
  printf("Digite o ano do seu nascimento: ");
  scanf("%d", &ano);
  printf("Informe seu peso: ");
  scanf("%f", &peso);
  printf("\n");

  printf("Meu nome é: %s", nome);
  printf("A minha idade é: %d\n", idade);
  printf("Nasci no ano: %d\n", ano);
  printf("Meu sexo é: %c\n", sexo);
  printf("Meu peso é: %.2f\n", peso);

  return 0;
}

/*
* Desafio:
* Escreva um programa que calcula a idade do usuário. O usuário deverá informar o ano de nascimento e o computador retornará a sua idade.
* OBS: O próprio programa deverá pegar o ano atual do sistema.
* EX:
* Informe seu ano de nascimento: 1994
* Você tem 27 anos
*/
