#include <stdio.h> //Incluir la biblioteca estandar para funciones de entrada/salida
 /*
 El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio
 de calificaciones de cada uno de ellos y, ademas, los alumnos con el mejor
 y peor promedio. */

int main(void){ //Definicion de la funcion principal
int I, MAT, MAMAT = 0, MEMAT = 0; //Declarar variables enteras para el indice, matricula, y mejores/peores alumnos
float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; //Declarar variables para sumar, promedio, calificacion, mejor y peor promedio

printf("Ingrese la matricula del primer alumno:\t"); //Solicitar matricula del primer alumno
scanf("%d", &MAT); //Leer la matricula

while (MAT){ //Continuar mientras se ingrse una matricula valida
    SUM = 0; //Inicializar la suma de calificaciones para el alumno actual
    for (I = 1; I <= 5; I++) { //Ciclo para ingresar 5 calificaciones
        printf("\nIngrese la calificacion del alumno %d:", I); //Solicitar calificacion
        scanf("%f", &CAL); //Leer la calificacion
        SUM += CAL; //Sumar la calificacion al total
    }

    PRO = SUM / 5; //Calcular el promedio de calificaciones
    printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO); //Imprimir matricula y promedio

    if (PRO > MAPRO){ //Verificar si el promedio es el mayor hasta ahora
        MAPRO = PRO; //Actualizar el mejor promedio
        MAMAT = MAT; // Guardar la matricula del alumno con el mejor promedio
    }

    if (PRO < MEPRO){ //Verificar si el promedio es el menor hasta ahora
        MEPRO = PRO; //Actualizar el peor promedio
        MEMAT = MAT; //Guardar la matricula del alumno con el peor promedio
    }

    printf("\n\nIngrese la matricula del siguiente alumno: "); //Solicitar matricula del siguiente alumno
    scanf("%d", &MAT); //Leer la nueva matricula
}

if (MAMAT != 0){
    printf("\n\nAlumno con mejor Promedio:\t%d\tPromedio: %5.2f", MAMAT, MAPRO); //Imprimir el alumno con el mejor promedio
     printf("\n\nAlumno con peor Promedio:\t%d\tPromedio: %5.2f", MEMAT, MEPRO); //Imprimir el alumno con el peor promedio
} else {
printf("No se ingresaron calificaciones.\n"); //Mensaje si no se ingresaron calificaciones
}

return 0; //Termina la ejecucion del programa
}
