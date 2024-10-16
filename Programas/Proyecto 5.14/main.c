#include <stdio.h>
#include <math.h>

/*Estadistico.
El programa, al recibir como dato un arreglo uniddimensional de enteros
que contienecalificaciones, calcula la media, la varianza, la
 desviacion estandar y la moda. */

 const int MAX = 100;

 void Lectura(int *, int);
 float Media(int *, int);
 float Varianza(int *, int, float);
 float Desviacion(float);
 void Frecuencia(int *, int, int *);
 int Moda(int *, int);

 int main(void)
 {
     int TAM, MOD, ALU[MAX], FRE[11] = {0};
     float MED, VAR, DES;

     do
     {
         printf("Ingrese el tamaño del arreglo: ");
         scanf("%d", &TAM);
     } while (TAM > MAX || TAM < 1);

     Lectura(ALU, TAM);
     MED = Media(ALU, TAM);
     VAR = Varianza(ALU, TAM, MED);
     DES = Desviacion(VAR);
     Frecuencia(ALU, TAM, FRE);
     MOD = Moda(FRE, 11);

     printf("\nMedia: %.2f", MED);
     printf ("\nVarianza: %.2f", VAR);
     printf("\nDesviacion: %.2f", DES);
     printf ("\nModa: %d\n", MOD);

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

 float Media(int A[], int T)

 {
     int I;
     float SUM = 0.0;
     for (I = 0; I < T; I++)
        SUM += A[I];
     return (SUM / T);
 }

 float Varianza(int A[], int T, float M)
 {
     int I;
     float SUM = 0.0;
     for (I = 0; I < T; I++)
        SUM += pow((A[I]- M), 2);
     return (SUM / T);
 }
 float Desviacion(float V)

 {
     return (sqrt(V));
 }

 void Frecuencia(int A[], int P, int B[])
 {
     int I;
     for (I = 0; I < P; I++)
     B[A[I]]++;
 }

 int Moda(int A[], int T)

 {
     int I, MOD = 0, VAL = A[0];
     for (I = 1; I < T; I++)
        if (MOD < A[I])
     {
         MOD = I;
         VAL = A[I];
     }
     return VAL;
 }
