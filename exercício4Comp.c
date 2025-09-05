#include <stdio.h>

int main() {

    int idades[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int idade = 7,
    i,
    verification = 0;
    const char*texto;

    for (i = 0; i < 8;i++) {
        if (idade == idades[i]) {
            verification = 1; // true

            break;
        }
    }

    if (verification) {
        printf("%d", verification);
    } else {

        //PARA NÂO DIZER QUE NÂO USEI O && 
        
        int verification2 = 1;
        
        for (int n = 0; n < 10;n++) {
            if (idade != num[n] && idade < 0) {
                texto = "Erro";
                verification2 = 0;
                break;
            } 
        }

        if (!verification2) {
            printf("%s", texto);
        } else {
            printf("%d", verification);
       }
        
    } 

    return 0;
}