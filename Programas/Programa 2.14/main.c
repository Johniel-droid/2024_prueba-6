#include <stdio.h>
 /* Telefono.
 El programa, al recibir como datos la clave de la zona geografica y el
 numero de seguntos de una llamada telefonica, calcula el costo de la misma.
 CLA y TIE: variables de tipo entero.
 COS: variable de tipo real. */

 int main(void){
 int CLA, TIE;
 float COS;

 printf("Ingrese la clave y el tiempo: ");
 scanf("%d %d", &CLA, &TIE);

 switch (CLA){

    case 1: COS = TIE * 0.13 / 60; break;
    case 2: COS = TIE * 0.11 / 60; break;
    case 5: COS = TIE * 0.22 / 60; break;
    case 6: COS = TIE * 0.19 / 60; break;
    case 7:
    case 9: COS = TIE * 0.17 / 60; break;
    case 10: COS = TIE * 0.20 / 60; break;
    case 15: COS = TIE * 0.39 / 60; break;
    case 20: COS = TIE * 0.28 / 60; break;
    default: COS = -1; break;
 }

 if (COS != -1){
    printf("\n\nClave: %d\tCosto: %d\tTiempo: %d\tCosto: %6.2f\n", CLA, TIE, COS);
 }

 return 0;
 }
