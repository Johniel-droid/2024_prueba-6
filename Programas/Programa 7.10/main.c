#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char c, cad[10];
  int i = 0;
  float sum = 0.0;
  printf("\nDesea ingresar una cadedna de caracteres (S/N)? ");
  c = getchar();
  while (c == 'S')
  {
      printf("\nIngrese la cadena ded caracteres: ");
      fflush(stdin);
      gets(cad);
      i++,
      sum += atof(cad);
      printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
      c = getchar();
  }
  printf("\nSuma: %.2f", sum);
  printf("\nPromedio: %.2f", sum / i);
  }
