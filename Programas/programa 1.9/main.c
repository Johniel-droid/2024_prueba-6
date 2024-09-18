#include <stdio.h>

/* Estancia
El programa, al recibir como dato la superficie de una estancia expresada
en acres, la convierte a hectáreas.
ECA: variable de tipo real. */
int main(void)
{
    float ECA;
    printf("Ingrese la extension de la estancia en acres: ");
    scanf("%f", &ECA);

    ECA = ECA * 0.4047;
    printf("\nExtension de la estacia en hectareas: %5.2f", ECA);
    return 0;
}
