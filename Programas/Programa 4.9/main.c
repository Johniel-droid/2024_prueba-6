#include <stdio.h>
 /* La funcion suma regresa la suma de los parametros de tipo entero X y Y. */
 int Suma(int X, int Y) {
 return (X + Y);
 }

 /* Esta funcion regresa la resta de los parametros de tipo entero X y Y. */
 int Resta(int X, int Y){
 return (X -Y);
 }

 /* Esta funcion recibe como parametro otra funcion -la direccion- y dependiendo de cual sea esta
 llama a la funcion Suma o Resta. */
 int Control(int (*apf)(int, int), int X, int Y){
 return (*apf)(X, Y);
 }

 int main(void){
 int R1, R2;

 R1 = Control(Suma, 15, 5);

 printf("\nResultado 1: %d", R1);
 printf("\nResultado 2: %d", R2);

 return 0;
 }
