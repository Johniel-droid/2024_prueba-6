#include <stdio.h>
/* Busqueda secuencial en arreglos desordenados. */

const int MAX = 100;

void Lectura(int *, int);
int Busca(int *, int, int);

int main(void)
{
    int RES, ELE, TAM, VEC[MAX];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while ( TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Busca(VEC, TAM, ELE);

    if(RES)

        printf("\nEl elemento se encuentra en la posicion %d\n", RES);
    else
        printf("\nEl elementono se encuentra en el arreglo\n");

    return 0;
}

void Lectura(int A[], int T)

{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int K)

{
    int I = 0;
    while (I < T)
    {
        if (A[I] == K)
            return I + 1 ;
        I++;
    }
    return 0;
}
