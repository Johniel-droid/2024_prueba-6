#include <stdio.h>

/* Superficie del tri�ngulo.
El programa, al recibir como datos la base y la altura de un tri�ngulo,
calcula la superficie.

BAS, ALT Y SUP: variables de tipo real. */

void main (void)
{
    float BAS, ALT, SUP;
    printf("Ingrese la base y la altura del tri�ngulo: ");
    scanf("%f %f", &BAS, &ALT);
    SUP = BAS * ALT / 2;
    printf("\nLA superficie del tri�angulo es: %5.2", SUP);
}
