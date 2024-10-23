#include <stdio.h>
#include <ctype.h>

void interpreta(char *);  // Prototipo de la función

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);  // gets() es inseguro, pero lo mantengo porque está en tu ejemplo.
    interpreta(cad);  // Llama a la función interpreta con la cadena ingresada.
}

void interpreta(char *cadena)
{
    int i = 0, j, k;

    while (cadena[i] != '\0')  // Usa 'cadena' en lugar de 'cad'
    {
        if (isalpha(cadena[i]))  // Verifica si es un carácter alfabético
        {
            k = cadena[i - 1] - 48;  // Convierte el carácter previo a un número (ASCII '0' = 48)

            for (j = 0; j < k; j++)
                putchar(cadena[i]);  // Imprime el carácter actual 'k' veces
        }
        i++;
    }
}
