#include <stdio.h>

int main()
{
  int idade;

  printf("Digite sua idade:");
  scanf("%d", &idade);

  if(idade >= 65)
  {
    printf("Você pode aposentar!\n");
  }
  else 
  {
    printf("Você não pode aposentar!\n");
  }
  
  return 0;
}
