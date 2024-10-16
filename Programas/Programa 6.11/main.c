#include <stdio.h>
/* Casa de bolsa.
El programa, al recibir como datos los precios mensuales de las acciones de sus
cinco fondos de inversion, ademas del precio de las acciones al 31 dde diciembre
del 2003, genera informacion estadistica importante para la empresa. */

void LecturaM(float [][12], int, int);
void LecturaV(float *, int);
void F1(float [][12], int, int, float*, float *);
void F2(float [][12], int, int);
void F3(float *, int);

int main(void){
float FON[5][12], PRE[5], REN[5];

LecturaM(FON, 5, 12);
LecturaV(PRE, 5);
F1(FON, 5, 12, PRE, REN);
F2(FON, 5, 12);
F3(REN, 5);

return 0;

}

void LecturaM(float A[][12], int F, int C){

int I, J;
for(I = 0; I < F; I++){
for (J = 0; J < C; I++){
    printf("Precio fondo %d al 31/12/2003: ", I + 1, J + 1);
    scanf("%f", &A[I][J]);
}
}
}
void LecturaV(float A[], int T){

int I;
printf("\n");
for (I = 0; I < T; I++){
   printf("Precio fondo %d al 31/12/2003: ", I +1);
scanf("%f", &A[I]);
}
}

void F1(float A[][12], int F, int C, float B[], float V[]){

int I;
printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS");
for (I = 0; I < F; I++){
    V[I] = (A[I][C - 1] - B[I]) / B[I] * 100;
    printf("\nFondo %d: %.2f", I + 1, V[I]);
}
}

void F2(float A[][12], int F, int C){

int I, J;
float SUM, PRO;
printf("\n\nPROMEDIO ANUALIZADO DE LAS ACCIONES DE LOS FONDOS");
for (I = 0; I < F; I++){
    SUM = 0;
    for (J = 0; J < C; J++){
        SUM +=A[I][J];
    }
    PRO = SUM / C;
    printf("\nFondo %d: %.2f", I + 1, PRO);
}
}

void F3(float A[],int F){

float ME = A[0], PE = A[0];
int M = 0, P = 0,I;
for (I = 1; I < F; I++){
    if (A[I] > ME){
        ME = A[I];
        M = I;
    }
    if (A[I] < PE){
        PE = A[I];
        P = I;
    }
}
printf("\n\nMEJOR Y PEOR FONDO DE INVERSION");
printf("\nMejor fondo: %d\tRendimiento: %6.2f", M + 1, ME);
printf("\nPeor fondo: %d\tRendimiento: %6.2f", P + 1,PE);
}
