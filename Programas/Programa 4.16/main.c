#include <stdio.h>

/* Prototipos de funciones. */
void Acutem(float);
void Maxima(float, int);
void Minima(float, int);

float ACT = 0.0;
float MAX = -50.0;
float MIN = 60.0;
int HMAX = 0;
int HMIN = 0;

int main(void){
float TEM;
int I;

for (I =1; I <= 24; I++){

printf("Ingresa la temperatura de la hora %d: ", I);
scanf("%f", &TEM);
Acutem(TEM);
Maxima(TEM, I);
Minima(TEM, I);
}

printf("\nPromedio del dia: %5.2f", (ACT / 24));
printf("\nMaxima del dia: %5.2f \tHora: %d", MAX, HMAX);
printf("\nMinima del dia: %5.2f \tHora: %d\n", MIN, HMIN);

return 0;
}

void Acutem(float T) {

ACT += T;
}

void Maxima(float T, int H){

if (MAX < T){
    MAX = T;
    HMAX = H;
}
}

void Minima(float T, int H){
if (MIN > T){
    MIN = T;
    HMIN = H;
}
}
