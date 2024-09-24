#include <stdio.h>
#include <stdlib.h>

int main(void){

int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; // Inicializar variables

printf("Ingrese el numero de datos que se van a procesar: \t");
scanf("%d", &N); // Leer el numero de datos

if (N > 0) { // Verificar que N sea positivo
    for(I = 1; I <= N; I++);// Bucle para procesar N numeros
    scanf("%d", &NUM); // Leer el numero ingresado

    if (NUM % 2 == 0) { //Comprobar si es par
        SPA += NUM; //Sumar a la suma de numeros pares

    if (NUM % 2 == 0){ //Si es par
        SPA += NUM; // Sumar a la suma de numeroes pares
    } else { //Si es impar
    SIM += NUM; // Sumar a la suma de numeros impares
    CIM++; //Incrementar el contador de numeros impares
    }
    }

    printf("\nLa suma de los numeros pares es: %d", SPA); //mostrar la suma de los numeros pares
    if (CIM > 0){ // Comprobar si se ingresan impares
        printf("\nEl promedio de numeros impares es: %.2f", (float)SIM / CIM); // calcular y mostrar el promedio de impares
    } else {
    printf("\nNO se ingresaron numeros impares para calcular el promedio."); //Mensaje si no hay impares
    }
} else {
printf("\nEl valor de N es incorrecto"); // Mensaje de error si N no es positivo
}

return 0; // Finalizar el programa
}
