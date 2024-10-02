#include <stdio.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros numeros naturales con la
ayuda de una funcion, El la solucion de problema se utiliza una variable
global, aunque esto, como veremos mas adelante, no es muy recomendable. */

int cubo(void); /* Prototipo de funcion. */
int I; /* Variable global. */

int main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(); /* Llamala a la funcion cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
    return 0; /*Agregar retorno al final de main */
}

int cubo(void) /* Declaracion de la funcion. */
{
    /* La funcion calcula el cubo de la variable global I. */
    return (I *I * I);
}


