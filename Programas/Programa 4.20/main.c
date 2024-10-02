#include <stdio.h>

/*Prototipo de funcion. */
int F1(int, int *);

int A = 3;
int B = 7;
int C = 4;
int d = 2;

int main(void){
A = F1(C, &D);
printf("\n%d %d %d %d", A, B, C, D);

C = 3;
C = F1(A, &C)
printf("\n%d %d %d %d", A, B, C, D);

return 0;
}

int F1(int X, int *Y){
int result;
result = X * (*Y);
C++;
B += (*Y);

printf("\n%d %d %d %d", result, B, C, D);
(*Y)--;

return C;
}
