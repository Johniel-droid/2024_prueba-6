#include <stdio.h>
#include <string.h>

char *inverso(char *);

void main(void)
{
    char fra[50], aux[50];
    printf("\nINgrese la linea ed texto: ");
    gets(fra);
    strcpy(aux, inverso(fra));

    printf("\nEscribe la linea de texto en forma inversa: ");
}

char * inverso(char *cadena)

{
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena);
    j = lon-1;
    while (i < ((lon - 1) / 2))
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return (cadena);
}
