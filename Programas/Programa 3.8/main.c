#include <stdio.h> // Incluir la biblioteca estandar para funciones de entrada/salida

/* Factorial.
El programa calcula el factorial de un numero entero.
FAC, I, NUM; variables de tipo entero. */
int main(void){ //Definicion de la funcion principal del programa
int I, NUM; //Declarar variables enteras: I para el contador y NUM para el numero ingresado
long long FAC; //Declarar FAC como variable para almacenar el factorial, usando long long para manejar numeros grandes

printf("\nIngrese el numero: "); //Solicitar al usuario que ingrese un numero
if (scanf("%d", &NUM) != 1){ //Verificar si la entrada es un numero entero
    printf("Error: entrada no valida. Debe ser un numero entero. \n"); //Mensaje de error si la entrada es invalida
    return 1; // Salir del programa con un codigo de error
}

if (NUM >= 0){ // Verificar si el numero es no negativo
    FAC = 1; //Inicializar FAC en 1, ya que el factorial de 0 es 1
    for (I = 1; I <= NUM; I++){ //Bucle para calcular el factorial desde 1 hasta NUM
        FAC *= I; //Multiplicar FAC por I en cada iteracion
    }
    printf("nEl factorial de %d es: %lld\n", NUM, FAC); //Imprimir el resultado factorial
} else { // si el numero es negativo
printf("\nError en el dato ingresado: el numero debe ser no negativo. \n"); //Mensaje de error
}

return 0; //Finalizar el programa con un codigo de exito
}
