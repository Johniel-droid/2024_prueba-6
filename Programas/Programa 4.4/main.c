#include <stdio.h>

/* Prototipos de funciones. */
int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3; /* Variable global. */

int main(void) {
    int I;
    for (I = 1; I <= 3; I ++){
        printf("\nEl resultado de la funcion f1 es: %d", f1());
         printf("\nEl resultado de la funcion f2 es: %d", f1());
          printf("\nEl resultado de la funcion f3 es: %d", f1());
           printf("\nEl resultado de la funcion f4 es: %d", f1());
    }
    return 0;
}

int f1(void){

int K = 1;
K++;
return (K);
}

int f3(void){

static int K =8;
K += 2;
return (K);
}

int F4(void){

    int K = 5;
    K = K + K;
    return (K);

}
