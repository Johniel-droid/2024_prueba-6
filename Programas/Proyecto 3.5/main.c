#include <stdio.h> // incluir la biblioteca estandar para funciones de entrada/salida

int main(void){ //Definicion de la funcion principal del programa
float PAG, SPA = 0; // Declarar las variables PAG (pago actual) y SPA (suma total de pagos)

printf("Ingrese el primer pago:\t"); // Solicitar el primer pago al usuario
if(scanf("%f", &PAG)!= 1){ // Leer el pago y verificar si la entrada es valida
    printf("Error: entrada no valida. Debe ser un numer. \n"); // Mensaje de error si la entrada es invalida
    return 1; //Salir del programa con un codigo de error
}

if (PAG >= 0){ // Verificar si el pago es mayor o igual a cero
    do{ //Comenzar un bucle do-while para acumular pagos
        SPA += PAG; // Sumar el pago actual a la suma total
        printf("Ingrese el siguiente pago -0 para terminar-:\t"); //Solicitar el siguiente pago
        if (scanf("%f", &PAG) != 1){ //Leer el nuevo pago y verificar si la entrada es valida
            printf("Error: entrada no valida debe ser un numero.\n"); //Mensaje de error si la entrada es Invalida
            return 1; // Salir del programa con un codigo de error
        }
    }while (PAG != 0); // Continuar mientras el pago no sea cero
}

printf("\nEl total de pagos del mes es: %.2f\n", SPA); //Imprimir el total de pagos con 2 decimales
return 0; // Finalizar el programa con un codiggo de exito
}
