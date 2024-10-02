#include <stdio.h>
#include <stdlib.h>

/* Prototipo de funcion. */
int Expresion(int, int, int);

int main(void){
int EXP, T = 0, P = 0, Q = 0;

EXP = Expresion(T, P, Q);

while (EXP < 5500){
    Q = 0;
    while (EXP < 5500){
        printf("\nT: %d, P: %d, Q: %d, Resultado: %d", T, P, Q, EXP);
        Q++;
        EXP = Expresion(T, P, Q);
    }
    P++;
    EXP = Expresion(T, P, Q);
    if (EXP >= 5500) break;
    if (P > 100) break;
    if (Q > 100){
        P= 0;
        T++;
        EXP = Expresion(T, P, Q);
    }
}

return 0;
}

int Expresion(int T, int P, int Q) {

return 15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6);
}
