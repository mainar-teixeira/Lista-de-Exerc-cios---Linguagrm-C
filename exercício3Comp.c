#include <stdio.h>

int main() {

    int nmr1 = 5, nmr2 = 5,
    igual = nmr1 == nmr2,
    diferente = nmr1 != nmr2,
    maior = nmr1 > nmr2,
    menor = nmr1 < nmr2;

    printf("Igual: %d == %d = %d\nDiferente: %d != %d = %d\nMaior: %d > %d = %d\nMenor: %d < %d = %d", nmr1, nmr2, igual, nmr1, nmr2, diferente, nmr1, nmr2, maior, nmr1, nmr2, menor);
    

    
    
    return 0;
}