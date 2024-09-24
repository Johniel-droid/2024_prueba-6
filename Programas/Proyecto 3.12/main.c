#include <stdio.h>

/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM. */

int main(void){ //Definicion de la funcion principal del programa
int NUM; // Variable para almacenar el numero ingresado por el usuario

printf("Ingrese el numero para calcular la serie: "); //Solicitar al usuario que ingrese un numero
scanf("%d", &NUM); //Leer el numero ingresado

if (NUM > 0){ //Verificar que el numero sea positivo
        printf("\nSerie de ULAM:\n"); //Imprimir encabezado para la serie
printf("%d\t", NUM); //Imprimir el numero inicial de la serie

while (NUM != 1) { //Continuar hasta que el numero sea 1
        if(NUM % 2== 0) { //Comprobar si el numero es par
            NUM= NUM/ 2; // Si es par, dividirlo entre 2
        } else { //Si el numero es impar
        NUM = NUM * 3 +1; //Aplicar la formula para numeros impares
        }
        printf("%d\t", NUM); //Imprimir el siguiente numero en la serie
}
} else {
    printf("\nNUM debe ser un enteri positivo\n"); // Mensaje de error si el numero no es positivo
}

return 0; //Finalizar el programa
}
