#include <stdio.h>
#include <stdlib.h>

/* Aplicacion de operadores. */

int main(void)
{
    int i = 5, j = 4, k, l, m;
    k = !i * 3 + --j * 2 -3;
    printf("\nEl valor de k es: %d", k);

    l = ! (!i || 1 && 0) && 1;
    printf("\nEl valor de 1 es: %d", 1);

    m= (k = (!(12 > 10)), j = (10 || 0) && k, (k || j));
    printf("\nEl valor de m es: %d", m);

    return 0;
}
