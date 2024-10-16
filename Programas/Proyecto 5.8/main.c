#include <stdio.h>
/* Primos.
El programa almacena en un arreglo unidimensional los pirmeros 100 numeros
primos. */

const int TAM = 100;

void Imprime(int *, int);
void Primo(int, int *);

int main(void)
{
int P[TAM];
int FLA, J = 0, PRI = 2;

while (J < TAM)
{
    FLA = 1;
    Primo(PRI, &FLA);
    if (FLA)
    {
        P[J] = PRI;
        J++;
    }
    PRI++;
}

Imprime(P, TAM);
return 0;
}

void Primo(int A, int *B)

{
    int DI;
    if(A < 2){
        *B = 0;
        return;
    }
    if (A == 2){
        return;
    }
    if (A % 2 == 0){
        *B = 0;
        return;
    }

    for (DI = 3; DI * DI <= A; DI += 2)
    {
        if ((A % DI) == 0)
        {
            *B = 0;
            return;
        }
    }
}

void Imprime(int Primos[], int T)

{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}
