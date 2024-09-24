#include <stdio.h> // Incluir la biblioteca estandar para funciones de entrada/salida

int main(void){ //Definicion de la funcion principal del programa
int I, N; // Declarar variables enteras: I para el contador y N para el numero de lanzamientos
float LAN, SLA = 0; //Declarar LAN para cada lanzamiento y SLA para la suma de lanzamientos

do{ //Comenzar un bucle do-while para obtener un numero valido de lanzamientos
    printf("Ingrese el numero de lanzamientos (1-11):\t"); //Solicitar al usuario el numero de lanzamientos
    if (scanf("%d", &N) != 1){ //Verificar si la entrada es un numero entero
        printf("Error: entrada no valida. Debe ser un numero entero. \n"); //Mensaje de error si la entrada es invalida
    }
} while (N < 1 || N > 11); //Continuar pidiendo hasta que N esta en el rango de 1 a 11

for (I = 1; I <= N; I++){ //Bucle para ingresar los lanzamientos
    printf("\nIngrese el lanzamiento %d: ", I); //Solicitar el lanzamiento correspondiente
    if (scanf("%f", &LAN) != 1){ //Verificar si la entrada es un numero real
        printf("Error: entrada no valida. Debe ser un numero real. \n"); // Mnesaje de error si la entrada es invalida
        return 1; //Salir del programa con un codigo de error
    }
    SLA += LAN; //Acumular el lanzamiento en la suma total
}

SLA /= N; // Calcular el promedio dividiendo la suma total entre el numero de lanzamientos
printf("nEL promedio de lanzamientos es: %.2f\n", SLA); //Imprimir el promedio con dos decimales
return 0; // Finalizar el programa con un codigo de exito
}
