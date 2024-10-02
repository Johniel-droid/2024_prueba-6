#include <stdio.h>

/* Funciones y parametros. */
int Z, Y;
int F1(float);
void F2(float, int *);

int main(void){
int W;
float X;
Z = 5;
Y = 7;
W = 2;
X = (float)Y / Z;
printf("n\Programa Principal: %d %d %.2f %d", Z, Y, X, W);
F2(X, &W);
printf("\nPrograma Principal: %d %d %.2f %d", Z, Y, X, W);
return 0;
}

int F1(float x){
int K;
if (x != 0) {
K = Z - Y;
    x++;
} else {
K = Z + Y;
}
printf("\nF1: %d %d %.2f %d", Z, Y, x, K);
return K;
}

void F2(float t, int *r) {
int Y;
Y = 5;
Z = 0;
printf("\nF2: %d %d %.2f %d", Z, Y, t, *r);
if (Z == 0){
    Z = (*r) *2;
    t = (float)Z / 3;
    printf("\nIngrese el valor: ");
    scanf("%d", r);
    printf("\nF2: %d %d %.2f %d", Z, Y, t, *r);
} else  {
Z = (*r) * 2;
    printf("\nF2: %d %d %.2f %d", Z, Y, t, *r);
}
*r = F1(t);

 }
