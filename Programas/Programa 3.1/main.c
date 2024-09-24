#include <stdio.h>

int main(void){ //Definicion de la funcion principal del programa
int I; // Declarar la variable entera I para usar en el bucle
float SAL, NOM; // Declarar las variables SAL (salario) y NOM (nomina total)
NOM = 0; // Inicializar la nomina total en 0

for(I = 1; I <= 15; I++){ //Bucle que se ejecuta 15 veces, una por cada profesor
    printf("Ingrese el salario del profesor %d:\t", I); // Solicitar el salario del profesor I
    if (scanf("%f", &SAL)!= 1){ // Leer el salario y comprobar si la entrada es valido
        printf("Error: entrada no valida. INTENTE DE NUEVO. |n"); //Mensaje de error si la entrada es invalida
        return 1; //Salir del programa con un codigo de error
    }
    NOM += SAL; // Sumar el salario ingresado a la nomina total
    }
    printf("\nEL total de la nomina es: %.2f\n", NOM); //Imprimir el total de la nomina con 2 decimales
    return 0; //Finalizar el programa con un codigo de exito
}
