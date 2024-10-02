#include <stdio.h>
 /* Variables globales. */
 int a, b, c, d;

 void funcion1(int, int *, int *);
 int funcion2(int *, int);

 int main(void){
 int local_a =1;
 b = 2;
 c = 3;
 d = 4;

 printf("\n%d %d %d %d", local_a, b, c, d);

 local_a = funcion2(&local_a, c);
 printf("\n%d %d %d %d", local_a, b, c, d);

 return 0;
 }

 void funcion1(int r, int *b, int *c){
 int temp;
 a = *c;
 temp = a + 3 + *b;
 if (r){
    *b += 2;
    *c += 3;
    printf("\n%d %d %d %d", a, *b, *c, temp);
 } else {
     *b += 5;
    *c += 4;
    printf("\n%d %d %d %d", a, *b, *c, temp);
 }
}

int funcion2(int *d, int c) {
int b;
a =1;
b = 7;
funcion1(-1, d, &b);

printf("\n%d %d %d %d", a, b, c, *d);
c += 3;
(*d) += 2;
printf("\n%d %d %d %d", a, b, c, *d);

return c;
}
