#include <stdio.h>

/* Prototipo de funcion. */
int Prductoria(int);

int main(void){
int NUM;


do{

printf("Ingrese el numero del cual quieres calcular la productoria (1-100): ");
scanf("%d", &NUM);
} while (NUM < 1 || NUM > 100);

printf("nLa productoria de %d es: %d\n", NUM, Productoria(NUM));

return 0;
}

int Productoria(int N){

int I, PRO = 1;

for (I = 1; I <= N; I++){
    PRO *= I;
}

return PRO;
}
