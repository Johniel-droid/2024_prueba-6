#include <stdio.h>
#include <stdlib.h>

/* Aplicacion de operadores. */

int main(void) //Definicion de la funcion principal
{
    int i = 5, j = 4, k, l, m; //Declaracion de variables enteras

    //Evaluacion de expresiones con operadores logicos y aritmeticos
    k = !i * 3 + --j * 2 -3;
    printf("\nEl valor de k es: %d", k);

    //Evaluacion de expresiones booleanas
    l = ! (!i || 1 && 0) && 1;
    printf("\nEl valor de 1 es: %d", 1);

    //Uso de la coa para evaluar expresiones en secuencia
    m= (k = (!(12 > 10)), j = (10 || 0) && k, (k || j));
    printf("\nEl valor de m es: %d", m); //Imprimir el valor de m

    return 0; // Finalizar el programa
}
