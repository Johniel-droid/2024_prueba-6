#include <stdio.h>

/* Prototipo de funcion. El parametro es por valor y de tipo entero. */
int f1(int R);

int main(void){
int I, K =4;
for (I = 1; I <= 3; I++){
    printf("\n\nValor de K antes de llamar a la funcion; %d", ++K);
    printf("\n\nValor de K antes de llamar a la funcion; %d", f1(K));
}
return 0;
}

int f1(int R) {
R += R;
return R;
}
