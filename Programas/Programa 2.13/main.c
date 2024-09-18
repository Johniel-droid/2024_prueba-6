#include <stdio.h>
#include <stdlib.h>

/* Funcion.
El programa, al recibir como dato un valor entero, calcula el resultado de
una funcion.
y: variable de tipo entero.
x: variable de tipo real. */

int main(void){
int y;
float x;

printf("Ingrese un valor entero; ");
 if (scanf("%d", &y) != 1) {
printf("Error al leer el valor, Asegurese de ingresar un numero entero. \n");
return 1;
 }

 x = pow(y, 2) + 2 * y + 1;

 printf(" El resultado de la funcion es: %7.2f\n", x);

 return 0;
}
