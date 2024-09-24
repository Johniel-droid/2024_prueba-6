#include <stdio.h>

/* Eleccion
El programa obtiene el total de votos de cada cadidato y el porcentaje
correspondiente. Tambien considera votos nulos. */
int main(void){
int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
float PO1, PO2, PO3, PO4, PO5, PON;

printf("Ingrese el primer voto: ");
scanf("%d", &VOT);

while (VOT != 0){
    switch (VOT){
    case 1: C1++; break;
     case 2: C2++; break;
      case 3: C3++; break;
       case 4: C4++; break;
        case 5: C5++; break;
        default: NU++; break;
}
printf("Ingrese el siguiente voto -0 para terminar-: ");
scanf("%d", &VOT);
}

SVO = C1 + C2 + C3 + C4 + C5 + NU;

if (SVO >0){
    PO1 = ((float)C1 / SVO) * 100;
    PO2 = ((float)C2 / SVO) * 100;
    PO3 = ((float)C3 / SVO) * 100;
    PO4 = ((float)C4 / SVO) * 100;
    PO5 = ((float)C5 / SVO) * 100;
    PON = ((float)NU / SVO) * 100;
} else {
PO1 = PO2 = PO3 = PO4 = PO5 = PON = 0;
}

printf("\nTotal de votos: %d\n, SVO");
printf("\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C1, PO5);
printf("\nNulos: %d -- Porcentaje: %5.2f", NU, PON);

return 0;
}
