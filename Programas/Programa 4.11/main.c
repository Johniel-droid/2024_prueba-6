#include <stdio.h>

/* Prototipo de funcion. */
int mad(int);

int main(void){
int NUM, RES;

printf("\nIngrese el numero: ");
scanf("%d", &NUM);

RES = mad(NUM);
printf("nEl mayor divisor de %d es: %d\n", NUM, RES);

return 0;
}

int mad(int N1){

int I = N1 / 2;

while (I > 0){
if (N1 % I == 0){
    return I;
}
I--;
}
return 1;

}

