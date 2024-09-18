#include <stdio.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
univeritario, escribe "Aprobado" si su promedio es mayor o igual a 6, o
"Reprobado" en caso contrario.
PRO: variable de tipo real. */

int main(void)
{
    float PRO;

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);

    if (PRO >= 6.0)
    printf("\nAprobado\n");

    else
        printf("\nReprobado\n");

    return 0;
}
