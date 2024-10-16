#include <stdio.h>
/* Universidad.
El programa, al recibir informacion sobre el numero de alumnos que han ingresaddo
a sus ocho diferentes carreras en los dos semestres lectivos de los ultimos
cinco años, obtiene informacion util para el departamento de escolar. */

const int F = 8, C = 2, P = 5;

void Lectura(int A[][C][P], int FI, int CO, int PR);
void Funcion1 (int A[][C][P], int FI, int CO, int PR);
void Funcion2 (int A[][C][P], int FI, int CO, int PR);
void Funcion3 (int A[][C][P], int FI, int CO, int PR);

int main(void)
{
    int UNI[F][C][P];
    Lectura(UNI, F, C, P);
    Funcion1 (UNI, F, C, P);
    Funcion2 (UNI, F, C, P);
    Funcion3 (UNI, F, C, P);

    return 0;
}

void Lectura(int A[][C][P], int FI, int CO, int PR)
{
    int K, I, J;
    for (K = 0; K < PR; K++)
        for(I = 0; I < FI; I++)
        for(J = 0; J < CO; J++)
    {
        printf("Año: %d\tCarrera: %d\tSemestre: %d ", K + 1, I + 1, J + 1);
        scanf("%d", &A[I][J][K]);
    }
    }

    void Funcion1(int A[][C][P], int FI, int CO, int PR)
    {
        int K, I, J, MAY = 0, AO = -1, SUM;
        for (K = 0; K < PR; K++)
        {
        SUM = 0;
        for(I = 0; I < FI; I++)
            for (J = 0; J < CO; J++)
        SUM += A[I][J][K];

        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }

printf("\n\nAño con mayor ingreso de alumnos: %dd Alumnos: %d", AO + 1, MAY);
}

void Funcion2(int A[][C][P], int FI, int CO, int PR)

{
    int I, J, MAY = 0, CAR = -1, SUM;
    for (I = 0; J < FI; I++)
{
    SUM = 0;
    for (J = 0; J < CO; J++)
        SUM += A[I][J][PR - 1];

    if (SUM > MAY)
    {
        MAY = SUM;
        CAR = I;
    }
}
printf("\n\nCarrera con mayor numero de alumnos: %d Alumnos: %d", CAR + 1, MAY);
}

void Funcion3(int A[][C][P], int FI, int CO, int PR)

{
    int K, J, MAY = 0, AO = -1, SUM;
    for (K = 0; K < PR; K++)
    {
        SUM = 0;
        for (J = 0; J < CO; J++)
        SUM += A[FI - 1][J][K];

    if (SUM > MAY)
    {
        MAY = SUM;
        AO = K;
    }
}
printf("\n\nAño con mayor ingreso de alumnos: %d Alumnos: %d", AO + 1, MAY);
}
