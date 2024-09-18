#include <stdio.h>

/* Funcion matemática.
El programa obtiene el resultado de una función.
OP y T: variables de tipo entero.
Res: variable de tipo real. */

int main(void)
{
    int OP, T;
    float RES;

    printf("Ingrese la opción del cálculo y el valor valor entero: ");
    scanf("%d %d", &OP, &T);

    switch(OP)
    {
    case 1:
        RES = T / 5.0; // cambiado a 5.0 para obtener un resultado en punto flotante
        break;
    case 2:
        RES = pow(T, T);
        break;
    case 3:
    case 4:
        RES = 6 * T / 2;
        break;
    default:
        RES = 1;
        break;
    }
    printf("\nResultado: %7.2f\n", RES);

    return 0;
}
