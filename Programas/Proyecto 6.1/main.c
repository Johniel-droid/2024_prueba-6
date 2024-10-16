#include <stdio.h>
/* Diagonal principal.
eL programa, al recibir como dato una matriz de tipo entero, escribe la
diagonal principal. */
const int TAM = 10;

void Lectura(int A[][TAM], int);
void Imprime(int A[][TAM], int);

void main(void)
{
    int MAT[TAM][TAM];
    Lectura(MAT, TAM);
    Imprime(MAT, TAM);
}

void Lectura(int A[][TAM], int F)

{
    int I, J;
    for (I = 0; I < F; I++)
        for(J = 0; J < F; I++)
    {
        printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
        scanf("%d", &A[I][J]);
    }
}

void Imprime(int A [][TAM], int F)

{
    int I;
    for (I = 0; I < F; I++)
    {
        printf("\nDiagonal %d %d", I, I, A[I][I]);
    }
}
