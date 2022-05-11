#include <stdio.h>

int main()
{
  int total;

  for(int i = 0; i < 11; i++)
  {
    total += i;   
  }

  printf("A Soma é %d\n", total);
  return 0;
}
