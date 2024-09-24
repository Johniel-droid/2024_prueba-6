#include <stdio.h>

/* Números perfectos.
El programa, al recibir como dato un número entero positivo como límite, obtiene
los números perfectos que hay entre 1 y ese número, y además imprime cuántos números perfectos hay en el intervalo. */
int main(void) { // Definicion de la funcion principal
    int I, J, NUM, SUM, C = 0; // Declarar variables: I y J para ciclos, NUM como limite, SUM para suma de divisores, C para contar numeros perfectos

    printf("\nIngrese el numero limite: "); // Solicitar el limite superior
    scanf("%d", &NUM); // Leer el numero limite ingresado por el usuario

    for (I = 1; I <= NUM; I++) { // Bucle que itera desde 1 hasta el numero limite
        SUM = 0; // Reiniciar la suma para cada número I
        for (J = 1; J <= (I / 2); J++) { //Bucle que itera sobre posibles divisores propios de I
            if ((I % J) == 0) { // Comprobar si J es un divisor propio de I
                SUM += J; // Sumar los divisores propios
            }
        }
        if (SUM == I) { // Comprobar si la suma de divisores es igual a I (numero perfect)
            printf("\n%d es un numero perfecto", I); //Imprimir que I es un numero perfecto
            C++; // Incrementar el contador de numeros perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d numeros perfectos\n", NUM, C); //Imprimir la cantidad de numeros perfectos encontrados
    return 0; // Indicar finalización exitosa
}


