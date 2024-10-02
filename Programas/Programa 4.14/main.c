#include <stdio.h>

/* Prototipo de funcion. */
void Rango(float);

int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

int main(void){
float CAL;

printf("Ingrese la primera calificacion del alumno: ");
scanf("%f", &CAL);

while (CAL != -1){
    Rango(CAL);
    printf("Ingrese la siguinte calificacion del alumno: ");
    scanf("%f", &CAL);
}

printf("n\0..3.99 = %d", RA1);
printf("n\4..5.99 = %d", RA2);
printf("n\6..7.99 = %d", RA3);
printf("n\8..8.99 = %d", RA4);
printf("n\9..10 = %d", RA5);

return 0;
}

void Rango(float VAL){

if(VAL < 4){
    RA1++;
}else if (VAL < 6){
RA2++;
}else if (VAL < 8){
RA3++;
}else if (VAL < 9){
RA4++;
}else if (VAL < 10){
RA5++;
}
}
