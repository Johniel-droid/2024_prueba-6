#include <stdio.h>

int main() {
float costoGalon, consumoMin, consumoMax, litrosPorGalon = 3.70541; //Mencion de variables

printf("Ingrese el costo del galon en pesos: "); // Solicita al cliente el costo del galon
scanf("%f", &costoGalon); // Lee el costo del galon

printf("Ingrese el consumo minimo en litros por cada 100km: "); // Solicita al cliente el consumo minimo
scanf("%f", &consumoMin); // Lee el consumo minimo

printf("Ingrese el consumo maximo en litros por cada 100km: "); // Solicita al cliente el costo maximo
scanf("%f", &consumoMax); // Lee el consumo maximo

if (consumoMin >= 0 && consumoMax >= consumoMin){ // Verifica si los valores son validos
    printf("| Consumo (L/100km)| Costo por km (pesos) |\n"); //Imprime el titulo de la tabla
    printf("|---------------------|--------------------|\n");

    for (float consumoLitros = consumoMin; consumoLitros <= consumoMax; consumoLitros += 1.0) { // Calcula y muestra el costo por km
            float costoPorKm = (consumoLitros / 100) * (costoGalon / litrosPorGalon); // Utiliza la formula para la operacion
        printf("|      %.1f     |      %.2f    |\n", consumoLitros, costoPorKm); //Imprime el consumo y el costo por Km
    }
} else {
     printf("Los valores de consumo son invalidos. \n"); //Mensaje de error si no ingresas valores validos
}

return 0; //Finaliza el programa
}
