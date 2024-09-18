#include <stdio.h>

/* Empresa textil.
El programa, al recibir como datos decisivos la categoria y antiguedad de
un empleado, determina si el mismo reune las condiciones establecidas por
la empresa para ocupar un nuevo cargo en una sucursal.
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */

int main(void){
int CLA, CAT, ANT, RES;

printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");
scanf("%d %d %d", &CLA, &CAT, &ANT);

switch (CAT) {
case 3:
case 4:
    if (ANT >=5){
        RES = 1;
    } else{
    RES = 0;
    }
    break;
case 2:
    if (ANT >= 7){
        RES = 1;
    }
    break;
default:
    RES = 0;
    break;
}
if (RES) {

printf("\nEL trabajador con clave %d reune las condiciones para el puesto\n", CLA);
} else {
printf("\nEl trabajador con clave %d no reune las condiciones para el puesto\n", CLA);
}
return 0;
}
