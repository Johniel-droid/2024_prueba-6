#include <stdio.h> // Incluir la biblioteca estadar para funciones de entrada/salida
#include <stdlib.h> // Incluir la biblioteca estandar para funciones de utilidad

int main(void){ // Definicion de la funcion principal del programa
int NUM; // Declarar la variable entere NUM para el numero ingresado
long CUA, SUC = 0; // Declarar CUA para almacenar el cuadrado y SUC para la suma de cuadrados

printf("\nIngrese un numero entero -0 para terminar-:\t"); // Solicitar un numero entero al usuario
if(scanf("%d", &NUM)!= 1){
    printf("Error: entrada no valida. Debe ser un numero entero.\n");
    return 1; //Salir del programa con un codigo de error
}

while (NUM){ //Continuar mientras el numero no sea cero
    CUA = NUM * NUM; // Calcular el cuadrado del numero
    printf("%d, al cuadrado es%ld", NUM, CUA); // Imprimir el numero y su cuadrado
    SUC += CUA; // Sumar el cuadrado a la suma total
    printf("\nIngrese un numero entero -0 para terminar-:\t"); // Solicitar el siguiente  numero
    if (scanf("%d", &NUM) != 1){ // Leer el nuevo numero y verificar si la entrada es valida
        printf("Error: entrada no valida. Debe ser un numero entero.\n"); // Mensaje de error si la entrada es invalida
        return 1; //Salir del programa con un codigo de error
    }
}

printf("\nLa suma de los cuadrados es %ld\n", SUC); //Imprimir la suma de las cuadrados
return 0; // Finalizar el programa con un codigo de exito
}
