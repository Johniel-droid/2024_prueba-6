#include <stdio.h> //Incluir la biblioteca estandar para funciones de entrada/ salida

int main(void){ //Definicion de la fincion principal del programa
int I = 0; // Contador de salarios ingresados
float SAL, PRO, NOM = 0; // Declarar SAL (salario actual), PRO (promedio) y NOM (nomina total)

printf("Ingrese el salario del profesor:\t"); //Solicitar el primer salario al usuario
if (scanf("%f", &SAL) != 1 || SAL < 0){ // Verificar si la entrada es valida y si es un numero positivo
    printf("Error: entrada no valida. Debe ser un numero positivo. \n"); // Mensaje de error si la entrada es invalida
    return 1; //Salir del programa con un codigo de error
}

do { //Comenzar un bucle do-while para acumular salarios
        NOM += SAL; //Sumar el salario actual a la nomina total
I++; //Incrementar el contador de salarios
printf("Ingrese el salario del profesor -0 para terminar-:\t"); //Solicitar el siguiente salario
if(scanf("%f", &SAL) != 1){ // Leer el nuevo salario y verificar si la entrada es valida
    printf("Error: entrada no valida. Debe ser un numero.\n"); // Mensaje de error si la entrada es invalida
    return 1; //Salir del programa con un codigo de error
}
} while (SAL != 0); //Continuar mientras el salario no sea cero

if (I > 0){ //Verificar si se ingresaron salarios
    PRO = NOM / I;
    printf("\nNomina; %.2f \t promedio de salarios: %.2f\n", NOM, PRO); //Imprimir la nomina total y el promedio
} else {
    printf("\nNo se ingresaron salarios. \n"); //Mensaje si no se ingresaron salarios
}

return 0; // Finalizar el programa con un codigo de exito
}



