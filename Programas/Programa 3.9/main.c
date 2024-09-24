#include <stdio.h> //Incluir la biblioteca estandar para funciones de entrada/salida

/* Serie
El programa imprime los terminos y obtiene la suma de una determinada serie.
I, SSE Y CAM: variables de tipo entero. */
int main(void) { //Definicion de la funcion principal del programa
int I = 2, CAM = 0; //Inicializar I en 2 (primer termino de la serie) y CAM para controlar el flujo
long SSE = 0; // Inicializar SSE para almacenar la suma de la serie

while (I <= 2500) { // Blucle que continua mientras I sea menor o igual a 2500
    SSE += I; // Sumar el valor de I a la suma total SSE
    printf("\t%d", I); //Imprimir el termino actual de la serie

    if (CAM == 0) { //Condicion para determinar el incremento de I
    I += 5; //Si CAM es 0, incrementar I en 5
    CAM = 0; // Cambiar CAM a 0 para volver al flujo anterior
    }
}
printf("\nLa suma de la serie es: %ld\n", SSE); // Imprirmir la suma total de la serie
return 0; //Finalizar el programa con un codigo de exito
}
