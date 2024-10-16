#include <stdio.h>
/* Alumnos.
El programa, al recibir un arreglo bidimensional que contiene informacion
sobre calificaciones de alunos en cuatro materias ddiferentes, obtiene
resultados estadisiticos. */
const int MAX = 50;
const int EXA = 4;

void Lectura(float [MAX][EXA], int);
void Funcion1(float [MAX][EXA], int);
void Funcion2(float [MAX][EXA], int);

int main(void)
{
    int NAL;
    float ALU[MAX][EXA];

    do
    {
        printf("Ingrese el numero de alumnos del grupo: ");
        scanf("%d", &NAL);
    } while (NAL > MAX || NAL < 1);

    Lectura(ALU, NAL);
    Funcion1 (ALU, NAL);
    Funcion2 (ALU, NAL);

    return 0;
}

void Lectura(float A[][EXA], int N)

{
    int I, J;
    for(I = 0; I < N; I++)
        for (J = 0; J < EXA; J++)
    {
        printf("Ingrese la calificacion %d ddedl alumno %d: ", J + 1, I + 1);
    scanf("%f", &A[I][J]);
    }
}

void Funcion1(float A[][EXA], int T)

{
    int I, J;
    float SUM, PRO;
    for (I = 0; I < T; I++)
    {
        SUM = 0;
        for (J = 0; J < EXA; J++)
            SUM += A[I][J];
        PRO = SUM / EXA;
        printf("\nEl promedio del alumno %d es: %5.2f", I + 1, PRO);
    }
}

void Funcion2(float A[][EXA], int T)

{
    int I, J, MAY = 0;
    float SUM, PRO, MPRO = 0;

    printf("\n");
    for (J = 0; J < EXA; J++)
    {
        SUM = 0;
        for (I = 0; I < T; I++)
            SUM += A[I][J];
        PRO = SUM / T;

        if (PRO > MPRO)
            {
                MPRO = PRO;
                MAY = J;
            }
            printf("\nEl promedio del examen %d es: %5.2f", J + 1, PRO);
    }
    printf("\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2", MAY + 1, MPRO);
}


