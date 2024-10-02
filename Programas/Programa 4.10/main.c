#include <stdio.h>

/* Prototipo de funcion. */
int multiplo(int, int);

int main(void){
int NU1, NU2, RES;

printf("\nIngrese los dos numeros: ");
scanf("%d %d", &NU1, &NU2);
RES = multiplo(NU1, NU2);

if (RES){
    printf("\nEl segundo numero es multiplo del primero");
} else {
printf("\nEl segundo numero no es multiplo del primero");
}

return ;
}

int multiplo(int N1, int N2) {

return (N2 % N1 == 0);
}
