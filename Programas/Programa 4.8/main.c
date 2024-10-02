#include <stdio.h>

/* Combinacion de variables globales y locales, y parametros por valor y por referencia. */
int a, b, c, d;

void funcion1(int *, int *);

int funcion2(int, int *);

int main(void) {
int local_a;
local_a = 1;
b = 2;
c = 3;
d = 4;

printf("\n%d %d %d %d", local_a, b, c, d);

funcion1(&b, &c);

printf("\n%d %d %d %d", local_a, b, c, d);

local_a = funcion2(c, &d);

printf("\n%d %d %d %d", local_a, b, c, d);

return 0;
}

void funcion1(int *b, int *c){
int local_d;
a = 5;
local_d = 3;
(*b)++;
(*c) += 2;
printf("\n%d %d %d %d", a, *b, c, local_d);
}

int funcion2(int c, int *d) {
int b;
a++;
b = 7;
c += 3;
(*d) += 2;
printf("\n%d %d %d %d", a, b, c, *d);
return c;
}
