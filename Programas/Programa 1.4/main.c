#include <stdio.h>

/* Superficie del triŠngulo.
El programa, al recibir como datos la base y la altura de un triŠngulo,
calcula la superficie.

BAS, ALT Y SUP: variables de tipo real. */

void main (void)
{
    float BAS, ALT, SUP;
    printf("Ingrese la base y la altura del triŠngulo: ");
    scanf("%f %f", &BAS, &ALT);
    SUP = BAS * ALT / 2;
    printf("\nLA superficie del triŠangulo es: %5.2", SUP);
}
