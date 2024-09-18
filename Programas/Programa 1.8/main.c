#include <stdio.h>
#include <stdlib.h>

/* Volumen y área del cilindro
El programa, al recibir como datos el radio y la altura de un cilindro,
calcula su área y su volumen.

RAD, ALT, VOL y ARE: variables de tipo real. */

int main(void)
{
    float RAD, ALT, VOL, ARE;
    printf("Ingrese el radio y la altura del cilindro: ");
    scanf("%f %f", &RAD, &ALT);

    ARE = 2 * M_PI * RAD (RAD + ALT);
    VOL = M_PI * RAD * RAD * ALT;
    printf("\nEl volumen es: %6.2f \t El área es: %6.2f", VOL, ARE);
    return 0;
}
