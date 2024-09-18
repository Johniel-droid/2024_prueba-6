#include <stdio.h>
 /* Incremento de precio.
 El programa, al recibir como dato el precio de un producto importado,
 incrementa 11% el mismo si este es inferior a $1,500.
 PRE y NPR: variable de tipo real. */

 int main(void)
 {
     float PRE, NPR;

     printf("Ingrese el precio del producto: ");
     scanf("%f", &PRE);

     if (PRE < 1500) //Cambiar la condicion aqui
     {
         NPR = PRE * 1.11; // Incrementar el precio en 11%
         printf("\nNuevo precio: %7.2f\n", NPR);
     }
    else
    {
        printf("\nEl precio no se incrementa, sigue siendo: %7.2f\n", PRE);
    }

    return 0;
 }





