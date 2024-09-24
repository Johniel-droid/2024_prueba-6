#include <stdio.h>

/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el
numero de dias de internacion de un cliente en un spa, calcula el costo
total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */

int main(void){ //Definicion de la funcion principal
int TRA, EDA, DIA; //Declarar variables enteras para tratamiento, edad y dias
float COS; //Declarar variable real para el costo

printf ("Ingrese tipo de tratamiento. edad y dias: "); //Solicitar datos al usuario
scanf("%d %d% d", &TRA, &EDA, &DIA); //Leer el tipo de tratamiento, edad y dias

switch (TRA){ //Evaluar el tipo de tratamiento
case 1: COS = DIA * 2800; break; //Tratamiento 1
case 2: COS = DIA * 1950; break; //Tratamiento 2
case 3: COS = DIA * 2500; break; //Tratamiento 3
case 4: COS = DIA * 1150; break; //Tratamiento 4
default: COS =-1; break; // Valor invalido para tratamiento
}

if (COS != -1){ //Verificar si el costo fue calculado correctamente
    if(EDA>= 60){ //Aplicar descuento basado en la edad
    COS = COS * 0.75; //25% de descuento para mayores de 60 años
    } else if (EDA <=25){
    COS = COS * 0.85; // 15% de descuento para menores o igual a 25 años
    }
    printf("\nClave tratamiento: %d\tDias: %d\tCosto total: %8.2f\n", TRA, DIA, COS); //Imprimir el costo total
} else{
printf("\nLa clave del tratamiento es incorrecto\n"); //Mensaje de error para clave de tratamiento incorrecta
}

return 0; //Termina la ejecucion del programa
}
