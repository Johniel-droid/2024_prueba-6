#include <stdio.h>

/* Cubo-2.
El programa calcula el cubo de los 10 primeros numeros naturales con la
ayuda de una funcion. */

int cubo(int n);/* Prototipo de funcion. */

int main(void)
{
    int CUB;
    for (int I = 1; I <= 10; I++) // Declarar I dentro del bucle
    {
        CUB = cubo(I);
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
    return 0;
}
int cubo(int n)
{
    return (n * n * n);
}
