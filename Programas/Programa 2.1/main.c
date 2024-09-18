#include <stdio.h>
#include <stdlib.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe "aprobado" si su promedio es mayor o igual a 6.
PR: variable de tipo real/ */

int main(void)
{
    float PRO;

    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);

    if (PRO >= 6)
        printf("\nAprobado\n");
    else
        printf("\nNo Aprobado\n");

    return 0;
}
