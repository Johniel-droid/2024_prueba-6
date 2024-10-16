#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ELE[5] = {0};
    int I, VOT;

    printf("Ingrese el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);

    while (VOT){
        if((VOT > 0) && (VOT < 6 )){
            ELE[VOT -1]++;
        } else {
        printf("\nEl voto ingresado es incorrecto. \n");
        }
        printf("Ingrese el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\n\nResultados de la Eleccion\n");
    for (I = 0; I < 5; I++){
        printf("\nCandidato %d; %d", I + 1, ELE[I]);
    }

    return 0;
}
