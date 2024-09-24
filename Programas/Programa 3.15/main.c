#include <stdio.h> //Incluir la biblioteca estandar para funciones de entrada/salida

/* Calculo de P
El programa obtiene el valor de P aplicando una serie determinada. */
int main(void){ //Definicion de la funcion principal
int I = 1, B = 0, C = 0; //Inicializar I (indice), B (bandera) Y C (contador de terminos)
double RES; //Declarar RES como variable de tipo real de doble precision

RES = 4.0 / I; //Inicializar RES con el primer termino de la serie
C = 1; //Contador de terminos, comienza en 1

while (fabs(3.1415 - RES) > 0.0005){ //Mientras la diferencia entre RES y pi (aproximado) sea mayor que 0.0005
    I += 2; //Incrementar I en 2 para pasar al siguiente termino impar
    if (B) { //Cambiar B es 1, significa que estamos en un termino par
        RES += (double)(4.0 / I); //Sumar el siguiente termino de la serie
        B = 0; //Cambiar B a 0 para indicar que el proximo termino sera impar
    } else {
    RES -= (double)(4.0 / I); //Restar el siguiente termino de la serie
    B = 1; //Cambiar B a 1 para indicar que el proximo termino sera par
    }
    C++; //Incrementar el contador de terminos
}

printf("\nNumero de terminos: %d", C); //Imprimir el numero de terminos utilizados para alcanzar el resultado
return 0; //Termina la ejecucion del programa
}
