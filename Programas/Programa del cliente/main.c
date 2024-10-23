#include <stdio.h>
#include <stdlib.h>

void convertir(int n);
void manu();

int main(void){
menu();
return 0;
}

void menu(){
int repetir = 1;

while (repetir){
    float numero;
    int parteentera, partedecimal;

    printf("\nIngrese un numero con dos decimales ");
    scanf("%f", &numero);

    parteentera = (int)numero;
    partedecimal = (int)((numero - parteentera) * 100);

    printf("El numero en letras es: ");
    convertir(parteentera);
    printf("con %d centavos\n", partedecimal);


printf("\nQuiere convertir otro numero? (1 = si, 0 = no): ");
scanf("%d", &repetir);
    }
}

void convertir(int n){

char *unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
char *especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve" };
char *centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

if (n == 0){
    printf("cero ");
    return;
}

if (n >= 100){
    if (n == 100){
        printf("cien ");
    } else {
    printf("%s ", centenas[n / 100]);
    }
    n = n % 100;
}

if (n >= 10 && n <= 19) {
    printf("%s ", especiales[n - 10]);
} else {

if (n >= 20){
    printf("%s ", decenas[n / 10]);
    n = n % 10;
}

if (n > 0){
    printf("%s ", unidades[n]);
}
}
}
