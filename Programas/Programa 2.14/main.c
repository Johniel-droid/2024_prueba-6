#include <stdio.h>
 /* Telefono.
 El programa, al recibir como datos la clave de la zona geografica y el
 numero de seguntos de una llamada telefonica, calcula el costo de la misma.
 CLA y TIE: variables de tipo entero.
 COS: variable de tipo real. */

 int main(void){ // Definicion de la funcion principal
 int CLA, TIE; //Declarar variables para la clave de zona y tiempo de llamada
 float COS; //Declarar variable para el costo de la llamada

 printf("Ingrese la clave y el tiempo: "); //Solicitar al usuario que ingrese la clave de zona y el tiempo de llamada
 scanf("%d %d", &CLA, &TIE); //Leer la clave y el tiempo desde la entrada estandar

 switch (CLA){ //Evaluar la clave de zona para calcular el costo

    case 1: COS = TIE * 0.13 / 60; break; //Costo por minuto para la clave 1
    case 2: COS = TIE * 0.11 / 60; break;  //Costo por minuto para la clave 2
    case 5: COS = TIE * 0.22 / 60; break;   //Costo por minuto para la clave 5
    case 6: COS = TIE * 0.19 / 60; break;   //Costo por minuto para la calve 6
    case 7: //Multiples claves que comparten el mismo costo
    case 9: COS = TIE * 0.17 / 60; break; // Costo por minuto para las claves 7 y 9
    case 10: COS = TIE * 0.20 / 60; break; // Costo por minuto para la clave 10
    case 15: COS = TIE * 0.39 / 60; break; // Costo por minuto para la clave 15
    case 20: COS = TIE * 0.28 / 60; break; // Costo por minuto para la clave 20
    default: COS = -1; break; //Si la clave es invalida, asignar -1 a COS
 }
//Si el costo es valido, imprimir los detalles de la llamada
 if (COS != -1){
    printf("\n\nClave: %d\tCosto: %d\tTiempo: %d\tCosto: %6.2f\n", CLA, TIE, COS); //Mensaje para clave invalida
 }

 return 0; //Finaliza la ejecucion del programa
 }
