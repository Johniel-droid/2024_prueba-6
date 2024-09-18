#include <stdio.h>

/* Superficie del triángulo.
El programa, al recibir como datos la base y la altura de un triángulo,
calcula la superficie.

BAS, ALT Y SUP: variables de tipo real. */

void main (void)
{
    float BAS, ALT, SUP;
    printf("Ingrese la base y la altura del triángulo: ");
    scanf("%f %f", &BAS, &ALT);
    SUP = BAS * ALT / 2;
    printf("\nLA superficie del triáangulo es: %5.2", SUP);
}
