#include <stdio.h>
#include <ctype.h>

void interpreta(char *);  // Prototipo de la funci�n

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);  // gets() es inseguro, pero lo mantengo porque est� en tu ejemplo.
    interpreta(cad);  // Llama a la funci�n interpreta con la cadena ingresada.
}

void interpreta(char *cadena)
{
    int i = 0, j, k;

    while (cadena[i] != '\0')  // Usa 'cadena' en lugar de 'cad'
    {
        if (isalpha(cadena[i]))  // Verifica si es un car�cter alfab�tico
        {
            k = cadena[i - 1] - 48;  // Convierte el car�cter previo a un n�mero (ASCII '0' = 48)

            for (j = 0; j < k; j++)
                putchar(cadena[i]);  // Imprime el car�cter actual 'k' veces
        }
        i++;
    }
}
