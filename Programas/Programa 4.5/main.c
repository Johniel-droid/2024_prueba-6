#include <stdio.h>

/* Prototipo de funcion. El parametro es de un tipo entero. */
int cubo(int K);

int main(void){
int I;
for (I =1; I <= 10; I++){
    printf("\nEl cubo de %d es: %d", I, cubo(I));
}
return 0;
}

int cubo(int K) {

return (K * K * K);
}
