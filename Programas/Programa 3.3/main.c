#include <stdio.h> //Incluir la biblioteca estandar para funciones de entrada/salida

int main(void) { //Definicion de la funcion principal del programa
float PAG, SPA; // Declarar las variables PAG (pago actual) y SPA (suma de pagos)
SPA = 0; //Inicializar la suma de pagos en 0

printf("Ingrese el primer pago:\t"); // Solicitar el primer pago al usuario
if(scanf("%f", &PAG)!=1){ //Leer el pago y verificar si la entrada es valida
    printf("Error: entrada no valida. Debe ser un numero.\n"); //Mensaje de error si la entrada es invalida
    return 1; //Salir del programa con un codigo de error
}
while (PAG){ // Continuar mientras el pago no sea cero
    SPA += PAG;
    printf("Ingrese el siguiente pago:\t"); // Sumar el pago actual a la suma total
    if(scanf("%f", &PAG)!= 1){ // Leer el nuevo pago y verificar si la entrada es valida
        printf("Error: entrada no valida. Debe ser un numero.\n"); //Mensaje de error si la entrada es invalida
        return 1; // Salir del programa con un codigo de error
    }
}
printf("\nEl total de pagos del mes es: %.2f\n", SPA); // Imprimir el total de pagos con 2 decimales
return 0; // Finalizar el programa con un codigo de exito
}
