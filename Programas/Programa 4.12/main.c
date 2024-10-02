#include <stdio.h>
 /* Prototipo de funcion. */
 int mcd(int, int);

 int main(void){
 int NU1, NU2, RES;

 printf("\nIngrese los dos numeros enteros: ");
 scanf("%d %d", &NU1, &NU2);

 RES = mcd(NU1, NU2);
 printf("\nEl maximo comun divisor de %d y %d es: %d\n", NU1, NU2, RES);

 return 0;
 }

 int mcd(int N1, int N2){

 int I;

 if (N1 < N2){
    I = N1;
 } else {
 I = N2;
 }

 while (I > 0){
    if (N1 % I == 0 && N2 % I == 0){
        return I;
    }
    I--;
 }

 return 1;
 }



