#include <stdio.h>

void main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);

    cad0 = "Brasil";

    puts(cad0);

    char cad1[100];
    printf("Introduce una cadena: ");

    fgets(cad1, sizeof(cad1), stdin);
    puts(cad1);

    char cad2[20] = "Mexico";
    puts(cad2);

    printf("Introduce otra cadena: ");
    fgets(cad2, sizeof(cad2), stdin);
    puts(cad2);

    strcpy(cad2, "Guatemala");
    puts(cad2);

    return 0;



}
