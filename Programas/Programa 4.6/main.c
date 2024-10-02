#include <stdio.h>

/* Prototipo de funcion. El parametro es de tipo entero y por referencia. */
void f1(int *R);

int main(void){
int I, K = 4;
for (I = 1; I <= 3; I++){
    printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
    f1(&K);
    printf("\nValor de K despues de llamar a la funcion: %d", K);
}
return 0;
}

void f1(int *R){

*R += *R;
}
