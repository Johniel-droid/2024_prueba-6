#include <stdio.h>
#include <stdlib.h>

/* Prototipo de funcion. */
void parimp(int NUM, int *P, int *I);

int main(void) {
int N, NUM, PAR = 0, IMP = 0;
int I;

printf("Ingresa el numero de datos: ");
scanf("%d", &N);

for (I = 1; I <= N; I++){
    printf("Ingrese el numero %d: ", I);
    scanf("%d", &NUM);
    parimp(NUM, &PAR, &IMP);
}

printf("\nNumero de pares: %d", PAR);
printf("\nNumero de impares: %d\n", IMP);

return 0;
}

void parimp(int NUM, int *P, int *I){

if (NUM % 2 == 0){
    *P += 1;
} else{
    *I += 1;
}
}
