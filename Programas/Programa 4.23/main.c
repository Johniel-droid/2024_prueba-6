#include <stdio.h>

void trueque(int *x, int *y) {
int tem;
tem = *x;
*x = *y;
*y = tem;
}

int suma(int x){
return (x + x);
}

int main(void){
int a = 5, b = 10;

printf("Valores antes del trueque: a = %d, b = %d\n", a, b);
trueque(&a, &b);
printf("Valores despues del trueque: a = %d, b=%d\n", a, b);

int num = 7;
int resultado = suma(num);
printf("La suma de %d consigo mismo es: %d\n", num, resultado);

return 0;
}
