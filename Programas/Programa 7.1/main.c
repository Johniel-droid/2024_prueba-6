#include <stdio.h>

/*Funciones para el manejo de caracteres de la biblioteca stdio.h */

void main(void)
{
    char p1, p2, p3 = '$';
    /*Declaracion de las variables tipo caracter p1 p2 y p3. Obserca que a p3 se le
    asigna el simbolo $. */

    printf("\nIngrese un caracter: ");
    p1 = getchar();
    putchar(p1);

    printf("\n");
    fflush(stdin);

    printf("\n caracter p3 es: ");
    putchar(p3);
    printf("\n");
    printf("\nIngrese otro caracter: ");
    fflush(stdin);
    scanf("%c", &p2);
    }
