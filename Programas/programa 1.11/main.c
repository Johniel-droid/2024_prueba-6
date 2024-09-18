#include <stdio.h>
#include <math.h>

int main(void)
{
    float X1, Y1, X2, Y2, X3, Y3, LA1, LA2, LA3, PER;

    printf("ingrese las coordenadas del punto P1 (X1 Y1)");
    scanf("%f %f", &X1, &Y1);
    printf("Ingrese las coordenadas del punto P2 (X2 Y2): ");
    scanf("%f %f", &X2, &Y2);
    printf("Ingrese las coordenadas del punto P3 (X3 Y3: ");
    scanf("%f %f", &X3, &Y3);

    LA1 = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    LA2 = sqrt(pow(X3 - X2, 2) + pow(Y3 - Y2, 2));
    LA3 = sqrt(pow(X3 - X1, 2) + pow(Y3 - Y1, 2));

    PER = LA1 + LA2 + LA3;

    printf("\nEl perimetro del triángulo es: %.3f\n", PER);

    return 0;
}
