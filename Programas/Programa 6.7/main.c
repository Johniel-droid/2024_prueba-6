#include <stdio.h>
/* Fábrica de lácteos.
El programa, al recibir como datos las ventas mensuales de diferentes
productos, obtiene información estadística valiosa para la empresa. */

void Lectura1(int A[15][12]);
void Lectura2(float A[], int N);
void Funcion1(int A[15][12], int F, int C, float V1[], float V2[]); /* Prototipos de funciones */
void Funcion2(float A[], int C);
void Funcion3(float A[], int C);

int main(void)
{
    int FAB[15][12] = {0}; /* Inicialización en 0 del arreglo FAB. */
    float COS[15], VEN[15];

    Lectura1(FAB);
    Lectura2(COS, 15);
    Funcion1(FAB, 15, 12, COS, VEN);
    Funcion2(VEN, 15);
    Funcion3(VEN, 15);

    return 0;
}

void Lectural(int A[][12])

{
    int MES, PRO, CAN;
    printf("\nIngrese mes, tipo de producto y cantidad vendida: ");
    scanf("%d %d %d", &MES, &PRO, &CAN);

    while (MES != -1 && PRO != -1 && CAN != -1)
    {
        A[MES - 1][PRO - 1] += CAN;
        printf("\nIngrese mes, tipo de producto y cantidad vendida: ");
        scanf("%d %d %d", &MES, &PRO, &CAN);
    }
}

void Lectura2(float A[], int N)
{
    int I;
    for (I = 0; I < N; I++)
    {
        printf("Ingrese costo del producto %d: ", I + 1);
        scanf("%f", &A[I]);
    }
}

void Funcion1(int A[][12], int F, int C, float V1[], float V2[])

{
    int I, J, SUM;
    printf("\n");
    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J];
        V2[I] = V1[I] * SUM;
        printf("\nTotal de ventas del producto %d: %8.2f", I + 1, V2[I]);
    }
}

void Funcion2(float A[], int C)

{
    int I;
    float SUM = 0.0;
    for (I = 0; I < C; I++)
        SUM += A[I];

    printf("\n\nTotal de ventas de la fabrica: %.2f", SUM);
}

void Funcion3(float A[], int C)

{
    int I, TPR = 0;
    float MAX_VEN = A[0];

    for (I = 1; I < C; I++)
        if (MAX_VEN < A[I])
    {
        TPR = I;
        MAX_VEN = A[I];
    }

    printf("\n\nTipo de producto mas vendido: %d \t Ventas: %.2f", TPR + 1, MAX_VEN);
}
