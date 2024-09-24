#include <stdio.h> //  Incluir la biblioteca estandar para funciones de entrada/salida

 int main(void){ //Definicion de la funcion principal del programa
 int I, N, NUM;
 long long int SUM = 0; //Decarar las variables enteras I (contador), N (numero de datos) y NUM (valor ingresado)


 printf("Ingrese el numero de datos:\t"); //Declarar y inicializar SUM en 0 para almacenar la suma de numeros positivos
 if (scanf("%d", &N) != 1 || N <= 0){ //Leer N y verificar si la entrada es valida y positiva
    printf("Error: entrada no valida. Debe ser un numero entero positivo. \n"); //Mensaje de erro si la entrada es invalida
    return 1; // Salir del programa con un codigo de error
 }

 for (I = 1; I <= N; I++){ //Bucle que se ejecuta N veces para solicitar los datos
    printf("Ingrese el dato numero %d: \t", I); // Solicitar el dato numero I
    if(scanf("%d", &NUM) != 1){ // Leer el numero y comprobar si la entrada es valida
        printf("Error: entrada no valida. Intente de nuevo. \n"); //Mensaje de error si la entrada es invalida
        return 1; //Salir del programa con un codigo de error
    }
    if (NUM >0){ //Comprobar si el numero ingresado es positivo
        SUM += NUM; //Sumar el numero positivo a la variable SUM
    }
 }
 printf("\nLA suma de los numeros positivos es: %lld\n, SUM"); //Imprimir la suma de los numeros positivos
 return 0; //Finalizar el programa con un codigo de exito
 }
