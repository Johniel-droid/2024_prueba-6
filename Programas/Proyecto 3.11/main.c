#include <stdio.h>

/*Examen de admision
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran estas */

int main(void) { //Definicion de la funcion principal del programa
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
    float CAL; //Variable para almacenar la calificacion ingresada

    printf("Ingrese la calificacion del alumno (-1 para terminar): ");//Solicitar la calificacion al usuario
    while (scanf ("%f", &CAL) == 1 && CAL != -1){ //Leer calificaciones hasta que se ingrese -1
        if (CAL < 0 || CAL > 10){
                printf("Calificacion no valida. Debe estar entre 0 y 10.\n"); //Mensaje de error para calificaciones fuera de rango
        }else if (CAL < 4){
        R1++; //Incrementar contador para calificaciones menores a 4
        }else if (CAL < 6){
        R2++; // Incrementar contador para contador para calificaciones entre 6 y 5.99
        }else if (CAL < 8){
        R3++;// Incrementar contador para calificaciones entre 8 y 7.99
        }else if (CAL < 9){
        R4++;// Incrementar contador para contador para calificaciones entre 9 y 8.99
        }else {
        R5++; // Incrementar contador para contador para calificaciones entre 9 y 10
        }
        printf("Ingrese la calificacion del alumno (-1 para terminar): "); //Solicitar la siguiente calificacion
    }

        printf("\n0..3.99 = %d", R1); //Mostrar cuantas calificaciones estan en el rango 0 a 3.99
        printf("\n0..5.99 = %d", R2); //Mostrar cuantas calificaciones estan en el rango 4 a 3.99
        printf("\n0..7.99 = %d", R3); //Mostrar cuantas calificaciones estan en el rango 6 a 3.99
        printf("\n0..8.99 = %d", R4); //Mostrar cuantas calificaciones estan en el rango 8 a 3.99
        printf("\n0..10 = %d/n", R5); //Mostrar cuantas calificaciones estan en el rango 9 a 10

        return 0; //Finalizar el programa
    }







