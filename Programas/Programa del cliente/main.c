#include <stdio.h>

void convertirenletras(int numero);

int main(void){
float numero;
int parteentera, centavos;

printf("Ingrese una cantidad del 1 al 10: ");
scanf("%f", &numero);

parteentera = (int)numero;
centavos = (int)((numero - parteentera) * 100);

if (parteentera >= 1 && parteentera <= 10) {
        printf("El número en letras es: ");
        convertirenletras(parteentera);
        printf("con %d centavos\n", centavos);

} else {
printf("El numero es muy grande");
}
return 0;
}
void convertirenletras(int numero){
switch(numero){
case 1:
    printf("Uno ");
    break;
case 2:
    printf("Dos ");
    break;
case 3:
    printf("Tres ");
    break;
case 4:
    printf("Cuatro ");
    break;
case 5:
    printf("Cinco ");
    break;
case 6:
    printf("seis ");
    break;
case 7:
    printf("Siete ");
    break;
case 8:
    printf("Ocho ");
    break;
case 9:
    printf("nueve ");
    break;
case 10:
    printf("diez");
    break;
default:
    printf("Numero fuera de rango.\n");
}
}
