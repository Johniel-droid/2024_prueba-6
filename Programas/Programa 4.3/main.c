#include <stdio.h>

/* Conflicto de variables con el mismo nombre. */
void f1(void); /* Prototipo de función. */
int K = 5; /* Variable global. */

int main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        int K = 2; /* Variable local. */
        K += K; // K ahora es 4
        printf("\n\nEl valor de la variable local es: %d", K);
        K = K + ::K; /* Uso de ambas variables. */
        printf("\nEl valor de la variable global es: %d", K);
    }

    f1();
    return 0; /* Retorno de la función main. */
}

void f1(void)
{
    // Puedes agregar código aquí si es necesario.
    printf("\nFunción f1 llamada.");
}
