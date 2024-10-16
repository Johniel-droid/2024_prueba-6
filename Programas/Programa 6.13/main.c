#include <stdio.h>
/* Empresa textil.
El programa, al recibir un arreglo tridimensional que contiene informacion
sobre las ventas mensuales de tres departamentos en los ultimo ocho a�os,
genera informacion estadistica valiosa para la empresa. */
const int MES = 12;
const int DEP = 3;
const int A�O = 8;

void Lectura(float [MES][DEP][A�O], int, int , int);
void Funcion1(float [MES][DEP][A�O], int, int , int);
void Funcion2(float [MES][DEP][A�O], int, int , int);
void Funcion3(float [MES][DEP][A�O], int, int , int);

int main(void){
float PRO[MES][DEP][A�O];
Lectura(PRO, MES , DEP, A�O);
Funcion1(PRO, MES , DEP, 2);
Funcion2(PRO, MES , DEP, A�O);
Funcion3(PRO, MES , DEP, A�O);
}

void Lectura(float A[][DEP][A�O], int F, int C, int P){

int K, I, J;
for (K = 0; K < P; K++)
for (I = 0; I < F; I++)
for (J = 0; J < C; J++){
    printf("A�o: %d\tMes: %d\tDepartamento: %d ", K + 1, I + 1, J + 1);
    scanf("%f", &A[I][J][K]);
}
}

void Funcional(float A[][DEP][A�O], int F, int C, int P){

int I, J;
float SUM = 0.0;
for (I =0; I < F; I++)
    for(J = 0; J < C; J++
    SUM += A[I][J][P - 1];
printf("\n\nVentas totales ded la empresa en el segundo a�o; %.2f", SUM);
}

void Funcion2(float A[][DEP][A�O], int F, int C, int P){

    int I, J;
    float SUM1 = 0, SUM2 = 0, SUM3 =0;
    for (I = 0; I < F; I++){
        for(J = 0; J < C; J++){
            SUM1 += (J == 0)? A[I][J][P - 1] : 0;
            SUM2 += (J == 1)? A[I][J][P - 1] : 0;
            SUM3 += (J == 2)? A[I][J][P - 1] : 0;
        }
    }

    if (SUM1 >= SUM2 && SUM1 >= SUM3){
        printf("\n\nDepartamento con mayores ventas en el ultimo a�o: Hilos");
        printf(" Ventas: %.2f", SUM1);
    } else if (SUM2 >= SUM1 && SUM2 >= SUM3){
    printf("\n\nDepartamento con mayores ventas en el ultimo a�o: Lanas");
        printf(" Ventas: %.2f", SUM2);
    }else {
    printf("\n\nDepartamento con mayores ventas en el ultimo a�o: Licra");
    printf(" Ventas: %.2f", SUM3);
    }
    }

    void Funciona3(float A[][DEP][A�o], int F, int C, int P){

    int K, I, J, DE, ME, AN;
    float VEN = -1.0;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
    if(A[I][J][K] > VEN){
        VEN = A[I][J][K];
        DE = J;
        ME = I;
        AN = K;
    }
    printf("\n\nDepartamento: %d\tMes: %d", DE + 1, ME + 1, AN + 1);
    printf("\tVentas: %.2f", VEN);
        }
